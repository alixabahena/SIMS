#include "Header Files\stdafx.h"

/*This file is part of SIMS (Student Information Management System).

SIMS is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SIMS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SIMS.If not, see <http://www.gnu.org/licenses/>.
*/

// Author: Yuntian Zhang
// https://github.com/MakiseKurisu/Waffle/blob/master/Waffle.dll/src/hash.c

VOID WINAPI WaffleDestroyHash(
	_In_    LPWAFFLE_HASH hHash
)
{
	if (hHash)
	{
		if (hHash->hModule)
		{
			if (hHash->CryptDestroyHash && hHash->hCryptHash)
			{
				hHash->CryptDestroyHash(hHash->hCryptHash);
			}

			if (hHash->CryptReleaseContext && hHash->hCryptProv)
			{
				hHash->CryptReleaseContext(hHash->hCryptProv, 0);
			}

			FreeLibrary(hHash->hModule);
		}

		GlobalFree(hHash);
	}
}

LPWAFFLE_HASH WINAPI WaffleCreateHash(void)
{
	LPWAFFLE_HASH hHash = (LPWAFFLE_HASH)GlobalAlloc(GPTR, sizeof(*hHash));
	if (!hHash)
	{
		WaffleDestroyHash(hHash);
		return NULL;
	}

	hHash->hModule = LoadLibrary(TEXT("advapi32.dll"));
	if (!hHash->hModule)
	{
		WaffleDestroyHash(hHash);
		return NULL;
	}
	hHash->CryptAcquireContextW = (LPCRYPTACQUIRECONTEXTW)GetProcAddress(hHash->hModule, ("CryptAcquireContextW"));
	hHash->CryptCreateHash = (LPCRYPTCREATEHASH)GetProcAddress(hHash->hModule, ("CryptCreateHash"));
	hHash->CryptDestroyHash = (LPCRYPTDESTROYHASH)GetProcAddress(hHash->hModule, ("CryptDestroyHash"));
	hHash->CryptReleaseContext = (LPCRYPTRELEASECONTEXT)GetProcAddress(hHash->hModule, ("CryptReleaseContext"));
	hHash->CryptHashData = (LPCRYPTHASHDATA)GetProcAddress(hHash->hModule, ("CryptHashData"));
	hHash->CryptGetHashParam = (LPCRYPTGETHASHPARAM)GetProcAddress(hHash->hModule, ("CryptGetHashParam"));

	if (!hHash->CryptAcquireContextW(&hHash->hCryptProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT))
	{
		WaffleDestroyHash(hHash);
		return NULL;
	}

	if (!hHash->CryptCreateHash(hHash->hCryptProv, CALG_SHA1, 0, 0, &hHash->hCryptHash))
	{
		WaffleDestroyHash(hHash);
		return NULL;
	}

	return hHash;
}

BOOL WINAPI WaffleFeedHash(
	_In_    LPWAFFLE_HASH hHash,
	_In_    LPBYTE lpBuffer,
	_In_    DWORD nNumberOfBytesRead
)
{
	return hHash->CryptHashData(hHash->hCryptHash, lpBuffer, nNumberOfBytesRead, 0);
}

BOOL WINAPI WaffleGetHashString(
	_In_    LPWAFFLE_HASH hHash,
	_Out_   LPSTR lpszResult
)
{
	lpszResult[0] = '\0';

	BYTE rgbHash[WAFFLE_HASH_LENGTH];      //SHA1LEN == 20
	DWORD cbHash = WAFFLE_HASH_LENGTH;     //MD5LEN == 16
	if (hHash->CryptGetHashParam(hHash->hCryptHash, HP_HASHVAL, rgbHash, &cbHash, 0))
	{
		CHAR rgbDigits[] = "0123456789ABCDEF";
		DWORD i, n;
		for (i = 0, n = 0; i < cbHash; i++)
		{
			lpszResult[n++] = rgbDigits[rgbHash[i] >> 4];
			lpszResult[n++] = rgbDigits[rgbHash[i] & 0xf];
		}
		lpszResult[n++] = '\0';
		return TRUE;
	}
	return FALSE;
}

string WaffleStringHash(string Input)
{
	string Result = "";

	LPWAFFLE_HASH hHash = WaffleCreateHash();
	if (hHash && WaffleFeedHash(hHash, (LPBYTE)Input.c_str(), Input.size()))
	{
		LPSTR lpszHash = (LPSTR)malloc(41);
		if (lpszHash && WaffleGetHashString(hHash, lpszHash))
		{
			Result = lpszHash;
			free(lpszHash);
		}
	}
	WaffleDestroyHash(hHash);

	return Result;
}
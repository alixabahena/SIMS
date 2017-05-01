#pragma once

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

#include <Windows.h>
#include <Wincrypt.h>

#define WAFFLE_HASH_LENGTH          20

typedef BOOL(WINAPI *LPCRYPTACQUIRECONTEXTW)(
	_Out_       HCRYPTPROV *phProv,
	_In_opt_    LPCWSTR pszContainer,
	_In_opt_    LPCWSTR pszProvider,
	_In_        DWORD dwProvType,
	_In_        DWORD dwFlags
	);

typedef BOOL(WINAPI *LPCRYPTACQUIRECONTEXTA)(
	_Out_   HCRYPTPROV *phProv,
	_In_    LPCSTR pszContainer,
	_In_    LPCSTR pszProvider,
	_In_    DWORD dwProvType,
	_In_    DWORD dwFlags
	);

typedef BOOL(WINAPI *LPCRYPTCREATEHASH)(
	_In_    HCRYPTPROV hProv,
	_In_    ALG_ID Algid,
	_In_    HCRYPTKEY hKey,
	_In_    DWORD dwFlags,
	_Out_   HCRYPTHASH *phHash
	);

typedef BOOL(WINAPI *LPCRYPTDESTROYHASH)(
	_In_  HCRYPTHASH hHash
	);

typedef BOOL(WINAPI *LPCRYPTRELEASECONTEXT)(
	_In_  HCRYPTPROV hProv,
	_In_  DWORD dwFlags
	);

typedef BOOL(WINAPI *LPCRYPTHASHDATA)(
	_In_  HCRYPTHASH hHash,
	_In_  BYTE *pbData,
	_In_  DWORD dwDataLen,
	_In_  DWORD dwFlags
	);

typedef BOOL(WINAPI *LPCRYPTGETHASHPARAM)(
	_In_     HCRYPTHASH hHash,
	_In_     DWORD dwParam,
	_Out_    BYTE *pbData,
	_Inout_  DWORD *pdwDataLen,
	_In_     DWORD dwFlags
	);

typedef struct
{
	HMODULE hModule;

	LPCRYPTACQUIRECONTEXTW CryptAcquireContextW;
	LPCRYPTCREATEHASH CryptCreateHash;
	LPCRYPTDESTROYHASH CryptDestroyHash;
	LPCRYPTRELEASECONTEXT CryptReleaseContext;
	LPCRYPTHASHDATA CryptHashData;
	LPCRYPTGETHASHPARAM CryptGetHashParam;

	HCRYPTPROV hCryptProv;

	HCRYPTHASH hCryptHash;
} WAFFLE_HASH, *LPWAFFLE_HASH;

VOID WINAPI WaffleDestroyHash(
	_In_    LPWAFFLE_HASH hHash
);

LPWAFFLE_HASH WINAPI WaffleCreateHash(void);

BOOL WINAPI WaffleFeedHash(
	_In_    LPWAFFLE_HASH hHash,
	_In_    LPBYTE lpBuffer,
	_In_    DWORD nNumberOfBytesRead
);

BOOL WINAPI WaffleGetHashString(
	_In_    LPWAFFLE_HASH hHash,
	_Out_   LPSTR lpszResult
);

string WaffleStringHash(string Input);
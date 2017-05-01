# SIMS (Student Information Management System)

	This file is part of SIMS (Student Information Management System).

	SIMS is free software : you can redistribute it and / or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	SIMS is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with SIMS.If not, see http://www.gnu.org/licenses.

*****************************************************

	Created by:

	Jonathan Martin (team lead, repo maintainer, programmer)
	Alixa Bahena (chief programmer)
	Javier Rivera (documentation)
	Yuntian Zhang (QA and programmer)
	Nhu Nguyen (diagramming and testing)

 Github Repo:
https://github.com/alixabahena/SIMS.git

For more detailed information about the Student Information Management System, please read our full documentation on this program at the following link:

https://github.com/alixabahena/SIMS/blob/master/Documentation/SIMS%20Documentation.docx
Click download to download the file.

This text file contains step-by-step instructions on how to use the Student Information
Management System. A client or user should follow these guidelines.


*****************************************************
### <b>System Requirements and Setup:</b>

	1. Microsoft Visual Studio 2015 

		ELMS WebStores is available for the distribution of Microsoft Imagine software through agreement between University of Houston and Microsoft. 
		Visual Studio provided us with a fast and simple IDE that facilitated the coding process.
	
		-If you are UHD students, faculty, or staff, you can use UHD email address or username to sign in and download. 
		Visual 	Studio Community 2015 licensed under Microsoft Imagine program. 
		-Otherwise, you must use VS 2015 (not VS 2017) to work on this project until 
		-If you do not have an account, you can click on "register" or "request an account".
		-Go to this link to download VS2015 
		https://e5.onthehub.com/WebStore/ProductsByMajorVersionList.aspx?ws=c6ac855e-e69b-e011-969d-0030487d8897
		-Install Visual Studio 2015 Community Edition w/ Update 3
		-Restart your computer.

	2. QT

		QT is a C++ based frameword of libraries and tools that enables the development of powerful interactive cross-platform applications and devices. 
		QT is open-source software. You do not need to create QT account to download the software.
	
		-Go to this link: https://www.qt.io/download-open-source/ 
		-Click "Download Now" and keep their default settings when installing.
	
	3. QT extension for Visual Studio 2015

		This will allow you to integrate QT with Visual Studio 2015.
	
		-Follow the documentation here: https://docs.google.com/document/d/19wl1C4GbSmPnjDThf_oIKv57EZzoUNInRacnHIcgiQA

	4. GitHub account
	
		Github allows different collaborators to edit and contribute to different parts of the code.
	
		-Navigate to github website: https://github.com/ to create an account.
		-Sign up with any valid email address.
		-You can fork the project, or simply copy the URL to clone the repo.
		-Be sure to learn or know the basics of how to use github and/or git.
	
	5. Github Extension for Visual Studio

		For this project we used the Github extension alongside Visual Studio 2015. 
		The extension helped us collaborate with one another in an efficient manner by letting each of us work on the project collaboratively.
	
		-This can be installed from Tools - > Extensions and Updates area of Visual Studio 2015. 
		-Search for "github" and the first result is the one that you want.
		-Restart VS 2015
		-You can clone, commit, push, branch and perform most git functions through Visual Studio now!

After setup, the following steps will help you build and run the program.


*****************************************************
### <b>Clone GitHub Repository</b>

 	-Open Visual Studio 2015
	-Click "Team Explorer tab"
	-Click "Connect"
	-Expand "Local Git Repositories"
	-Click "Clone"
	-Copy and paste this HTTPS : https://github.com/alixabahena/SIMS.git
	-Or you can also use the web URL: https://github.com/alixabahena/SIMS
	-Click "Clone"


*****************************************************
### <b>Run the Program</b>

	-After you clone the Repositories, go to "Team Explorer"
	-Under the "Solutions" tab
	-Open "SIM.sln"
	-Click save changes
	-Go to "Solution Explorer" to expand the solution
	-Now you can build and run the program
	

*****************************************************
### <b>Update Instructions (if changes have been made to the repo)</b>
	
	-Open Visual Studio 2015
	-Click "Team Explorer"
	-Click "Home" tab
	-Click "Sync"
	-Under "master" banch, click "fetch" to see commits
	-Click "Pull" to merge commits
	-The project is updated!


*****************************************************
### <b>Future Improvements:</b>

In the future we would like to implement several additional features to our system such as greater security measures to ensure the user's data maintains its integrity and improve the boundary checking process to ascertain if the user is performing a legal action.

### <b>Version History:</b>


Version 0.1
**********************************************
	-#8bd561d    -Initial Commit
	-#3428874    -Changed the layout to make the project more organized.
	-#b4a5ba5    -Worked on Implementing Pre-Compiled header to speed up build time
	-#1263c34    -Merge pull request #1 from alixabahena/Precompile-Header
	-#612c4e1    -Working on StudentView UI
	-#e0908e5    -Removed unused widget

Version 0.2
**********************************************
	-#4c11d4d    -move buttons to better locations
	-#198a754    -changed splitters to layouts to avoid users resizing
	-#ba124c0    -Added Faculty View frame. Set enter key to trigger button press
	-#8a924b7    -Edited login window 
	-#1227dfa    -Working on showing logged in user in studentView

Version 0.3
**********************************************
	-#94eb8af    -Implemented studentClass
	-#546b388    -Created base faculty class
	-#d10c261    -merged changes in master
	-#72a5219    -Implemented facultyView
	-#9bc939b    -Merge pull request from alixabahena/faculty-object 
	-#397370f    -added change password button
	-#362e292    -changed layouts around and made studentView resizeable

Version 0.4
**********************************************
	-#73bfdeda   -Login form accepts password field to login
	-#1917f2a    -changed layout of studentView to include a general information
	-#e2f7714    -Working with showing class schedule in studentview
	-#d627028    -Added the view schedule view.
	-#49e5d42    -New students.db with updated classes table 
	-#884bb80    -Merge branch 'master' 

Version 0.5
**********************************************
	-#c83a0f9    -added change password ui
	-#4815ab3    -Worked on getting view classes to display all classes
	-#ac949ee    -Merging with Ali's latest update
	-#afbda2e    -finished records pulling
	-#346d0d1    -fixed faculty data pulling by using correct syntax
	-#2823a16    -All classes are shown in view classes ui

Version 0.6
**********************************************
	-#5098ba0    -Merge branch 'master' into Implementing
	-#3a1409e    -Regenerated the ui_studentview.h file
	-#9e37b9b    -Created Manage Schedule view for student UI
	-#8ab2ef6    -Implemented the search function in view classes
	-#ff0aae0    -Make searches not case-sensitive

Version 0.7
**********************************************
	-#39815de    -Implemented viewing current student schedule
	-#9539e41    -Working on change password functions
	-#b7b6db9    -Furthered work on faculty-view
	-#98ad939    -fixed DB from population error
	-#a681d40    -update sqlite database with new password
	-#007dbaa    -change position of declared variables
	-#26ac107    -Had to reupdate vectors in each action

Version 0.8
**********************************************
	-#134fed9    -add and remove classes in manage classes menu
	-#72d537f    -Implementing errors when student adds invalid class
	-#8fba8cb    -Added the keypressed to trigger button in change password ui
	-#70164aa    -creating faculty functions
	-#e69f6ac    -editing layout of login view
	-#e37f024    -Created top-level adminview.ui buttons
	-#37dfee3    -edited selection trigers in tablewviews
	-#8ca0dc0    -Tested compliance of password changing
	-#65caf43    -edited for faculty to view classes again
	-#0c0cdf8    -added grade dialog

Version 0.9
**********************************************
	-#b82c343    -Working on the live searches
	-#949b537    -Grade can now be changed
	-#c810245    -Fixed data unintialized error of row variable
	-#4fed450    -Improved error message of invalid class additions
	-#284afae    -Fixed login in add/remove classes
	-#cc58a20    -fixed displaying correct classes
	-#35435b6    -Fixed empty space after username in Records table
	-#f006bac    -Schedule display is now correct using QsqlqueryModel
	-#cf41706    -Fix changing password
	-#982df54    -Fixed a bug where extra columns were showing in view classes

*****************************************************
### <b>Contact Us:</b>

If you have any questions about our Student Information Management System, please email us:

- Jonathan Martin	: jonmartin721@gmail.com
- Javier Rivera		: javier_rivera13@yahoo.com

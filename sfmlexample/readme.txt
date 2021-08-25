This is a read me file for the game SPACE INVADERS, made by the students of Pulchowk Campus, submitted to our lecturer Daya Sagar Baral as our project for object oriented programming.

•	Ayush Parajuli   (076BCT013) 
•	Chhatra Bikram Shah   (076BCT021)
•	Dhiraj Acharya   (076BCT023)


1.	Download our file from https://github.com/shahchhatru/spcinvaderfullscreen.git

2.	Download source code of sfml from https://www.sfml-dev.org/download/sfml/2.5.1/

3.	Click on the download file source code option.

4.	Download codeblocks 20.03

5.	Download Cmake and make binaries by specifying correct path of source file and the path where you want to build the binaries.

6.	Or you could simply get prebuilt binaries at https://drive.google.com/file/d/1MiIAcH9GqzAc8o47zTp023n35azw2SGh/view?usp=sharing

7.	After building binaries you need to open codeblocks file that we have send you. Open the project file. Here the project name is sfmlexample.cbp

Here you don’t need to worry about adding the bin directories with following files 
In debug folder of bin directory, we have added the following files.

•	sfml-graphics-d-2
•	sfml-network-d-2
•	sfml-system-d-2
•	sfml-window-d-2

Similarly in Release directly we have added the following files already for you.

•	sfml-graphics-2
•	sfml-network-2
•	sfml-system-2
•	sfml-window-2


Note: If you don’t have these file then add these files from the bin folder of sfml builds that you created with the help of cmake.

8.	After opening the codeblocks project.

9.	Go to builds options by right clicking on the project name build options.

10.	In project builds options click on your project name (make sure its highlighted), then go to search directories and compiler tab and add path to the include folder of sfml source code. In my case the path is

C:\Users\Chhatra\Downloads\SFML-2.5.1-sources\SFML-2.5.1\include


Replace that address with your address containing include folder.


Similarly go to Linker tab and add the address of sfml build binaries lib folder. In my case it is 

C:\Users\Chhatra\Downloads\build-bin-sfml\lib

Now click on debug part under the project name and make sure it is highlighted

Now go to linker settings and add these file names in link libraries selection

•	sfml-system-d
•	sfml-window-d
•	sfml-graphics-d
•	sfml-network-d

Now move to release part if any messages pop up in between the movement that asks you whether you want to add those libraries click yes or ok.

Now add the following files in release section.

•	sfml-system-d
•	sfml-window-d
•	sfml-graphics-d
•	sfml-network-d

Click ok 

If anything pops up regarding the changes you made click ok or apply changes.

11.	Now build and run the code.

If there is any problem you can also watch following video
https://www.youtube.com/watch?v=G5-8Tcz6WaU
Refer to sfml documentation: https://www.sfml-dev.org/tutorials/2.5/compile-with-cmake.php
For vscode or other ide please read sfml documentation.



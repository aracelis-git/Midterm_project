# Tic-Tac-Toe Game (Originally Q-Learning)
[![Build Status](https://travis-ci.org/aracelis-git/Midterm_project.svg?branch=master)](https://travis-ci.org/aracelis-git/Midterm_project)

---



## Overview and Purpose

Originally made to create a self-learning tic-tac-toe robot.

The final product is a tic-tac-toe game played within the command line against another person. 

The execution of the program is relatively easy. Execute the tictactoe.exe, then press any number from 1-9 to indicate your choice of move. 1 is the top left corner, 2 being the top position, and continues onwards with a top to bottom, left to right scheme. "O" and "X" take turns with "O" starting first. 

## License

Copyright 2017 Aldrin I. Racelis

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

## Dependencies

No Dependencies

## Build

After cloning the repository, build the file using cmake and make. 

	mkdir build
	cd build
	cmake ..
	make

## Demo

Below is a video of the game in action.

<a href="https://drive.google.com/open?id=0BxfrmvtnmsrXdmNpLXRlMXR1T3M"> Link to the Demo video</a>

To run the game yourself, follow the instructions for build, then in the same folder, run the following code.

	./app/tictactoegame

## SIP

<a href="https://drive.google.com/open?id=1KFQ9Ns8AJOG_RbMY5DaGz2tUdGVuaAmlSZTdXr1TY-M">Backlog</a>
<a href="https://docs.google.com/spreadsheets/d/1cvphMVsGHO1l1VFnBONkp5L9tVWFDhlSldkhnq5PvsM/edit?usp=sharing">Product Log</a>

## Tests

Unit tests made with gtest verfied the functions of both the game and gameBoard classes. To run the test, execute the following code in the root directory.

	mkdir build
	cd build
	cmake ..
	make
	test/cpp-test
	
The unit tests are integrated with Travis, as seen by the badge at the top of the readme.

## Doxygen Generation

I generated the documents using the following commands within the command line:

doxygen -g doxygenfile

doxygen doxygenfile
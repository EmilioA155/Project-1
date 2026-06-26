# Project-1
QParking Project

Group Members:
- Emilio, Drew, Lauren

How to Compile:
g++ -Wall -Wextra -o qparking main.cpp lot.cpp config.cpp status.cpp

How to Run:
./qparking
When the program starts, type the name of the configuration file.
The program will read the config file, load the initial garage layout,
and create a file called initial_output.txt that shows the starting state
of the parking lot.

Files Included:
- lot.h / lot.cpp
- config.h / config.cpp
- status.h / status.cpp
- main.cpp

Description:
This milestone reads the configuration file, loads the initial occupancy
CSV file, and outputs the initial parking lot state. No interactions or
parking logic are implemented yet.

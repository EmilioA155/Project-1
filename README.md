# Project-1
QParking Project


Group Members:

- Emilio Arellano
- Drew Rankin
- Lauren Gordon
- Kacy Lovely


How to Compile:

g++ -std=c++11 -Wall -Wextra -o qparking *.cpp


How to Run:

./qparking

When prompted, enter the configuration filename:
config.txt

The program will:
1. Read the configuration file
2. Load the initial garage occupancy
3. Load customer data
4. Process parking interactions (P: pickup, D: drop-off)
5. Output the final garage state to: final_output.txt


Files Included:

Source Files:
- main.cpp
- config.h / config.cpp
- lot.h / lot.cpp
- park.h / park.cpp
- reconfig.h / reconfigured.cpp
- samples.h / samples.cpp
- status.h / status.cpp

Input Files:
- config.txt
- occupancy.csv
- customers.csv
- samples.txt


Project Description:

This project simulates a valet parking system called QParking.

The system manages multiple parking garages using a stack-based (LIFO) approach. It reads input from configuration and CSV files, initializes the parking structure, and processes a sequence of customer interactions.

Major functionality includes:
- Reading and parsing configuration and data files
- Initializing parking garage layout
- Assigning parking spaces to incoming vehicles
- Locating cars within garages
- Processing pickup (P:) requests
- Processing drop-off (D:) requests
- Updating garage state after each interaction
- Writing the final garage layout to an output file


Notes:

- Parking currently assigns the first available spot
- Pickup removes the car directly from the garage
- Input files must be correctly formatted and located in the same directory

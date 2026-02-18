# Procs

### List Running Processes on Linux (C++)

The source code of this project is in `main.cpp` file. It is a simple C++ program that uses /proc filesystem to display all running processes in Ubuntu (the PID and process name).

![demo](./demo.gif)

## How to Run

Method 1: Using g++
- download the source code (main.cpp)
- open terminal and navigate to the directory where main.cpp is located
- compile the code using the command: `g++ main.cpp -o procs`
- run the compiled program using the command: `./procs`

Method 2: Get the executable file
- download the executable file (procs)
- open terminal and navigate to the directory where procs is located
- run the program using the command: `./procs`

## Output

When you run the program, it will display a list of all running processes in the following format:

```
PID: 1234, Name: process_name
...
```

Where `PID` is the process ID and `Name` is the name of the process.


### Made for "The Game" event hosted by HackClub



all: procs

procs: main.cpp
	g++ -O2 -Wall -Wextra -std=c++17 -o procs main.cpp

clear: 
	rm -f procs
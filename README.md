# Elevator Multi-Threading
https://www.cs.uic.edu/~ckanich/cs361/s16/homework6.html
- Implement an elevator controller for a building with F floors
- The elevator controller is split in between 2 "Classes" Elevator and Building 
	- Since C does not use classes, I will simply make seperate .c files for these
- There is a thread for each rider, and a thread for each elevator
- The elevator and rider threads use the Elevator and Building classes for synchronization
- The rider threads use the buildingRider functions to: 
	- CallUp the elevator then wait for an elevator to arrive for travel in the requested direction
	- CallDown the elevator then wait for an elevator to arrive for travel in the requested direction
- The rider threads use the elevatorRider functions to: 
	- Enter
	- Exit
	- RequestFloor
- Each elevator runs as a separate thread looping through the elevator functions which are: 
	- VisitFloor
	- OpenDoors
	- CloseDoors
	
	

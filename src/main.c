#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <semaphore.h>
#include <pthread.h>

uint8_t building_height=8;
// The queue is an array of adjustable size so be careful
struct elevator {
    int ID;
    int curFloor;
    int* floorQueue;
};

struct rider {
    int ID;
    int curFloor;
    int destFloor;
};

void* rider(void* num) {
    rider rid;
    int i* = num;
    rid.ID = i;
    rid.curFloor = rand 
    rid.destFloor = rand 
    // If cur and dest are the same, keep rotating dest floor
    while (rid.curFloor == rid.destFloor) {
        rid.destFloor = rand
    }
    reqFloor(ID, rid.curFloor, rid.destFloor);
    // now that the elevator is on our floor, the elevator should move us and we wait
    // basically the elevator should do everythign from here for us
    // I think they should talk via mutex's or semaphore, but I gotta look into this
}

void *elevator(void* num) {
    elevator curEl;
    int *i = num;
    curEl.ID = i;
    // All elevators will start on floor 1
    curEl.curFloor=1;
    curEL = (int*)malloc(building_height * sizeof(int));
    
    // Wait for reqElevator
    // Once a reqElevator is called, see who can pick the up
    // Once we are at a floor of interest open/close door and adjust queue
    // These run infinitly until riders close
}

int main() {
    uint8_t num_riders=3;
    // start and end floors will be randomized to make it easy
    uint8_t num_elevators=3; 
// The above will be put into inputs once we get this to work
//printf("\nHow many people are waiting? "); 
//scanf("%hhd", &num_people);
//	
//printf("How many buildings are there? "); 
//scanf("%hhd", &num_floors); 
//	
//printf("How long is everyone willing to wait? "); 
//scanf("%hhd", &waitTime); 
	
    pthread_t riderT[num_riders]; 
    pthread_t elevatorT[num_elevators];
    uint8_t i;
    for(i=0; i<num_riders; i++) {
        uint8_t* ID = malloc(sizeof(uint8_t));
        *ID = i;
    //    pthread_create(&riderT[i], NULL, people, ID); 
    }
    for(i=0; i<num_elevators; i++) {
        uint8_t* ID = malloc(sizeof(uint8_t));
        *ID = i;
    //    pthread_create(&elevatorT[i], NULL, people, ID); 
    }

    for(i=0; i<num_riders; i++) {
    //    pthread_join(riderT[i], NULL); 
    }
    for(i=0; i<num_elevators; i++) {
    //    pthread_join(riderT[i], NULL); 
    }

    printf("Everyone has been sent to the floor they requested\n"); 
    printf("There are %d people, %d floors, and %d seconds", num_people, num_floors, waitTime); 
    return 0; 
}


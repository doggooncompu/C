#include <stdio.h>


// define struct object -- used for creating two objects to run in the simulation 
typedef struct {
    double mass;
    double velocityx;
    double velocityy;
    double accelx;
    double accely;
    int x;
    int y;
} OBJECT;

int main(){
    int g = 0.1; //gravitational constant

    //---------- INITIALIZE OBJECT1 --------------//
    OBJECT matter1; 
    matter1.mass = 1;
    matter1.velocityx  = 0;
    matter1.velocityy = 0;
    matter1.x = 0;
    matter1.y = 5;
    
}

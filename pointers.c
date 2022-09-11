#include <stdio.h>

int main()
{
    //Declare Age of America, as an int.
    int age_of_america;
    //Declare pointer to AoA, as an int.
    int *pointer;
    //Define AoA.
    age_of_america = 246;
    //Define pointer to AoA, referencing its address.
    pointer = &age_of_america;
    //Print address of AoA (through the pointer).
    printf("Address of AoA is %d\n", pointer);
    //Print value of AoA (by dereferencing the pointer).
    printf("Value of AoA is %d\n", *pointer);
}
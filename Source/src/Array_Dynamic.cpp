//Here we are using dynamic memory allocation for array
#include<array>
#include<iostream>
#include<string>
#include "Classes/Dragon.h"





int main(int argc, char const *argv[])
{

    //! this is the main Difference of a static and dynamic array
    int m = 10;
    int* dynamic_array = new int[m];
    
    
    

    // so here we are creatin a 69 sloted array at heap and storing the address in the  pointer
    // TODO delete this
    int * array_pointer = new int [69];


    // Creating a New Dragon  its Will born with 5 ability 
    // TODO DELETE    
    Dragon* MasterDragon = new Dragon("Master Dragon ",10,1000000,5);


    //? Creating  Swiming Ability For Dragon 
    Ability * SwimingAbility = new Ability ;
    SwimingAbility->Name = "Swiming Ability ";
    SwimingAbility->CoolDown = 60 ;

    // ! Givng the  Dragon Swiming ability 
    MasterDragon->AddAbility(SwimingAbility);


    // * so we dont need to delete this ability because this abilty is pasing 
    // * as a pointer in the abiity container
    //delete SwimingAbility;


    // Adding Value to num 10 
    array_pointer[10]=54;

    //print 
    printf("the value of Array At Postion %d is : %d \n ", 10-1,array_pointer[10] );
    printf("The %s Created Sucessfully !!!  " ,MasterDragon->Name.c_str());




    //!Delete

    delete MasterDragon ;
    delete dynamic_array;
    delete array_pointer;



    return 0;
}

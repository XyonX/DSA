#include<array>
#include<iostream>

//DSA -Array
int main(int argc, char const *argv[])
{
    
    //array of int having a size of 69
    int var_array [10] ;

    //initializing an array
    int var_array_init [10]={35,84,76,46,75,94,16,53,46,45};

    //storing a value at a particular place 
    var_array[10] =100;

    //getting a value from an array 
    int value_of_element = var_array_init[9];
    value_of_element = 9[var_array_init];
    value_of_element = *(var_array_init+9);



    // Getting all the  value of an array 

    for (int  i = 0; i < sizeof(var_array_init)/sizeof(var_array_init[0]) ; i++)
    {
       printf(" the value of %d th element is : %d \n",i+1 ,var_array_init[i]);
       printf("the Address of  %d th element is : %u \n",i+1,&var_array[i]);
    }


    


    return 0;
}

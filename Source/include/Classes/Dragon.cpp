
#include<Classes/Dragon.h>
/*
void Dragon::AddAbility(Ability* ability)
{
    AllAbilities[0] = *ability;
}*/

void Dragon::InitDragon(std::string name , int height ,int salary , int number_of_ability)
{
    Name =name ;
    Height = height;
    Salary=salary;
    NumberOfAbilities =number_of_ability;
}

void Dragon::AddAbility(Ability *ability)
{
    AllAbilities[0] = ability;
}


Dragon::Dragon(std::string name , int height ,int salary , int number_of_ability )  :Name(name) , Height(height),Salary(salary),NumberOfAbilities(number_of_ability)
{
    //! this is how we can use a function to initiazlie of member variable of a class
    //InitDragon(std::string name , int height ,int salary , int number_of_ability);
    // ! When a Dragon Borns It gets a random number of Ability 
    AllAbilities = new Ability*[number_of_ability];
}

Dragon::~Dragon()
{

    delete[] AllAbilities;
}
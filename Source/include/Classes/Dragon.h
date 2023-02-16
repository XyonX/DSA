#include<string>
#include<string>


//! Abilities Dragon Could Have
struct Ability
{
    std::string Name ;
    int CoolDown ;
};


// ! This IS A Class Representing Dragons
class Dragon
{
private:

    //? Stamina is secret for the dragon  He dotn Want to reveal it to anyone not even his family members
    int Salary ;
    int NumberOfAbilities ;


    //* this is a pointer wich stores abilty as a value 
    //Ability *AllAbilities ;
    //* this is a pointer which stores the ability as a pointer
    Ability** AllAbilities; 

public:
    //? Anyone can see his Height 
    std::string Name ;
    int Height ;


    // ! FUNCTIONS

    void InitDragon(std::string name , int height ,int salary , int number_of_ability);
    void AddAbility(Ability* ability);

    Dragon(std::string name , int height ,int salary , int number_of_ability);
    ~Dragon();
};
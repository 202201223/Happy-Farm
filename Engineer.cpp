#include "Engineer.h"
#include <string>
#include <vector>
using namespace std;

// Default Constructor
Engineer::Engineer()
{
    Name = "";
    Age = 0;
    Gender = "";
    No_Of_Built_Houses = 0;
    No_Of_Sqr_Ft_Farmed = 0;
}
// Parametrized Constructor

Engineer::Engineer(string Name, int Age, string Gender) : Person(Name, Age, Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
}

Engineer::Engineer(string Name, int Age, string Gender, int AnimalHouse, double LandFeet, int No_Working_Hour) : Person(Name, Age, Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->No_Of_Built_Houses = AnimalHouse;
    this->No_Of_Sqr_Ft_Farmed = LandFeet;
    this->No_Working_Hour = No_Working_Hour;
}

// Setter Functions:
void Engineer::setName(string nam) { Name = nam; }
void Engineer::setAge(int age) { Age = age; }
void Engineer::setGender(string gender) { Gender = gender; }
void Engineer::SetNo_Of_Built_Houses(int AnimalHouse) { No_Of_Built_Houses = AnimalHouse; }
void Engineer::SetNo_Of_Sqr_Ft_Farmed(double LandFeet) { No_Of_Sqr_Ft_Farmed = LandFeet; }
void Engineer::SetNo_Working_Hour(double WorkingHour) { No_Working_Hour = WorkingHour; }

// Getter Function
string Engineer::getName() { return Name; }
int Engineer::getAge() { return Age; }
string Engineer::getGender() { return Gender; }
int Engineer::GetNo_Of_Built_Houses() { return No_Of_Built_Houses; }
double Engineer::GetNo_Of_Sqr_Ft_Farmed() { return No_Of_Sqr_Ft_Farmed; }
int Engineer::GetNo_Working_Hour() { return No_Working_Hour; }

// Methods
void Engineer::get_occupation()
{
    cout << "Occupation : Engineer" << endl;
}

void Engineer::Display()
{
    cout << "The name of the Engineer" << Name << endl;
    cout << "The age of the Engineer " << Age << endl;
    cout << "the Number of houses that he built" << No_Of_Built_Houses << endl;
    cout << "the Number of the feet farmed " << No_Of_Sqr_Ft_Farmed << endl;
    cout << "The number of working hour" << No_Working_Hour << endl;
}

void Engineer::cultivate_land() {
        if (No_Of_Built_Houses == 0) {
            No_Of_Sqr_Ft_Farmed += 10;
            cout << "Engineer " << getName() << " cultivated 10 square feet of land." <<endl;
        } else {
            cout << "Engineer " << getName() << " cannot cultivate land while building a house." <<endl;
        }
    }

void Engineer:: build_animal_house() {
     Engineer E1;
        if (E1.GetNo_Of_Built_Houses() < 4) {
           No_Of_Built_Houses++;
            cout << "Engineer " << E1.getName() << " built an animal house. House " << E1.GetNo_Of_Built_Houses() << " of 4." <<endl;
        } else {
            cout << "Engineer " << E1.getName() << " has already built 4 animal houses." <<endl;
        }
    }
double Engineer::calc_salary()
{
    double Total_Salary;
    int working_hour_salary = 0;
    int house_salary = 0;
    const int Salary_Cultivate_Land = 2500;

    if (No_Working_Hour == 4)
    {
        working_hour_salary = 2000; // Part time
    }
    else if (No_Working_Hour == 8)
    {
        working_hour_salary = 4000; // Full time
    }

    while (No_Of_Built_Houses <= 4)
    {
        if (No_Of_Built_Houses == 1)
        {
            house_salary = 2000;
        }
        else if(No_Of_Built_Houses == 2)
        {
            house_salary = 4000;
        }
        else if(No_Of_Built_Houses == 3)
        {
            house_salary = 6000;
        }
        else if(No_Of_Built_Houses == 4)
        {
            house_salary = 8000;
        }
    }

    Total_Salary = Salary_Cultivate_Land + house_salary + working_hour_salary;
    return Total_Salary;
}

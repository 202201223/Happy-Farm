#ifndef ENGINEER_H
#define ENGINEER_H
#include "Person.h"
#include <iostream>
#include<string.h>
#include <vector>
using namespace std;

class Engineer :public Person {
    // Member Private Variables
private:
    string Name;
    int Age;
    string Gender;
    int No_Of_Built_Houses;
    double No_Of_Sqr_Ft_Farmed;
    int No_Working_Hour;

  //Public Members:
public:

    // Default Constructor
    Engineer();

    // Parametrized Constructor
    Engineer(string Name, int Age, string Gender);   

    Engineer(string Name, int Age, string Gender,int AnimalHouse,double LandFeet,int No_Working_Hour);

    // Setter Functions
    void setName(string nam);
    void setAge(int age);
    void setGender(string gender);
    void SetNo_Of_Built_Houses(int AnimalHouse);
    void SetNo_Of_Sqr_Ft_Farmed(double LandFeet);
    void SetNo_Working_Hour(double WorkingHour);


    // Getter Functions
    string getName();
    int getAge();
    string getGender();
    int GetNo_Of_Built_Houses();
    double GetNo_Of_Sqr_Ft_Farmed();
    int GetNo_Working_Hour();

    // Methods
    void get_occupation();
    void Display();
    void cultivate_land();
    void build_animal_house();
    double calc_salary();
    
};
#endif // ENGINEER_H

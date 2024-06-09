#ifndef PERSON_H
#define PERSON_H
#include "Vet.h"
#include "Engineer.h"
#include "Worker.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
    // Member Protected Variables
protected:
    string Name;
    string Gender;
    int Age;

    // Public Members:
public:
// Enumeration
    enum Occupation
    {
        Vet = 1,
        Worker,
        Owner,
        Engineer
    };
    // Default Constructor
    Person();

    // Parametrized Constructors
    Person(string Name, int Age, string Gender);

    Person(string Name, int Age, string Gender, Occupation* OCC);

    Person(string Name, Occupation* OCC);

    // Virtual functions
    virtual void get_occupation() = 0;
    virtual void Display() = 0;
    virtual double calc_salary() = 0;
    Person *PersonOccupation(Occupation OCC);

    // Setter Functions
    void setName(string nam);
    void setAge(int age);
    void setGender(string gender);

    // Getter Functions
    string getName();
    int getAge();
    string getGender();

    // Destructor
    ~Person();
};

#endif // PERSON_H

     


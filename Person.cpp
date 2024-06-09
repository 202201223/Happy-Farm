#include "Person.h"
#include "Engineer.h"
#include "Vet.h"
#include "Worker.h"
#include <string>
#include <vector>
using namespace std;

// Default Constructor
Person::Person()
{
    Name = "";
    Age = 0;
    Gender = "";
}

// Parametrized Constructors
Person::Person(string Name, int Age, string Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
}

Person::Person(string Name, int Age, string Gender, Occupation* OCC)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    PersonOccupation(OCC);
}

Person::Person(string Name, Occupation* OCC)
{
    this->Name = Name;
    PersonOccupation(OCC);
}

// Setter Function
void Person::setName(string nam) { Name = nam; }

void Person::setAge(int age) { Age = age; }

void Person::setGender(string gender) { Gender = gender; }

// Getter Functions
string Person::getName() { return Name; }

int Person::getAge() { return Age; }

string Person::getGender() { return Gender; }

// Methods

Person *Person::PersonOccupation(Occupation OCC)
{
   if (OCC == Vet)
    {
        Vet* vet = new Vet(Name, Age, Gender);
        return vet;
    }
    else if (OCC == Engineer)
    {
        Engineer* engineer = new Engineer(Name, Age, Gender);
        return engineer;
    }
    else if (OCC == Worker)
    {
        Worker* worker = new Worker(Name, Age, Gender);
        return worker;
    }
    else
    {
        cout << "This Occupation is not in the Farm Management" << endl;
    }
}

// Destructor
Person::~Person() {}
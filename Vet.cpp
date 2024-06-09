#include "Vet.h"
#include "Person.h"
#include "Animal.h"
#include <string>
#include <vector>

// Default Constructor
Vet::Vet()
{
    Name = "";
    Age = 0;
    Gender = "";
    total_salary = 0.0;
    No_Of_Working_Hour = 0;
    Rate = 0.0;
    No_Of_Animal_Heal = 0;
}
// Parametrized Constructor:

Vet::Vet(string Name, int Age, string Gender) : Person(Name, Age, Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    total_salary = 0.0;
    No_Of_Working_Hour = 0;
}

Vet::Vet(string name, int age, string gender, int workingHour, double rate, int animalHeal)
    : Person(name, age, gender)
{
    this->Name = name;
    this->Age = age;
    this->Gender = gender;
    this->No_Of_Working_Hour = workingHour;
    this->Rate = rate;
    this->No_Of_Animal_Heal = animalHeal;
}

Vet::Vet(string name, int age, string gender, double total_salary, int workingHour, double rate, int animalHeal)
    : Person(name, age, gender)
{
    this->Name = name;
    this->Age = age;
    this->Gender = gender;
    this->total_salary = total_salary;
    this->No_Of_Working_Hour = workingHour;
    this->Rate = rate;
    this->No_Of_Animal_Heal = animalHeal;
}

//  Setter Function:
void Vet::setName(string name) { Name = name; }
void Vet::setAge(int age) { Age = age; }
void Vet::setGender(string gender) { Gender = gender; }
void Vet::setSalary(double salary) { total_salary = salary; }
void Vet::setWorkingHour(int workingHour) { No_Of_Working_Hour = workingHour; }
void Vet::setRate(double rate) { Rate = rate; }
void Vet::setAnimalHeal(int animalHeal) { No_Of_Animal_Heal = animalHeal; }

// Getter Function:
string Vet::getName() { return Name; }
int Vet::getAge() { return Age; }
string Vet::getGender() { return Gender; }
double Vet::getSalary() { return total_salary; }
int Vet::getWorkingHour() { return No_Of_Working_Hour; }
double Vet::getRate() { return Rate; }
long Vet::getAnimalHeal() { return No_Of_Animal_Heal; }

double Vet::calc_salary()
{
    int working_hour_salary = 0;
    int rate_salary = 0;
    int healing_salary = 0;
    if (No_Of_Working_Hour == 4)
    {
        working_hour_salary = 2000; // Part time
    }
    else if (No_Of_Working_Hour == 8)
    {
        working_hour_salary = 4000; // Full time
    }

    if (Rate >= 1 && Rate <= 3)
    {
        rate_salary = 1000;
    }
    else if (Rate >= 4 && Rate <= 6)
    {
        rate_salary = 2000;
    }
    else if (Rate >= 7 && Rate <= 10)
    {
        rate_salary = 3000;
    }

    if (No_Of_Animal_Heal == 1)
    {
        healing_salary = 1000;
    }
    else if (No_Of_Animal_Heal == 2)
    {
        healing_salary = 2000;
    }
    else if (No_Of_Animal_Heal == 3)
    {
        healing_salary = 3000;
    }
    else
    {
        if (No_Of_Animal_Heal > 3)
            cout << "Each Vet can heal only per month " << endl;
    }

    total_salary = working_hour_salary + rate_salary + healing_salary;
    return total_salary;
}

// Methods:
void Vet::heal(Animal *animals)
{
    const int Heal_Per_Month = 3;
    int durationMonth;
    cout << "Enter the duration of the heal in month:" << endl;
    cin >> durationMonth;
    if ((No_Of_Animal_Heal <= Heal_Per_Month)&&(animals->isSick()))
    {
        if (durationMonth <= 2)
        {
            cout << "this Animal is heals by the vet. "<<endl;
            No_Of_Animal_Heal++;
        }
        else
        {
            animals->die();
        }
    }
    else
    {
        cout << "Each Vet Can Heal only three animal per month not more"<< endl;
    }
}

void Vet::Display()
{
    cout << "The Vet Name is " << getName() << endl;
    cout << "The Vet Age is " << getAge() << endl;
    cout << "The Vet Gender is " << getGender() << endl;
    cout << "The Vet WorkingHour is " << getWorkingHour() << endl;
    cout << "The Vet Rate is " << getRate() << endl;
    cout << "The Number of animals that heal by the vet is " << getAnimalHeal() << endl;
}

void Vet::get_occupation()
{
    cout << "Occupation: Veterinarian" << endl;
}
Vet::~Vet() {}

#ifndef VET_H
#define VET_H
#include "Person.h"
#include "Animal.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vet : public Person
{

     // Private Member Variable:
private:
     string Name;
     int Age;
     string Gender;
     double total_salary;
     int No_Of_Working_Hour;
     double Rate;
     int No_Of_Animal_Heal;

     // Public Member :
public:
     // Default Constructor:
     Vet();

     // Parametrized Constructor
     Vet(string Name, int Age, string Gender);

     Vet(string name, int age, string gender, int workingHour, double rate, int animalHeal);

     Vet(string name, int age, string gender, double total_salary, int workingHour, double rate, int animalHeal);

     // Setter Functions
     void setName(string name);
     void setAge(int age);
     void setGender(string gender);
     void setSalary(double salary);
     void setWorkingHour(int workingHour);
     void setRate(double rate);
     void setAnimalHeal(int animalHeal);

     // GetterFunction
     string getName();
     int getAge();
     string getGender();
     double getSalary();
     int getWorkingHour();
     double getRate();
     long getAnimalHeal();

     // Methods:
     double calc_salary();
     void heal(Animal *animals);
     void Display();
     void get_occupation();

     // Destructor
     ~Vet();
};
#endif // VET_H
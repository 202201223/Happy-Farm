#ifndef FIELD_H
#define FIELD_H
#include "Person.h"
#include "Worker.h"
#include "Plant.h"
#include "Product.h"
#include "Corn.h"
#include "Rice.h"
#include "Wool.h"
#include "Milk.h"
#include "Egg.h"
#include "Wheat.h"
#include <iostream>
#include <string>
#include <vector>

class Field : public Worker 
{
    // Private Member Variable:
private:
    string Name;
    int Age;
    string Gender;
    double salary;
    // Public Member :
public:
// Enumeration:
    enum SalaryEnumeration
    {
        PartTime = 2000,
        FullTime = 4000,
    };
    // Default Constructor
    Field();

    // Parametrized Constructor
    Field(string Name, int Age, string Gender);

    Field(string Name,int Age, string Gender,SalaryEnumeration salary);

    Field(string Name, int Age, string Gender,double salary);

    // Setter Function
    void setName(string name);
    void setAge(int age);
    void setGender(string gender);

    // Getter Function:
    string getName();
    int getAge();
    string getGender();

    // Methods:
    Product* add_Products(Animal::Production &p1);
    Plant* add_Crops(Plant::PlantType &p1);
    void plant_land(Plant *plant);
    void get_occupation();
    void Display();
    void set_Salary();
    double get_Salary();
    double WorkingHour(SalaryEnumeration salary);
    

    // Destructor:
    ~Field();
};
#endif // FIELD_H
#ifndef OFFICE_H
#define OFFICE_H
#include "Person.h"
#include "Worker.h"
#include "Product.h"
#include "Animal.h"
#include <string.h>
#include <iostream>
using namespace std;

class Office : public Worker 
{
    // Private Member Variable
private:
    string Name;
    string Gender;
    int Age;
    long Office_Number;
    double FarmCap;
    double salary;
    // Public Member Variable
public:

    // Enumeration:
    enum SalaryEnumeration
    {
        PartTime = 3000,
        FullTime = 6000,
    };
    // Default Constructor:
    Office();

    // Parametrized Constructor
    Office(string Name,int Age, string Gender);

    Office(string Name,int Age, string Gender,SalaryEnumeration salary);

    Office(string Name, int Age, string Gender, long Office_Number, double FarmCap);

    Office(string Name,int Age,string Gender,long Office_Number, double FarmCap,double salary);

    // Setter Functions
    void setName(string name);
    void setAge(int age);
    void setGender(string gender);
    void setOffice_Num(long office);
    void setFarmCap(double capacity);

    // Getter Functions
    string getName();
    int getAge();
    string getGender();
    long getOffice_Num();
    double getFarmCap();

    // Methods:
    void get_occupation();
    void Display();
    void set_Salary(double salary);
    double get_Salary();
    // Product buy_product(Product *product1);
    void sell_product(Product *product2);
    // Animal buy_animal(Animal *animal1);
    void sell_animal(Animal *animal2);
    Office *WorkingHour(SalaryEnumeration salary);
    
    // Destructor:
    ~Office();
};
#endif // OFFICE_H
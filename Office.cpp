#include "Office.h"
#include "Worker.h"
#include "Animal.h"
#include "Product.h"
#include <string>
#include <vector>
using namespace std;

// Default Constructor
Office::Office()
{
    Name = "";
    Age = 0;
    Gender = "";
    Office_Number = 0;
    FarmCap = 0.0;
    salary = 0.0;
}

// Parametrized Constructor
Office::Office(string Name, int Age, string Gender): Worker(Name, Age, Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
}

Office::Office(string Name, int Age, string Gender,SalaryEnumeration salary): Worker(Name, Age, Gender) 
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    WorkingHour(salary);
}

Office::Office(string Name,int Age,string Gender,long Office_Number, double FarmCap)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->Office_Number = Office_Number;
    this->FarmCap = FarmCap;
}

Office::Office(string Name, int Age, string Gender, long Office_Number, double FarmCap,double salary) : Worker(Name, Age, Gender,salary)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->Office_Number = Office_Number;
    this->FarmCap = FarmCap;
    this->salary = salary;
}

// Setter Function
void Office::setName(string nam) { Name = nam; }
void Office::setAge(int age) { Age = age; }
void Office::setGender(string gender) { Gender = gender; }
void Office::setOffice_Num(long office) { Office_Number = office; }
void Office::setFarmCap(double capacity) { FarmCap = capacity; }

// Getter Functions
string Office::getName() { return Name; }
int Office::getAge() { return Age; }
string Office::getGender() { return Gender; }
long Office::getOffice_Num() { return Office_Number; }
double Office::getFarmCap() { return FarmCap; }

// Methods:
void Office::get_occupation()
{
    cout << "Occupation : Office Worker" << endl;
}

void Office::set_Salary(double salary)
{
    salary = salary;
}

double Office::get_Salary()
{
    return salary;
}

void Office::sell_product(Product *product2)
{
    double Selling_Price;
    if (FarmCap > product2->GetPrice())
    {
        Selling_Price = FarmCap - product2->GetPrice();
        cout << "The product will be available to buy" << endl;
        cout << "its price is" << GetPrice() << endl;
        cout << "The price that will be discount from Farm Capability is :  " << Selling_Price << endl;

    }
    else 
    {
        cout << "The Farm Capability will nor be aloud to buy the animal" << endl;
    }

}

// Product* office::buy_product(Product * product1)
// {
    
// }

void Office::sell_animal(Animal *animal2)
{
    double Selling_Price;
    if (FarmCap > animal2->GetPrice())
    {
        Selling_Price = FarmCap - animal2->GetPrice();
        cout << "The product will be available to buy" << endl;
        cout << "its price is" << animal2->GetPrice() << endl;
        cout << "The price that will be discount from Farm Capability is :  " << Selling_Price << endl;
    }
     else
    {
        cout << "The Farm Capability will not be aloud to buy the animal" << endl;
    }   
}

// Animal* Office::buy_Animal(Animal *animal1)
// {
    
// }

double Office::WorkingHour(SalaryEnumeration salary)
{
    if (salary == PartTime)
    {
        salary = 3000;
       return get_Salary();
    }
    else if(salary ==FullTime)
    {
        salary = 6000;
       return get_Salary();
    }
}

void Office::Display()
{
    cout << "The Office Name : " << getName() << endl;
    cout << "The Office Age : " << getAge() << endl;
    cout << "The Office Gender : " << getGender() << endl;
    cout << "The Office Salary : " << get_Salary() << endl;
    cout << "The Office room : " << getOffice_Num() << endl;
    cout<<"The Farm Capability is :"<<getFarmCap()<<endl;
}



// Destructor:
Office::~Office(){}


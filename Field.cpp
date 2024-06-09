#include "Field.h"
#include "Product.h"
#include "Corn.h"
#include "Rice.h"
#include "Wool.h"
#include "Milk.h"
#include "Egg.h"
#include "Wheat.h"
#include <string>
#include <vector>
using namespace std;

// Default Constructor
Field::Field()
{
    Name = "";
    Age = 0;
    Gender = "";
    salary = 0.0;
}

// Parametrized Constructor
Field::Field(string Name, int Age, string Gender):Worker(Name,Age,Gender)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
}

Field::Field(string Name,int Age, string Gender,SalaryEnumeration salary)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    WorkingHour(salary);
}

Field::Field(string Name, int Age, string Gender,double salary)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->salary = salary;
}


// Setter Function
void Field::setName(string nam) { Name = nam; }
void Field::setAge(int age) { Age = age; }
void Field::setGender(string gender) { Gender = gender; }

// Getter Functions
string Field::getName() { return Name; }
int Field::getAge() { return Age; }
string Field::getGender() { return Gender; }

// Methods:
void Field::get_occupation()
{
    cout << "Occupation : Field Worker" << endl;
}

void Office::set_Salary(double salary)
{
    salary = salary;
}

double Office::get_Salary()
{
    return salary;
}

Product* Field::add_Products(Animal::Production &product)
{
    if (product == Animal::MILK)
    {
        Milk *milk = new Milk(Price); 
        return milk;
    }
    else if (product == Animal::WOOL)
    {
        Wool *wool = new Wool(Price);
        return wool;
    }
    else if (product == Animal::EGG)
    {
        Egg *egg = new Egg(Price);
        return egg;
    }
    else{cout<<"this is not Available in the far."<<endl;}
}

Plant* Field::add_Crops(Plant::PlantType &p1)
{
    if (p1 == Plant::RICE)
    {
        Rice *rice = new Rice();
        return rice;
    }
    else if(p1 == Plant::WHEAT)
    {
        Wheat *wheat = new Wheat();
        return wheat;
    }
    else if(p1 == Plant::CORN)
    {
        Corn *corn == new Corn();
        return corn;
    }
    else{cout<<"this is not Available in the far."<<endl;}
}

double Field::WorkingHour(SalaryEnumeration salary){
   if (salary == PartTime)
    {
        return 2000;
    {
    else if(salary == FullTime)
    {
        return 4000;
    }
      return 0; 
}
    }

void Field::plant_land(Plant* plant) {
        double Yield = plant->AddYield();
        double pricePerKilo = plant->getPrice();
        int yearlyYield = plant->getYearYield();
        double totalFarmCAP = Yield * pricePerKilo * yearlyYield;
        std::cout << "Added crops worth " << totalFarmCAP << " to the farm's inventory." <<endl;
}
// void Field::get_occupation()
// {
//     cout << "Occupation : Field Worker" << endl;
// }

void Field::Display()
{
    cout << "The Field Name : " << getName() << endl;
    cout << "The Field Gender : " << getGender() << endl;
    cout << "The Field Salary : " << get_Salary() << endl;
    cout << "The Field Age : " << getAge() << endl;
}

void Field::set_Salary()
{
    salary = salary;
}

double Field::get_Salary()
{
    return salary;
}

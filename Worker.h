#ifndef WORKER_H
#define WORKER_H
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Worker : public Person {
// Member protected Variables:
protected:
    string Name;
    string Gender;
    int Age;
    double Salary;
    // Public Members:
public:
 // Enumeration
    enum SalaryEnumeration
    {
        PartTime ,
        FullTime ,
    };
    // Default Constructor
    Worker();

    // Parametrized Constructor
    Worker(string Name, int Age, string Gender);

    Worker(string Name, int Age, string Gender, double Salary);

    // Setter Functions
    void setName(string nam);
    void setAge(int age);
    void setGender(string gender);

    // Getter Functions
    string getName();
    int getAge();
    string getGender();

    // Methods:
    void get_occupation();
    void Display();
    virtual void set_Salary() = 0;
    virtual double get_Salary() = 0;

    // Destructor
    ~Worker();
};

#endif // WORKER_H
#include "Worker.h"
 #include "Person.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// Default Constructor
Worker::Worker() {
    Name = "";
    Age = 0;
    Gender ="";
    Salary = 0.0;
}

// Parametrized Constructor
Worker::Worker(string Name, int Age, string Gender):Person(Name, Age, Gender){
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
}

Worker::Worker(string Name, int Age, string Gender,double Salary):Person(Name,Age,Gender) {
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->Salary = Salary;
}

// Setter Function
void Worker::setName(string nam){Name = nam;}
void Worker::setAge(int age){Age = age;}
void Worker::setGender(string gender){Gender = gender;}
//void Worker::setSalary(double salary){Salary = salary;}

// Getter Functions
string Worker::getName(){return Name;}
int Worker::getAge(){ return Age;}
string Worker::getGender(){return Gender;}
//double Worker::getSalary(){return Salary;}

// Methods:
void Worker::get_occupation(){
    cout<<"Occupation : Worker"<<endl;
}
void Worker::Display(){
    cout<<"The Worker Name : "<<getName()<<endl;
    cout<<"The Worker Age : "<<getAge()<<endl;
    cout<<"The Worker Gender : "<<getGender()<<endl;
    // cout<<"The Worker Salary : "<<get_Salary()<<endl;
}
// Destructor
// Worker::~Worker(){}



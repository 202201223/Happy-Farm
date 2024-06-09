#ifndef EGG_H
#define EGG_H
#include "Animal.h"
#include "Office.h"
#include "Field.h"
#include "Plant.h"
#include <iostream>
#include<string.h>
#include <vector>
using namespace std;

class Egg:public Product{

    // Protected member variables:
private:
    double price;
    int Number;

    // Public member variables:
public:
    // Default Constructor
    Egg();

    // Parametrized Constructor:
    Egg(double price,int Number) ;

    // Setter Function
    void SetPrice(double price);
    void SetNumber(int number);

    // Getter Function:
    double GetPrice();
    int GetNumber();


    // Destructors:
    ~Egg();
};
#endif //EGG_H
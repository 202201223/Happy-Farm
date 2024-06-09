#include "Egg.h"
#include"Plant.h"
#include "Product.h"

Egg::Egg()
{
    price = 0.0;
    Number = 0;
}

Egg::Egg(double price,int Number):Product(price)
{
    this->price = price;
    this->Number = Number;
}

// Setters Functions
void Egg::SetPrice(double price){
    price = price;
}
void Egg:: SetNumber(int number){
    Number = number;
}

// Getters Function
double Egg::GetPrice(){
    return price;
}
int Egg::GetNumber(){
    return Number;
}

// Destructor
Egg::~Egg(){}
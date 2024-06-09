#include "Wool.h"
#include"Plant.h"
#include "Product.h"

Wool::Wool()
{
    price = 0.0;
    kilogram = 0.0;
}

Wool::Wool(double price,double kilogram):Product(price)
{
    this->price = price;
    this->kilogram = kilogram;
}

// Setters Functions
void Wool::SetPrice(double price){
    price = price;
}
void Wool:: SetKilogram(double kilogram){
    kilogram = kilogram;
}

// Getters Function
double Wool::GetPrice(){
    return price;
}
double Wool::GetKilogram(){
    return kilogram;
}

// Destructor
Wool::~Wool(){}
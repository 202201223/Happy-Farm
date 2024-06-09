#include "Milk.h"
#include"Plant.h"
#include "Product.h"

Milk::Milk()
{
    price = 0.0;
    Litters = 0.0;
}

Milk::Milk(double price,double Litters):Product(price)
{
    this->price = price;
    this->Litters = Litters;
}

// Setters Functions
void Milk::SetPrice(double price){
    price = price;
}
void Milk:: SetLitters(double litters){
    Litters = litters;
}

// Getters Function
double Milk::GetPrice(){
    return price;
}
double Milk::GetLitters(){
    return Litters;
}

// Methods
void Milk::Display(){
    
}

// Destructor
Milk::~Milk(){}


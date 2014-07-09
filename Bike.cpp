//*****************************************************************
//  Bike.cpp
//  Objects_Project
//
//  Created by Karlina Beringer on July 8, 2014.
//
//  This header file contains the Bike class definition.
//  Bike objects model bicycles in the real world.
//*****************************************************************

#include "Bike.h"

// Default constructor creates a generic Bike object.
// The double colons are called the "resolution specifier."
Bike::Bike()
{
    brand = "brand";
    model = "model";
    price = 0.0;
    speed = 0.0;
}

// Normal construcor creates a custom Bike object.
// Keyword "this" points to the instance calling the method.
Bike::Bike( string brand, string model, double price, double speed )
{
    this -> brand = brand;
    this -> model = model;
    this -> price = price;
    this -> speed = speed;
}

// Copy constructor creates a Bike object clone.
// The "dot operator" returns an attribute of the object.
Bike::Bike( Bike & object )
{
    this -> brand = object.brand;
    this -> model = object.model;
    this -> price = object.price;
    this -> speed = object.speed;
}

// Getter returns the brand of the Bike object.
string Bike::getBrand()
{
    return brand;
}

// Getter returns the model of the Bike object.
string Bike::getModel()
{
    return model;
}

// Getter returns the price of the Bike object.
double Bike::getPrice()
{
    return price;
}

// Getter returns the speed in mph of the Bike object.
double Bike::getSpeed()
{
    return speed;
}

// Getter computes the distance covered by the Bike.
// Distance = Speed * Time
// Miles = (Miles/Hour)*(Minutes)*(Hour/60 Minutes)
double Bike::getDistance( double minutes )
{
    return speed * (minutes/60);
}

// Getter prints a summary of the Bike object's state.
void Bike::print()
{
    cout << "\n\nBrand:\t" << brand << endl;
    cout << "Model:\t" << model << endl;
    cout << "Price:\t$" << setprecision(2) << fixed << price << endl;
    cout << "Speed:\t" << setprecision(4) << speed << " miles per hour" << endl;
}

// Setter changes the brand of the Bike object.
void Bike::setBrand( string brand )
{
    this -> brand = brand;
}

// Setter changes the model of the Bike object.
void Bike::setModel( string model )
{
    this -> model = model;
}

// Setter changes the price of the Bike object.
void Bike::setPrice( double price )
{
    this -> price = price;
}

// Setter changes the speed of the Bike object.
void Bike::setSpeed( double speed )
{
    this -> speed = speed;
}

// Destructor is called when the program terminates.
Bike::~Bike()
{
    cout << "Deleting Bike object..." << endl;
}

//*****************************************************************
// End of File
//*****************************************************************

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

// Default construcor creates a generic bike object.
// The double colons are called the "resolution specifier."
Bike::Bike()
{
    brand = "brand";
    model = "model";
    price = 0.0;
    speed = 0.0;
}

// Normal construcor creates a custom bike object.
// Keyword "this" points to the instance calling the method.
Bike::Bike( string brand, string model, double price, double speed )
{
    this -> brand = brand;
    this -> model = model;
    this -> price = price;
    this -> speed = speed;
}

// Getter returns the brand of the bike object.
string Bike::getBrand()
{
    return brand;
}

// Getter returns the model of the bike object.
string Bike::getModel()
{
    return model;
}

// Getter returns the price of the bike object.
double Bike::getPrice()
{
    return price;
}

// Getter returns the speed in mph of the bike object.
double Bike::getSpeed()
{
    return speed;
}

// Getter computes the distance covered by the bike.
// Distance = Speed * Time
// Miles = (Miles per Hour)(Minutes)(Hour/60 Minutes)
double Bike::getDistance( double minutes )
{
    return speed * (minutes/60);
}

// Getter prints a summary of the bike object's state.
void Bike::print()
{
    cout << "\n\nBrand:\t" << brand << endl;
    cout << "Model:\t" << model << endl;
    cout << "Price:\t$" << setprecision(2) << fixed << price << endl;
    cout << "Speed:\t" << setprecision(4) << speed << " miles per hour" << endl;
}

// Setter changes the brand of the bike object.
// Keyword "this" points to the instance calling the method.
void Bike::setBrand( string brand )
{
    this -> brand = brand;
}

// Setter changes the model of the bike object.
// Keyword "this" points to the instance calling the method.
void Bike::setModel( string model )
{
    this -> model = model;
}

// Setter changes the price of the bike object.
// Keyword "this" points to the instance calling the method.
void Bike::setPrice( double price )
{
    this -> price = price;
}

// Setter changes the speed of the bike object.
// Keyword "this" points to the instance calling the method.
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

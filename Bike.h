//*****************************************************************
//  Bike.h
//  Objects_Project
//
//  Created by Karlina Beringer on July 8, 2014.
//
//  This header file contains the Bike class declaration.
//  Bike objects model bicycles in the real world.
//*****************************************************************

#ifndef Bike_h
#define Bike_h

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Bike
{
//-----------------------------------------------------------------
// Bike attributes (class members are private by default)
//-----------------------------------------------------------------
private:
    string brand;
    string model;
    double price;
    double speed;

//-----------------------------------------------------------------
// Bike behaviors (a.k.a. methods)
//-----------------------------------------------------------------
public:
    // Default construcor creates a generic bike object.
    Bike();
    
    // Normal construcor creates a custom bike object.
    Bike( string brand, string model, double price, double speed );
    
    // Getter returns the brand of the bike object.
    string getBrand();
    
    // Getter returns the model of the bike object.
    string getModel();
    
    // Getter returns the price of the bike object.
    double getPrice();
    
    // Getter returns the speed in mph of the bike object.
    double getSpeed();
    
    // Getter computes the distance covered by the bike.
    double getDistance( double minutes );
    
    // Getter prints a summary of the bike object's state.
    void print();
    
    // Setter changes the brand of the bike object.
    void setBrand( string brand );
    
    // Setter changes the model of the bike object.
    void setModel( string model );
    
    // Setter changes the price of the bike object.
    void setPrice( double price );
    
    // Setter changes the speed of the bike object.
    void setSpeed( double speed );
    
    // Destructor is called when the program terminates.
    ~Bike();
};


#endif

//*****************************************************************
// End of File
//*****************************************************************

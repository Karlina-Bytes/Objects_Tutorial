//*****************************************************************
//  main.cpp
//  Objects_Project
//
//  Created by Karlina Beringer on July 8, 2014.
//
//  This file contains the main function of the program.
//  Main implements objects of the Bike class.
//  Bike objects model bicycles in the real world.
//*****************************************************************

// Include the header file for the Bike class.
#include "Bike.h"

int main()
{
    cout << "Starting program...\n\n";
    
    // Create two Bike objects.
    // Bike is a data type. A and B are Bike variables.
    // A uses the default constructor.
    // B uses the normal constructor.
    cout << "Creating Bike objects A and B...\n";
    Bike A;
    Bike B( "Magna", "Glacier Point", 120, 5 );
    
    // Display contents of each Bike objects.
    cout << "Displaying contents of Bike object A...\n";
    A.print();
    cout << "Displaying contents of Bike object B...\n";
    B.print();
    
    // Set the speed of A to 10 miles per hour.
    cout << "\nSetting the speed of A to 10 mph...\n";
    A.setSpeed( 10 );
    cout << "Bike A now travels at " << A.getSpeed() << " mph.\n";
    
    // Show how far A travels in 15 minutes.
    cout << "In 15 minutes, Bike A travels ";
    cout << A.getDistance( 15 ) << " miles.\n\n";
    
    // Terminate program.
    cout << "Ending program...\n";
    return 0;
}

//*****************************************************************
// End of File
//*****************************************************************



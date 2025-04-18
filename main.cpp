/******************************************************************************
# Author:           Ari Pollack and Xavier Braker
# Assignment:       Discussion 3
# Date:             April 17, 2025
# Description:      This program will prompt the user for a number of cents, 
                    and then return the configuration of change that adds up 
                    to it using the fewest possible coins.
# Input:            Integer numCents
# Output:           Integer numDollars, integer numQuarters, integer numDimes, 
                    integer numNickels, integer numPennies
# Sources:          Discussion 3 specifications
#*****************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Declare variables for input and output
    int numCents = 0;
    int numDollars = 0;
    int numQuarters = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numPennies = 0;

    // Print a welcome message
    cout << "Welcome to the pointless change calculator." << endl << endl;

    // Prompt the user for their change
    cout << "Enter total change (cents): ";
    cin >> numCents;
    cout << endl << "You have:" << endl;

    // Make sure the user has some change to count
    if (numCents <= 0) {
        cout << "No Change." << endl;
    }
    else {
        // Calculate how many dollars, quarters, dimes, nickels, and pennies 
        // the user has.
        numDollars = numCents / 100;
        numCents %= 100;
        numQuarters = numCents / 25;
        numCents %= 25;
        numDimes = numCents / 10;
        numCents %= 10;
        numNickels = numCents / 5;
        numCents %= 5;
        numPennies = numCents;

        // Print the results with proper plurality
        if (numDollars != 0) {
            if (numDollars > 1) {
                cout << numDollars << " Dollars" << endl;
            }
            else {
                cout << "1 Dollar" << endl;
            }
        }
        if (numQuarters != 0) {
            if (numQuarters > 1) {
                cout << numQuarters << " Quarters" << endl;
            }
            else {
                cout << "1 Quarter" << endl;
            }
        }
        if (numDimes != 0) {
            if (numDimes > 1) {
                cout << numDimes << " Dimes" << endl;
            }
            else {
                cout << "1 Dime" << endl;
            }
        }
        if (numNickels != 0) {
            if (numNickels > 1) {
                cout << numNickels << " Nickels" << endl;
            }
            else {
                cout << "1 Nickel" << endl;
            }
        }
        if (numPennies != 0) {
            if (numPennies > 1) {
                cout << numPennies << " Pennies" << endl;
            }
            else {
                cout << "1 Penny" << endl;
            }
        }
    }

    // Print a goodbye message
    cout << endl << "Hopefully, this was as useless as intended!" << endl;

    return 0;
}

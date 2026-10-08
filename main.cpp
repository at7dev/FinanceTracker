#include <iostream>
#include <string>
#include <iomanip>

void displayMenu();

int main() {
    double income = 0.0;
    double expense = 0.0;
    int choice;

    do {
        void displayMenu();
        int getChoice();

        switch(choice) {
            case (1): 

        
         case (2):

        
            case (3):

        
            case (4):

        
            case (5):

        
            case (6):

        
            case (0):
                cout << "\nGoodbye\n";
        
            default:
                cout << "\nInvalid Choice. Please input a number that's 0-6\n";

         }
    } while (choice != 0);
}

void displayMenu () {
    std::cout << "Hello. Welcome to the Financial Calculator. Please enter a number that corresponds to your request." << endl;

    std::cout << "           Main Menu           " << endl;
    
    std::cout << "1. Investment Growth Calculator" << endl << 
    "2. Loan and Mortgage Calculator" << endl <<
    "3. Retirement Planner" << endl <<
    "4. Budget and Expenses Tracker" << endl <<
    "5. Savings Goal" << endl << 
    "6. View Saved Results" << endl;
 
}

int getC
#include <iostream>
#include <string>
#include <iomanip>

void displayMenu();
int getChoice();

int main() {
    
    int choice;

    do {
        displayMenu();
        choice = getChoice();

        switch(choice) {
            case 1:

                break;

            case 2:

                break;

            case 3:
                
                break;
        
            case 4:
                
                break;
        
            case 5:

                break;

            case 6:

                break;

            case 0:
                std::cout << "\nGoodbye\n";
                break;

            default:
                std::cout << "\nInvalid Choice. Please input a number that's 0-6\n";
                break;

         }
    } while (choice != 0);
}

void displayMenu () {
    std::cout << "\nHello. Welcome to the Financial Calculator. Please enter a number that corresponds to your request." << std::endl << std::endl;

    std::cout << "           Main Menu           " << std::endl;
    
    std::cout << "1. Investment Growth Calculator" << std::endl << 
    "2. Loan and Mortgage Calculator" << std::endl <<
    "3. Retirement Planner" << std::endl <<
    "4. Budget and Expenses Tracker" << std::endl <<
    "5. Savings Goal" << std::endl << 
    "6. View Saved Results" << std::endl << std::endl <<
    "0. Exit Program" << std::endl;

 
}

int getChoice () {
    int choice;
    std::cin >> choice;

    return choice;
}
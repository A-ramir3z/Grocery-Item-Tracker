/*
Alejandro Ramirez Valdes
CS-210 Programming Languages
October 20, 2024.

This program was designed to meet the functional requirements of a grocery store by racking and
analyzing daily purchase records. The primary goals are to allow the user to look up item frequencies, print all items with their frequencies, display a histogram, and back up the data into a file.
To implement this solution efficiently, the program was divided into multiple components,
following object oriented principles and best practices in C++

*/


#include <iostream>
#include <limits>
#include "ItemTracker.h"

using namespace std;

// Function to display menu for the user
void displayMenu() {
    cout << "1. Look up an item" << endl;
    cout << "2. Print frequency of all items" << endl;
    cout << "3. Print histogram of item frequencies" << endl;
    cout << "4. Exit" << endl;
}

// Function to handle users input from the menu
void handleMenu(ItemTracker& tracker) {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice; // Users input

        // Error handling
        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid option: ";
            cin >> choice;
        }

        string item;
        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> item;
            cout << item << " was purchased " << tracker.getItemFrequency(item) << " times." << endl;
            break;
        case 2:
            tracker.printAllItems();
            break;
        case 3:
            tracker.printHistogram();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        }
    } while (choice != 4);
}

int main() {
    ItemTracker tracker("CS210_Project_Three_Input_File.txt");  // Load data from input file
    handleMenu(tracker);  // Display menu and handle user input

    return 0;
}

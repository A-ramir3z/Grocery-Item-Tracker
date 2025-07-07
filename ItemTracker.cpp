#include "ItemTracker.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ItemTracker::ItemTracker(const string& inputFile) {
    loadData(inputFile);
    saveDataToFile("frequency.dat");  // Backup data file
}

void ItemTracker::loadData(const string& inputFile) {
    ifstream file(inputFile);
    if (!file.is_open()) { 
        cout << "Error: Unable to open input file " << inputFile << endl; // Error handling
        return;
    }

    string item;
    while (file >> item) {
        itemFrequency[item]++;
    }
    file.close();
}

void ItemTracker::saveDataToFile(const string& outputFile) {
    ofstream file(outputFile);
    if (!file.is_open()) {
        cout << "Error: Unable to create or open output file " << outputFile << endl;
        return;
    }

    for (const auto& pair : itemFrequency) {
        file << pair.first << " " << pair.second << endl;
    }
    file.close();
}

int ItemTracker::getItemFrequency(const string& item) const {
    auto it = itemFrequency.find(item);
    if (it != itemFrequency.end()) {
        return it->second;
    }
    else {
        return 0;
    }
}

void ItemTracker::printAllItems() const {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
}

void ItemTracker::printHistogram() const {
    for (const auto& pair : itemFrequency) {
        cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}

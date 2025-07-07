#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <string>
#include <map>
using namespace std;

class ItemTracker {
private:
    map<string, int> itemFrequency;  // Stores items and their frequencies

public:
    // Constructor to load data from the file
    ItemTracker(const string& inputFile);

    // Function to load items and their frequencies from the input file
    void loadData(const string& inputFile);

    // Function to save data to the frequency.dat file
    void saveDataToFile(const string& outputFile);

    // Get frequency of a specific item
    int getItemFrequency(const string& item) const;

    // Print all item frequencies
    void printAllItems() const;

    // Print histogram
    void printHistogram() const;
};

#endif


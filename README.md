# Grocery-Item-Tracker
# 🛒 ItemTracker – Daily Sales Frequency Analyzer

### Created by Alejandro Ramirez Valdes  
📅 Project Date: Fall 2024  
🎯 Developed as a C++ application for analyzing item sales frequency at a grocery store.

---

## 📘 Description

**ItemTracker** is a C++ console application that reads item purchase data from a text file and allows users to interactively:

- Look up how many times an item was purchased
- View the frequency of all items
- Display a histogram of item frequencies

This program demonstrates file input/output, data structures (maps), user input validation, and object-oriented programming in a practical, real-world simulation of a grocery store checkout system.

---

## 🗃️ Features

- Loads item data from an input file: `CS210_Project_Three_Input_File.txt`
- Saves item frequency data to: `frequency.dat`
- Displays an interactive menu:
  1. Look up a specific item's purchase count
  2. Display frequency of all items
  3. Print histogram using `*` symbols
  4. Exit program
- Input validation ensures clean user experience

---

## 🧪 How to Run

### ✅ Compile the program using:

```bash
g++ -o ItemTracker main.cpp ItemTracker.cpp
```
▶️ Then run it:

./ItemTracker

📄 Input File Required:

Make sure CS210_Project_Three_Input_File.txt is in the same directory. Each line should contain one purchased item (e.g., apple, banana, etc.).


## 🧾 Sample Output

1. Look up an item
2. Print frequency of all items
3. Print histogram of item frequencies
4. Exit
Enter your choice: 1
Enter item name: banana
banana was purchased 7 times.

apple 10
banana 7
orange 5

apple **********
banana *******
orange *****

## 🧠 Educational Concepts Demonstrated

- File I/O with ifstream/ofstream

- STL map for tracking item counts

- Function organization with header and source files

- User input validation

- Menu-driven interface

- Class design with private and public members

## 🧠 Future Improvements

- Add support for case-insensitive item search

- Save histogram output to a file

- Add logging for user interactions

- Create a web or GUI front-end using C++ frameworks

## 🎉 Credits

Developed by Alejandro Ramirez Valdes
This project was built to simulate a real-world use case for frequency tracking at a grocery store.

# Guild-Registration-System-Cpp

This is a C++ command-line application built to simulate an RPG Guild Registration System. It was developed as a personal project to practice foundational C++ concepts, data structures, and terminal UI design.

Features
Multi-screen Navigation: A main display menu that routes to different sub-menus based on user input.

Data Structuring: Uses struct to bundle adventurer data (name, age, class) into a single object.

2D Vectors: Utilizes std::vector<std::vector<std::string>> to store a dynamic list of character classes and a guild rank encyclopedia.

Terminal Interface: Uses raw string literals (R"()") for clean, multi-line ASCII art and menu formatting.

Input Validation: Includes basic loop control to handle invalid menu choices and redirect the user back to the main menu.

Core Concepts Practiced
Nested while loops and control flow (break, std::exit).

Passing and returning custom structs between functions.

Looping through nested vectors to display data tables.

How to Compile and Run
Ensure you have a C++ compiler installed (like g++).
Run the following commands in your terminal:
__________________________
g++ main.cpp -o guild
./guild
__________________________

# Age Calculator

This project is a simple C++ application that calculates a user's age based on their birth date. The user is prompted to enter their birth date in the format `dd/mm/yyyy`, and the application computes the age based on the current date.

## Project Structure

```
age-calculator
├── src
│   └── main.cpp
├── CMakeLists.txt
└── README.md
```

## Requirements

- C++11 or later
- CMake

## Building the Project

1. Clone the repository or download the project files.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   make
   ```

## Running the Application

After building the project, you can run the application with the following command:

```
./age-calculator
```

Follow the prompts to enter your birth date, and the application will display your age.
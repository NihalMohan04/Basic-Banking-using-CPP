# Basic-Banking-using-CPP

## Overview

This repository contains a simple CLI-based ATM Banking Application developed in C++. It was designed as a Mini Project during the 3rd Semester of my Bachelor of Engineering (B.E) degree. The application allows users to create new bank accounts, deposit cash, withdraw cash, and check their balance, mimicking basic interactions with an Automated Teller Machine (ATM).

## Features

- **Account Creation**: Users can create a new bank account with a unique account number and a secure PIN.
- **Cash Deposit**: Allows users to deposit money into their account.
- **Cash Withdrawal**: Enables users to withdraw money from their account, ensuring the account balance does not fall below a minimum threshold.
- **Balance Enquiry**: Users can check the current balance of their account.

## Prerequisites

- C++ Compiler (GCC recommended)
- Windows Operating System (due to the use of `windows.h` and `Sleep` function)

## Setup and Compilation

--- I personally used CLion for this Project. This might vary based on each one's personal preference. ---

1. Ensure you have a C++ compiler installed on your machine. GCC is recommended. You can download it from [MinGW](http://www.mingw.org/) or [Cygwin](https://www.cygwin.com/) if you're using Windows.
2. Clone the repository to your local machine or download the source code as a zip file and extract it.
3. Navigate to the project directory through your terminal or command prompt.
4. Compile the code using the following command:

```bash
g++ -o BasicBanking main.cpp
```

## Running the Application

After compilation, run the application by executing the compile output file. On windows, you would run:
```bash
main.exe
```
Follow the on-screen prompts to interact with the ATM Banking Application!

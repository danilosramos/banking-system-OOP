# 🏦 Banking System (OOP)

> A robust banking simulation built with **Modern C++**, demonstrating the power of **Object-Oriented Programming** and **Operator Overloading** to handle financial transactions intuitively.

![C++](https://img.shields.io/badge/Language-C++17-00599C?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

## 📖 About the Project

This project simulates the core functionalities of a banking system, focusing on the relationship between **Clients** and **Accounts** (Conta Corrente). It was designed to explore advanced C++ concepts, specifically how **Operator Overloading** can simplify syntax for complex operations (like transferring funds or making deposits).

Instead of calling verbose methods like `account.transferTo(otherAccount, amount)`, this system allows expressive syntax like `acc1 >> acc2` to move funds, making the code cleaner and more readable.

## 🚀 Key Features

* **👥 Client Management:** Stores personal data (Name, Address, Job, Income) separated from the account logic.
* **💳 Account Operations:** Supports standard Deposit, Withdraw, and Transfer operations with validation.
* **✨ Operator Overloading (The Cool Part):**
    * `+=` : Deposits money into an account (e.g., `myAccount += 500;`).
    * `-=` : Withdraws money safely (e.g., `myAccount -= 100;`).
    * `>>` : **Full Transfer Operator**. Moves the *entire* balance from one account to another (e.g., `oldAccount >> newAccount;`).
* **🔗 Object Relationships:** Uses pointers to associate unique Clients with multiple Accounts, preventing data duplication.

## 🛠️ Technologies Used

* **Language:** C++ (C++11/14/17)
* **Concepts:**
    * **Encapsulation:** Private/Protected members with public interfaces.
    * **Operator Overloading:** Custom behavior for standard C++ operators.
    * **Pointers & References:** Efficient memory management and object association.
    * **STL:** `std::vector` for dynamic list management.

## ⚙️ How to Run

### Compilation
Open your terminal in the project folder and run:

```bash
g++ main.cpp account.cpp client.cpp -o banking-system

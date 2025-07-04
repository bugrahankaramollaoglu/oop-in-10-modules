# 🔷 OOP in 10 Modules

This repository provides a comprehensive hands-on guide to **Object-Oriented Programming (OOP)** in C++, split across 10 progressive modules. It is structured to help learners go from basic class concepts to advanced polymorphism, memory management, templates, and more — aligned with the C++ learning track from 42 school.

📘 Each module contains:
- PDF documents summarizing theory
- Well-structured exercises with source code
- Clean, idiomatic C++ examples

---

## 📦 Module Structure

Each folder `cppXX` (from `cpp00` to `cpp09`) represents a module. Here’s a high-level overview:

| Module | Topics Covered                                                                 |
|--------|----------------------------------------------------------------------------------|
| `cpp00` | Basics of I/O, string manipulation, basic class structure                      |
| `cpp01` | Constructors, destructors, memory allocation, arrays of objects                |
| `cpp02` | Fixed-point numbers, class members, operator overloading                       |
| `cpp03` | Inheritance, method overriding, multiple classes interaction                   |
| `cpp04` | Polymorphism, abstract classes, dynamic memory                                 |
| `cpp05` | Exceptions, deeply nested class hierarchies (e.g., Bureaucrat-Form exercise)   |
| `cpp06` | Type casting, RTTI (`dynamic_cast`), serialization                             |
| `cpp07` | Templates, function templates, class templates, specialization                 |
| `cpp08` | STL-like containers, iterators, algorithm basics                               |
| `cpp09` | Parsing, file I/O, real-world application (BitcoinExchange exercise)           |

---

## 📁 Example Exercises

- 🔊 [`cpp00/ex00`](cpp00/ex00): Convert all CLI arguments to uppercase (basic `main.cpp`)
- 📞 [`cpp00/ex01`](cpp00/ex01): Implement a `PhoneBook` using a class array and CLI interface
- 🧟 [`cpp01/ex00`](cpp01/ex00): Create and announce zombies using dynamic memory
- 🌳 [`cpp05/ex03`](cpp05/ex03): Simulate bureaucratic forms signed by interns
- 🎲 [`cpp06/ex02`](cpp06/ex02): Generate random objects and identify them using `dynamic_cast`

---

## 🧠 Prerequisites

- Familiarity with basic C++ syntax
- A C++17-compliant compiler (e.g., `g++`, `clang++`)
- `make` utility installed

---

## 🚀 How to Use

Clone the repository and go to any module:

```bash
git clone https://github.com/bugrahankaramollaoglu/oop-in-10-modules.git
cd oop-in-10-modules/cpp04/ex01
make
./<compiled_program>


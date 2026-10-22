*This project has been created as part of the 42 curriculum by msimoes*

## Description
CPP is a series of modules from the 42 curriculum that introduce the basics of C++ and object-oriented programming. Each module focuses on a small set of concepts and is split into exercises, each one a standalone program with its own `Makefile`.

The goal of these modules is to learn how to move from C to C++ (streams, strings, references, classes, memory management with `new`/`delete`) and to build a solid understanding of OOP concepts such as encapsulation, the Orthodox Canonical Form, operator overloading, inheritance, polymorphism, and abstract classes. Everything is written in the `C++98` standard and compiled with `-Wall -Wextra -Werror`.

## Table of Contents
- [Compilation](#compilation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- Modules
  - [Module 00 - Namespaces, classes, member functions, streams](#module-00---namespaces-classes-member-functions-streams)
  - [Module 01 - Memory allocation, pointers to members, references, switch](#module-01---memory-allocation-pointers-to-members-references-switch)
  - [Module 02 - Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form](#module-02---ad-hoc-polymorphism-operator-overloading-orthodox-canonical-form)
  - [Module 03 - Inheritance](#module-03---inheritance)
  - [Module 04 - Subtype polymorphism, abstract classes, interfaces](#module-04---subtype-polymorphism-abstract-classes-interfaces)
- [Examples](#examples)
- [Cleanup](#cleanup)
- [Resources](#resources)

## Instructions

### Compilation
Each exercise has its own `Makefile`. To compile an exercise, go to its folder and run:
```bash
make
```
To recompile everything run:
```bash
make re
```

Both of these will create an executable named after the exercise (see the tables below). All exercises are compiled with:
```
c++ -Wall -Wextra -Werror -std=c++98
```

### Usage
```bash
cd "module 2/ex02"
make
./Fixed
```
Unless stated otherwise in the tables below, the executables take no arguments.

### Project Structure
```
CPP/
├── module 0/   Namespaces, classes, streams, member functions
├── module 1/   Memory allocation, pointers/references to members, switch
├── module 2/   Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form
├── module 3/   Inheritance
└── module 4/   Subtype polymorphism, abstract classes, interfaces
```

### Module 00 - Namespaces, classes, member functions, streams
| Exercise | Executable | Description |
|----------|------------|-------------|
| `ex00` | `megaphone` | Prints all arguments in uppercase. With no arguments it prints `* LOUD AND UNBEARABLE FEEDBACK NOISE *` |
| `ex01` | `phonebook` | A small phonebook program that stores contacts and displays them in a formatted table |

Usage:
```bash
./megaphone "shhhhh... I think the students are asleep..."
./phonebook
```
The phonebook supports the following commands:
- `ADD`: saves a new contact
- `SEARCH`: displays the saved contacts in a table with 10-character wide columns (longer text is truncated), then shows the full details of the chosen contact
- `EXIT`: quits the program and the contacts are lost

### Module 01 - Memory allocation, pointers to members, references, switch
| Exercise | Executable | Description |
|----------|------------|-------------|
| `ex00` | `Zombie` | A `Zombie` class that can be created on the stack (`randomChump`) or on the heap (`newZombie`) |
| `ex01` | `Zombie` | Allocates a horde of `N` zombies with a single allocation (`zombieHorde`) |
| `ex02` | `Brain` | Prints the memory address and value of a string, a pointer to it, and a reference to it |
| `ex03` | `Violence` | `HumanA` and `HumanB` classes using a `Weapon`, one through a reference and the other through a pointer |
| `ex04` | `Sed` | A "sed for losers" that replaces every occurrence of a string in a file using `std::string` and `std::ifstream`/`std::ofstream` |
| `ex05` | `harl` | `Harl` complains at different levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`) using pointers to member functions |

Usage:
```bash
./Sed <filename> <string_to_find> <string_to_replace>
./harl [LEVEL]
```
`Sed` writes the result to a new file called `<filename>.replace`.

### Module 02 - Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form
| Exercise | Executable | Description |
|----------|------------|-------------|
| `ex00` | `Fixed` | The `Fixed` class implemented in the Orthodox Canonical Form (default constructor, copy constructor, copy assignment operator, destructor) |
| `ex01` | `Fixed` | Adds conversion from `int` and `float`, `toInt`, `toFloat` and the `<<` operator overload |
| `ex02` | `Fixed` | Adds the comparison operators (`>`, `<`, `>=`, `<=`, `==`, `!=`), the arithmetic operators (`+`, `-`, `*`, `/`), pre/post increment and decrement, and the static `min`/`max` functions |

### Module 03 - Inheritance
| Exercise | Executable | Description |
|----------|------------|-------------|
| `ex00` | `ClapTrap` | The base `ClapTrap` class with `attack`, `takeDamage` and `beRepaired`, each action costing energy |
| `ex01` | `ScavTrap` | `ScavTrap` inherits from `ClapTrap`, overrides its actions and adds `guardGate` |
| `ex02` | `FragTrap` | `FragTrap` inherits from `ClapTrap`, overrides its actions and adds `highFivesGuy` |

The constructors and destructors print messages so the order in which they are called (base first on construction, derived first on destruction) can be seen.

### Module 04 - Subtype polymorphism, abstract classes, interfaces
| Exercise | Executable | Description |
|----------|------------|-------------|
| `ex00` | `Animal` | `Animal`, `Dog` and `Cat` using `virtual` functions, plus `WrongAnimal` and `WrongCat` to show what happens without `virtual` |
| `ex01` | `Brain` | `Dog` and `Cat` own a `Brain` allocated with `new`, with deep copies to avoid sharing memory between copies |
| `ex02` | `Brain` | `Animal` becomes an abstract class (`makeSound() = 0`) so it can no longer be instantiated |

### Examples
Build and run a single exercise:
```bash
cd "module 1/ex03"
make
./Violence
```
Build and run the polymorphism exercise:
```bash
cd "module 4/ex00"
make
./Animal
```
Replace a word inside a file:
```bash
cd "module 1/ex04"
make
./Sed file.txt hello goodbye
```

### Cleanup
Remove object files:
```bash
make clean
```
Remove object files and executable:
```bash
make fclean
```

## Resources
- [C++ reference - cppreference.com](https://en.cppreference.com/)
- [C++ standard library - cplusplus.com](https://cplusplus.com/reference/)
- [Orthodox Canonical Form - Wikipedia](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming))
- [Fixed-point arithmetic - Wikipedia](https://en.wikipedia.org/wiki/Fixed-point_arithmetic)
- [Virtual functions - cppreference.com](https://en.cppreference.com/w/cpp/language/virtual)

### AI usage
No AI was used to write the code of these modules. AI was used to create a draft of this README.

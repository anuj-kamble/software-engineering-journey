# 📘 Day 01 - Program Execution & First Git Commit

**Date:** 08 August 2026

---

# 🎯 Objectives

- Understand how a C++ program executes.
- Write my first C++ program.
- Learn basic output using `std::cout`.
- Learn why `std::endl` is used.
- Understand how a variable is stored in memory.
- Learn the basic Git workflow.
- Make my first Git commit.

---

# 💻 My First C++ Program

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello Anuj" << std::endl;
    std::cout << "Welcome To C++" << std::endl;

    return 0;
}
```

---

# 🖥️ How a C++ Program Executes

Programmer writes C++ code

↓

Compiler converts source code into machine code

↓

Compiler creates an executable (.exe)

↓

Windows loads the executable into RAM

↓

Windows reserves memory for the program

↓

CPU starts executing instructions

↓

CPU calls `main()`

↓

CPU executes `std::cout`

↓

Console displays the output

↓

CPU executes `return 0`

↓

Program terminates

↓

Windows releases the memory

---

# 🧠 Important Concepts Learned

## Compiler

- Converts human-readable C++ code into machine code.
- Produces an executable (.exe) file.

---

## Windows (Operating System)

- Loads the executable into RAM.
- Allocates memory for the program.
- Releases memory after the program finishes.

---

## RAM

- Stores program instructions and variables.
- RAM **stores** data.
- RAM does **not** execute code.

---

## CPU

- Reads instructions from RAM.
- Executes one instruction at a time.
- Performs calculations.
- Reads and writes variable values.

---

# 📝 Output

## std::cout

Used to display output on the console.

Example:

```cpp
std::cout << "Hello";
```

---

## std::endl

Moves the cursor to the next line.

Example:

```cpp
std::cout << "Hello" << std::endl;
std::cout << "Anuj";
```

Output:

Hello
Anuj

---

# 📦 Variables

Example:

```cpp
int age = 22;
```

What happens?

- Windows reserves memory.
- CPU creates the variable.
- RAM stores the value.
- The variable receives a memory address.

Updating:

```cpp
age = 50;
```

No new memory is created.

The CPU updates the value stored at the existing memory address.

---

# 🧠 Copy vs Update

```cpp
int age = 22;
int marks = age;
```

Result:

age = 22

marks = 22

If:

```cpp
age = 50;
```

Then:

age = 50

marks = 22

Reason:

`marks` received a copy of the value, not a connection to `age`.

---

# 🌳 Git Learning

## Repository

A Git repository stores the complete history of a project.

---

## Commands Learned

### Initialize Repository

```bash
git init
```

Creates a new Git repository.

---

### Check Status

```bash
git status
```

Shows the current state of the repository.

---

### Add Files

```bash
git add .
```

Moves files from the Working Directory to the Staging Area.

`.` means the current folder.

---

### Commit

```bash
git commit -m "message"
```

Creates a snapshot of the project.

---

### View History

```bash
git log
```

Displays all commits.

---

# 📂 Git Workflow

Working Directory

↓

git add

↓

Staging Area

↓

git commit

↓

Git History

---

# 📄 .gitignore

Purpose:

Ignore files that should not be stored in Git.

Example:

```
*.exe
.vscode/
```

---

# 💡 Biggest Realizations

- A program is executed by the CPU.
- RAM stores data but never executes instructions.
- Windows manages memory.
- `std::endl` moves the cursor to the next line.
- Variables have memory addresses.
- Updating a variable changes its value, not its address.
- Git does not automatically save changes.
- A commit is a snapshot of the project.

---

# 🏆 Achievements

✅ Wrote my first C++ program.

✅ Understood the complete execution flow.

✅ Learned the role of Compiler, Windows, RAM and CPU.

✅ Created my first Git repository.

✅ Made my first Git commit.

---

# 🤔 Questions for Tomorrow

- Why do we need `std::cin`?
- How does the CPU read user input?
- Why are there different data types (`int`, `float`, `char`, `bool`)?
- How are arithmetic operations performed in memory?

---

# 📅 Day 01 Completed

**Commit Message**

```
Day 01: First C++ program and understand program execution
```

**Git Commit Hash**

```
c53c483
```
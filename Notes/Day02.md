# Day 02 --- Variables, Input, Data Types & Memory

## 🎯 Day 02 Goal

Understand how variables store values, how user input reaches a
variable, how values can be changed, and how data types relate to
memory.

------------------------------------------------------------------------

# 1. User Input with `std::cin`

We learned that:

``` cpp
std::cin
```

is used to receive input from the user.

Example:

``` cpp
int age;

std::cout << "Enter your age: ";
std::cin >> age;

std::cout << "Your age is " << age << " years old." << std::endl;
```

If the user enters:

``` text
23
```

then:

``` text
age → 23
```

### Basic direction

``` text
User
  ↓
Keyboard
  ↓
std::cin
  ↓
Variable
```

While:

``` text
Variable
  ↓
std::cout
  ↓
Screen
```

------------------------------------------------------------------------

# 2. Variable vs Value

A variable is a named storage location used by the program.

Example:

``` cpp
int age = 23;
```

Here:

``` text
Variable → age
Value    → 23
```

The variable can remain the same while its value changes.

Example:

``` cpp
int age = 23;

age = 30;
age = 45;
age = 60;
```

Conceptually:

``` text
age → 23
     ↓
age → 30
     ↓
age → 45
     ↓
age → 60
```

There is still only **one `age` variable**.

------------------------------------------------------------------------

# 3. Declaration

A declaration tells the compiler that a variable exists.

``` cpp
int age;
```

This declares an integer variable named `age`.

At this point, for a local variable, we should not read its value before
giving it a valid value.

------------------------------------------------------------------------

# 4. Initialization

Initialization means creating a variable and giving it an initial value.

``` cpp
int age = 23;
```

This means:

``` text
Create variable age
        ↓
Give it initial value 23
```

------------------------------------------------------------------------

# 5. Assignment

Assignment changes the value of an existing variable.

``` cpp
age = 50;
```

This does NOT create another `age`.

It updates the existing variable.

Example:

``` cpp
int age = 23;

age = 50;
```

Conceptually:

``` text
age → 23
 ↓
age → 50
```

------------------------------------------------------------------------

# 6. Declaration vs Initialization vs Assignment

### Declaration

``` cpp
int age;
```

Create/declare the variable.

### Initialization

``` cpp
int age = 23;
```

Declare the variable and give it its initial value.

### Assignment

``` cpp
age = 50;
```

Change the value of an already existing variable.

------------------------------------------------------------------------

# 7. Multiple Variables

Different variables have their own storage.

Example:

``` cpp
int age = 23;
int marks = 80;

age = 25;
marks = 95;
```

Final values:

``` text
age   → 25
marks → 95
```

`age` and `marks` are different variables, so they have separate
storage.

------------------------------------------------------------------------

# 8. Data Types

Different kinds of data require different types.

We learned:

  Type       Used for           Example
  ---------- ------------------ ----------
  `int`      Whole numbers      `23`
  `double`   Decimal numbers    `5.4`
  `char`     Single character   `'A'`
  `bool`     True/false         `true`
  `string`   Text               `"Anuj"`

Examples:

``` cpp
int age = 23;

double height = 5.4;

char grade = 'A';

bool passed = true;

string name = "Anuj";
```

------------------------------------------------------------------------

# 9. Why Data Types Matter

The data type tells C++ what kind of value a variable is intended to
store.

For example:

``` cpp
int age = 23;
```

`age` is intended to hold an integer.

While:

``` cpp
double height = 5.4;
```

`height` can hold a decimal value.

We should choose a suitable data type for the information we want to
store.

------------------------------------------------------------------------

# 10. Type Conversion

Different numeric types can participate in calculations.

Example:

``` cpp
int x = 5;
double y = 2.5;

double result = x + y;
```

The result is:

``` text
7.5
```

C++ can convert the integer value to a compatible numeric type during
the calculation.

Conceptually:

``` text
5 → 5.0

5.0 + 2.5
     ↓
    7.5
```

------------------------------------------------------------------------

# 11. Information Loss During Conversion

If a decimal value is stored in an `int`, the fractional part cannot be
retained.

Example:

``` cpp
int value = 2.5;
```

The resulting stored integer value is:

``` text
2
```

Conceptually:

``` text
2.5
 ↓
int conversion
 ↓
2
```

This demonstrates that converting between data types can cause
information loss.

------------------------------------------------------------------------

# 12. Memory and Data Types

Different data types can require different amounts of memory.

For example, on many modern systems:

``` text
int     → typically 4 bytes
double  → typically 8 bytes
char    → typically 1 byte
bool    → typically 1 byte
```

These are typical values, not universal guarantees.

The exact size depends on the C++ implementation and platform.

------------------------------------------------------------------------

# 13. Memory is Addressed in Bytes

Memory is divided into individually addressable bytes.

For example, if an `int` occupies 4 bytes and starts at:

``` text
0x61FF08
```

then its storage could occupy:

``` text
0x61FF08
0x61FF09
0x61FF0A
0x61FF0B
```

The important idea:

> A variable that occupies multiple bytes uses multiple consecutive byte
> locations.

------------------------------------------------------------------------

# 14. Example with `int` and `double`

For learning purposes, assume:

``` text
int    = 4 bytes
double = 8 bytes
```

If:

``` text
age starts at 0x61FF08
```

then `age` occupies:

``` text
0x61FF08 → byte 1
0x61FF09 → byte 2
0x61FF0A → byte 3
0x61FF0B → byte 4
```

If another variable starts immediately afterward:

``` text
0x61FF0C
```

then that is the next byte after the 4-byte `age` region.

For an 8-byte `double` starting at `0x61FF0C`:

``` text
0x61FF0C
0x61FF0D
0x61FF0E
0x61FF0F
0x61FF10
0x61FF11
0x61FF12
0x61FF13
```

So:

``` text
Start address → 0x61FF0C
Last byte     → 0x61FF13
Next byte     → 0x61FF14
```

Important:

> The last address is not the starting address plus the number of bytes.
> It is the starting address plus `bytes - 1`.

------------------------------------------------------------------------

# 15. Important Memory Understanding

A variable's value can change without creating a new variable.

Example:

``` cpp
int age = 23;

age = 50;
```

Conceptually:

``` text
Same variable
      ↓
Same storage
      ↓
23 → 50
```

However, when the program is executed again, we should not assume
Windows will give the variable exactly the same memory address.

------------------------------------------------------------------------

# 16. Programs Completed Today

## Program 1 --- User Input

File:

``` text
CPP/Day02/user_input.cpp
```

Concepts demonstrated:

-   `std::cin`
-   `std::cout`
-   variable
-   user input
-   storing input in a variable

------------------------------------------------------------------------

## Program 2 --- Variable Updates

File:

``` text
CPP/Day02/variable_updates.cpp
```

Concepts demonstrated:

-   initialization
-   assignment
-   updating a variable
-   one variable holding different values

Example:

``` cpp
int age = 23;

age = 30;
age = 45;
age = 60;

std::cout << age;
```

Output:

``` text
60
```

------------------------------------------------------------------------

# 17. What I Learned Today

Today I learned that:

1.  A variable is different from the value stored in it.
2.  A variable can keep the same identity while its value changes.
3.  Declaration, initialization, and assignment are different concepts.
4.  Different variables have separate storage.
5.  `std::cin` receives input from the user.
6.  `std::cout` sends output to the screen.
7.  Data types describe the kind of data a variable is intended to
    store.
8.  Different data types can require different amounts of memory.
9.  Type conversion can happen automatically in some situations.
10. Converting a decimal value to an integer can lose the fractional
    part.
11. Memory is addressed byte by byte.
12. A variable can occupy multiple consecutive bytes.

------------------------------------------------------------------------

# 18. Day 02 Progress

Programs completed:

-   [x] User input
-   [x] Variable updates
-   [ ] Multiple data types
-   [ ] Type conversion program
-   [ ] Integer conversion program

The remaining programs will be completed before the Day 02 Git commit.

------------------------------------------------------------------------

# 🧠 Core Mental Model

``` text
C++ Code
   ↓
Compiler
   ↓
Executable
   ↓
Windows creates a process
   ↓
Program instructions execute
   ↓
Variables use memory
   ↓
Values are stored/updated
   ↓
std::cout → Screen
std::cin  ← User
```

------------------------------------------------------------------------

# Key Rule to Remember

> **A variable is the named storage; the value is the data currently
> stored there.**

Example:

``` cpp
int age = 23;

age = 50;
```

One variable:

``` text
age
```

Two different values at different times:

``` text
23 → 50
```

# Day 03 — Operators & Expressions

## 🎯 Goal

Understand how C++ performs calculations, updates variables, and evaluates conditions.

---

## 📚 Topics Learned

### 1. Arithmetic Operators

Learned:

- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division
- `%` Remainder

Example:

```text
21 + 4 = 25
21 - 4 = 17
21 * 4 = 84
21 / 4 = 5
21 % 4 = 1
```

---

### 2. Integer vs Floating-Point Division

Learned the difference between:

```cpp
double x = a / b;
```

and:

```cpp
double y = (double)a / b;
```

For:

```text
a = 21
b = 4
```

Results:

```text
a / b          → 5
(double)a / b  → 5.25
```

**Key lesson:** The operand types determine how the calculation is performed.

---

### 3. Assignment Operators

Learned:

```text
=
+=
-=
*=
/=
%=
```

Example:

```cpp
int x = 20;

x += 10;
x -= 5;
x *= 2;
x /= 5;
x %= 3;
```

Final value:

```text
x = 1
```

---

### 4. Increment & Decrement

Learned:

```text
++  → increase by 1
--  → decrease by 1
```

Example:

```cpp
x++;
x--;
```

Also learned the difference between:

```text
x++ → post-increment
++x → pre-increment

x-- → post-decrement
--x → pre-decrement
```

Key rule:

```text
x++ → use old value, then increment
++x → increment first, then use new value
```

---

### 5. Comparison Operators

Learned:

```text
==  Equal to
!=  Not equal to
>   Greater than
<   Less than
>=  Greater than or equal to
<=  Less than or equal to
```

Comparison operators produce:

```text
true / false
```

---

### 6. Logical Operators

Learned:

```text
&&  AND
||  OR
!   NOT
```

Rules:

```text
AND → both conditions must be true
OR  → at least one condition must be true
NOT → reverses the result
```

---

### 7. `std` Namespace

Learned that standard C++ library features belong to the `std` namespace.

Examples:

```cpp
std::cout
std::cin
std::endl
std::string
```

Also learned:

```cpp
using namespace std;
```

allows us to use names such as `cout` without repeatedly writing `std::`.

---

## 💻 Programs Completed

### Program 01

`01_arithmetic.cpp`

- Arithmetic operations
- Division
- Remainder

### Program 02

`02_integer_division.cpp`

- Integer division
- Floating-point division
- Type conversion

### Program 03

`03_assignment_operators.cpp`

- Assignment operators
- Compound assignment
- Variable updates

### Program 04

`04_increment_decrement.cpp`

- Increment
- Decrement

### Program 05

`05_Post-and-pre-incre-decre.cpp`

- Post-increment
- Pre-increment
- Difference between `x++` and `++x`

### Program 06

`06_comparison_logical_operators.cpp`

- Comparison operators
- Logical operators
- Boolean results

---

## 🧠 Key Understanding

Today I learned that a C++ program does not simply "change numbers."

The CPU executes statements in order, and variables hold changing values during program execution.

Example:

```text
x = 20
    ↓
x += 10
    ↓
x = 30
    ↓
x *= 2
    ↓
x = 60
```

I also learned that the **type of the operands matters when an expression is calculated**.

---

## 📊 Day 03 Status

```text
[✅] Arithmetic operators
[✅] Integer division
[✅] Floating-point division
[✅] Assignment operators
[✅] Increment / decrement
[✅] Pre/post increment
[✅] Comparison operators
[✅] Logical operators
[✅] std namespace
[✅] 6 C++ programs completed
[✅] All programs successfully executed
```

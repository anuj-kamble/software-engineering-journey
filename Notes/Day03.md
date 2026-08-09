# Day 03 — Operators and Expressions

## 📅 Day 03 Progress

Today I learned how C++ performs calculations, updates variables, converts values, and evaluates conditions.

---

## 1. Arithmetic Operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `21 + 4 = 25` |
| `-` | Subtraction | `21 - 4 = 17` |
| `*` | Multiplication | `21 * 4 = 84` |
| `/` | Division | `21 / 4 = 5` |
| `%` | Remainder | `21 % 4 = 1` |

When both operands are integers, division performs integer division:

```cpp
int a = 21;
int b = 4;
a / b;
```

Result:

```text
5
```

The remainder is:

```text
21 % 4 = 1
```

Useful relationship:

```text
dividend = divisor × quotient + remainder
21 = 4 × 5 + 1
```

---

## 2. Integer Division vs Floating-Point Division

```cpp
int a = 21;
int b = 4;

double x = a / b;
double y = (double)a / b;
```

For `x`, integer division happens first:

```text
21 / 4
→ int / int
→ 5
→ 5.0
```

Therefore:

```text
x = 5.0
```

For `y`, `a` is converted before division:

```text
(double)a → 21.0
21.0 / 4 → 5.25
```

Therefore:

```text
y = 5.25
```

### Important Rule

The type of the operands determines how the operation is performed. Making the destination variable `double` does not change an already-performed integer division.

---

## 3. Assignment Operators

Assignment operators assign or update values.

| Operator | Equivalent |
|---|---|
| `=` | `x = value` |
| `+=` | `x = x + value` |
| `-=` | `x = x - value` |
| `*=` | `x = x * value` |
| `/=` | `x = x / value` |
| `%=` | `x = x % value` |

Example:

```cpp
int x = 20;

x += 10;
x -= 5;
x *= 2;
x /= 5;
x %= 3;
```

Execution:

```text
20 → 30 → 25 → 50 → 10 → 1
```

Final value:

```text
x = 1
```

For example:

```cpp
x += 5;
```

means:

```cpp
x = x + 5;
```

---

## 4. Increment and Decrement Operators

Increment increases a variable by `1`:

```cpp
x++;
```

Decrement decreases a variable by `1`:

```cpp
x--;
```

Equivalent in effect:

```cpp
x = x + 1;
x = x - 1;
```

Example:

```cpp
int x = 10;

x++;
x++;
x--;
x++;
x--;
```

Execution:

```text
10 → 11 → 12 → 11 → 12 → 11
```

Final value:

```text
x = 11
```

---

## 5. Pre-Increment and Post-Increment

There are two forms:

```cpp
x++;
++x;
```

### Post-Increment

```cpp
int x = 5;
int y = x++;
```

The old value is used first, then `x` increases:

```text
y = 5
x = 6
```

### Pre-Increment

```cpp
int x = 5;
int y = ++x;
```

`x` increases first, then the new value is used:

```text
x = 6
y = 6
```

### Simple Rule

```text
x++ → use first, increment afterward
++x → increment first, use afterward
```

The same concept applies to decrement:

```text
x-- → use first, decrement afterward
--x → decrement first, use afterward
```

---

## 6. Comparison Operators

Comparison operators compare values and produce a Boolean result:

```text
true
false
```

| Operator | Meaning |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

Example:

```cpp
int a = 10;
int b = 20;
```

Results:

```text
a == b → false
a != b → true
a > b  → false
a < b  → true
a >= 10 → true
b <= 20 → true
```

### Important Difference

`=` means assignment:

```cpp
x = 10;
```

`==` means comparison:

```cpp
x == 10
```

---

## 7. Logical Operators

Logical operators combine or reverse conditions.

| Operator | Meaning |
|---|---|
| `&&` | AND |
| `||` | OR |
| `!` | NOT |

### AND `&&`

Both conditions must be true.

```cpp
(age >= 18) && (age <= 60)
```

For `age = 23`:

```text
23 >= 18 → true
23 <= 60 → true
true && true → true
```

Truth table:

```text
true  && true  → true
true  && false → false
false && true  → false
false && false → false
```

### OR `||`

At least one condition must be true.

```cpp
(age < 18) || (age > 60)
```

For `age = 23`:

```text
23 < 18 → false
23 > 60 → false
false || false → false
```

Truth table:

```text
true  || true  → true
true  || false → true
false || true  → true
false || false → false
```

### NOT `!`

NOT reverses the Boolean result:

```cpp
!(age == 23)
```

If:

```text
age == 23 → true
```

then:

```text
!true → false
```

Therefore:

```text
!true  → false
!false → true
```

---

## 8. Boolean Output in C++

When Boolean values are printed using `cout`, C++ normally displays:

```text
true  → 1
false → 0
```

Example:

```cpp
cout << (10 < 20);
```

Output:

```text
1
```

because `10 < 20` is true.

---

## 9. `std` Namespace

C++ standard library features are organized inside the `std` namespace.

Examples:

```cpp
std::cout
std::cin
std::endl
std::string
```

Here:

```text
std → namespace
::  → scope resolution operator
cout → object inside the std namespace
```

We can write:

```cpp
std::cout << "Hello";
```

or:

```cpp
using namespace std;
cout << "Hello";
```

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello";
    return 0;
}
```

---

## 10. Day 03 Programs

### `01_arithmetic.cpp`

Practiced:
- Addition
- Subtraction
- Multiplication
- Division
- Remainder

### `02_integer_division.cpp`

Practiced:
- Integer division
- Floating-point division
- Type conversion before calculation

### `03_assignment_operators.cpp`

Practiced:
- `=`
- `+=`
- `-=`
- `*=`
- `/=`
- `%=`

### `04_increment_decrement.cpp`

Practiced:
- `++`
- `--`

### `05_Post-and-pre-incre-decre.cpp`

Practiced:
- Post-increment
- Pre-increment
- Difference between `x++` and `++x`

### `06_comparison_logical_operators.cpp`

Practiced:
- `==`
- `!=`
- `>`
- `<`
- `>=`
- `<=`
- `&&`
- `||`
- `!`

---

## 🧠 Key Lessons From Day 03

1. `%` gives the remainder after integer division.
2. Integer division removes the fractional part.
3. A `double` variable does not automatically make `int / int` floating-point division.
4. Type conversion must happen before calculation when floating-point division is required.
5. Compound assignment operators update an existing variable.
6. `++` increases a value by `1`.
7. `--` decreases a value by `1`.
8. `x++` uses the old value before incrementing.
9. `++x` increments first and then uses the new value.
10. Comparison operators produce `true` or `false`.
11. `&&` requires both conditions to be true.
12. `||` requires at least one condition to be true.
13. `!` reverses a Boolean result.
14. `=` and `==` have different purposes.
15. `std` is the namespace containing C++ standard library features.

---

## 🎯 Day 03 Outcome

By the end of Day 03, I can understand and use:

```text
Arithmetic
      ↓
Type behavior
      ↓
Assignment
      ↓
Increment / Decrement
      ↓
Comparison
      ↓
Logical conditions
```

These concepts will be used heavily in the next stage:

**Conditions and decision making with `if`, `else if`, and `else`.**

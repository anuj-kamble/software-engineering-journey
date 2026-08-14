# Day 06 – Nested Loops & Basic Patterns

## 📅 Date
Day 06 of my Software Engineering Journey

---

# 🎯 Goal of Today

Today I learned how nested loops work and how they are used to print different patterns. I also learned how to think like the CPU while executing nested loops instead of memorizing pattern programs.

---

# 📚 Topics Covered

- Nested Loops
- Square Star Pattern
- Right Triangle Star Pattern
- Number Triangle Pattern
- Inverted Star Pattern
- CPU Execution of Nested Loops
- Pattern Logic

---

# 1. Nested Loops

## Definition

A nested loop is a loop inside another loop.

Syntax:

```cpp
for(initialization)
{
    for(initialization)
    {
        // Code
    }
}
```

---

## Understanding

The outer loop controls the number of rows.

The inner loop controls the number of columns.

The inner loop always completes all of its iterations before the outer loop moves to the next iteration.

---

# CPU Execution

```
Outer Loop starts
    ↓
Inner Loop starts
    ↓
Print all columns
    ↓
Inner Loop Ends
    ↓
Move to next row
    ↓
Repeat
```

---

# Example

```cpp
for(int row = 1; row <= 2; row++)
{
    for(int col = 1; col <= 3; col++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Output

```
***
***
```

---

# 2. Square Star Pattern

Program

```cpp
for(int row = 1; row <= 3; row++)
{
    for(int col = 1; col <= 5; col++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Output

```
*****
*****
*****
```

Logic

- Total rows are fixed.
- Total columns are fixed.
- Every row prints the same number of stars.

Inner Loop Condition

```cpp
col <= 5
```

---

# 3. Right Triangle Star Pattern

Program

```cpp
for(int row = 1; row <= 5; row++)
{
    for(int col = 1; col <= row; col++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Output

```
*
**
***
****
*****
```

Logic

Number of stars equals the current row number.

Formula

```
Stars = Row Number
```

Inner Loop Condition

```cpp
col <= row
```

---

# 4. Number Triangle Pattern

Program

```cpp
for(int row = 1; row <= 5; row++)
{
    for(int col = 1; col <= row; col++)
    {
        cout << col;
    }

    cout << endl;
}
```

Output

```
1
12
123
1234
12345
```

Logic

- Number of columns depends on the row.
- Print the current column number.

Difference

```
cout << "*";
```

prints stars.

```
cout << col;
```

prints numbers.

---

# 5. Inverted Star Pattern

Program

```cpp
for(int row = 1; row <= 5; row++)
{
    for(int col = 1; col <= 6 - row; col++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Output

```
*****
****
***
**
*
```

Logic

Number of stars decreases after every row.

Formula

```
Stars = 6 - Row
```

Inner Loop Condition

```cpp
col <= 6 - row;
```

---

# Pattern Comparison

## Square

```
*****
*****
*****
```

Condition

```cpp
col <= 5
```

---

## Increasing Triangle

```
*
**
***
****
```

Condition

```cpp
col <= row
```

---

## Number Triangle

```
1
12
123
1234
```

Condition

```cpp
cout << col;
```

---

## Inverted Triangle

```
*****
****
***
**
*
```

Condition

```cpp
col <= 6 - row
```

---

# CPU Thinking

Whenever solving any pattern, ask these four questions.

### Question 1

How many rows?

→ Outer Loop

---

### Question 2

How many columns?

→ Inner Loop

---

### Question 3

What should be printed?

Examples

- *
- row
- col
- row + col
- row * col
- spaces

---

### Question 4

When should the line change?

```
cout << endl;
```

---

# Important Observation

Only two things change in pattern problems.

1. Number of columns.

2. What we print.

Everything else remains almost the same.

---

# Key Takeaways

✅ Outer loop controls rows.

✅ Inner loop controls columns.

✅ Inner loop always completes before the outer loop continues.

✅ `col <= row` creates increasing patterns.

✅ `col <= constant` creates fixed-size patterns.

✅ `col <= constant - row` creates decreasing patterns.

✅ `cout << col` prints column numbers.

✅ `cout << row` prints row numbers.

---

# Today's Learning Summary

- Learned Nested Loops.
- Understood CPU execution of nested loops.
- Built four pattern programs.
- Learned to derive pattern logic instead of memorizing.
- Improved debugging and execution tracing skills.

---

# Files Created

```
CPP/
└── Day06/
    ├── 01_square_star_pattern.cpp
    ├── 02_right_triangle_star.cpp
    ├── 03_number_triangle.cpp
    └── 04_inverted_star_pattern.cpp
```

---

# Progress

✅ Day 06 Completed

Next:

➡️ Day 07 – Revision Day
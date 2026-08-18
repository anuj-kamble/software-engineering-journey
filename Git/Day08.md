# Day 08 - While Loop & Number Problems

**Date:** 17 August 2026

---

# Goal

Learn the while loop and solve classic number-based problems by understanding logic before writing code.

---

# Topics Learned

## While Loop

- Syntax
- Execution flow
- Difference between for and while
- When to use while loop

---

# Concepts Learned

✔ Extract last digit

```cpp
digit = num % 10;
```

✔ Remove last digit

```cpp
num = num / 10;
```

✔ Repeat until number becomes zero

```cpp
while(num > 0)
```

---

# Programs Completed

1. Count Digits
2. Sum of Digits
3. Reverse Number
4. Palindrome Number

---

# Logic Building

Before coding, I learned to:

- Dry run the algorithm.
- Trace CPU execution.
- Track variable changes.
- Predict the output.

---

# Major Learnings

## % Operator

Returns the remainder.

Example

5274 % 10 = 4

Used to extract the last digit.

---

## / Operator

Integer division removes the last digit.

Example

5274 / 10 = 527

---

## Reverse Formula

```cpp
reverse = reverse * 10 + digit;
```

---

## Palindrome Logic

Store original number.

Reverse the number.

Compare:

```cpp
if(original == reverse)
```

If equal → Palindrome

Else → Not Palindrome

---

# Debugging Lessons

Mistakes I made today:

- Wrong while condition.
- Printing inside the loop instead of after completion.
- Saving the original number before taking user input.
- Unused variables.

---

# Biggest Achievement

Today I independently solved four classic interview problems by building the logic first instead of memorizing code.

---

# Tomorrow

Continue with:

- Armstrong Number
- Prime Number
- Fibonacci
- More logic-building exercises
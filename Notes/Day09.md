# Day 09 - Armstrong Number

**Date:** 19 August 2026

---

# Goal

Learn how to solve the Armstrong Number problem using while loops and understand the common digit-processing algorithm.

---

# Topics Covered

- Revision of while loop
- Digit extraction
- Removing last digit
- Cube of a digit
- Armstrong Number algorithm
- CPU dry run
- Debugging logic

---

# Revision

## Extract Last Digit

```cpp
digit = num % 10;
```

Example

```
153 % 10 = 3
5274 % 10 = 4
```

Purpose

Extract the last digit of a number.

---

## Remove Last Digit

```cpp
num = num / 10;
```

Example

```
153 / 10 = 15
5274 / 10 = 527
```

Purpose

Remove the last digit.

---

# Armstrong Number

A 3-digit number is called an Armstrong Number if

```
(sum of cubes of all digits)
==
Original Number
```

Example

```
153

1³ + 5³ + 3³

1 + 125 + 27

=153

Armstrong Number
```

---

Example

```
370

3³ + 7³ + 0³

27 + 343 + 0

=370

Armstrong Number
```

---

Example

```
123

1³ + 2³ + 3³

1 + 8 + 27

36

36 != 123

Not Armstrong
```

---

# Algorithm

Step 1

Take input.

Step 2

Handle negative numbers.

```cpp
if(num < 0)
{
    num = num * (-1);
}
```

Step 3

Store original number.

```cpp
int original = num;
```

Step 4

Repeat until number becomes zero.

```cpp
while(num > 0)
```

Inside loop

```
Extract digit

↓

Cube the digit

↓

Add to sum

↓

Remove digit
```

---

# Core Logic

```cpp
digit = num % 10;

sum = sum + digit * digit * digit;

num = num / 10;
```

---

# Final Check

```cpp
if(sum == original)
```

Output

```
Armstrong Number
```

Otherwise

```
Not Armstrong Number
```

---

# CPU Execution

Input

```
153
```

| Iteration | num | digit | sum | num after |
|-----------|----:|------:|----:|----------:|
| Start | 153 | - | 0 | 153 |
| 1 | 153 | 3 | 27 | 15 |
| 2 | 15 | 5 | 152 | 1 |
| 3 | 1 | 1 | 153 | 0 |

Final

```
sum = 153

original = 153

Armstrong Number
```

---

# Common Mistakes

❌

```cpp
num = num % 10;
```

Correct

```cpp
digit = num % 10;
```

---

❌

Saving original before input.

Wrong

```cpp
int original = num;
cin >> num;
```

Correct

```cpp
cin >> num;
int original = num;
```

---

❌

Using

```cpp
digit * digit
```

instead of

```cpp
digit * digit * digit
```

---

# Pattern Learned

Almost every digit problem follows this structure.

```cpp
while(num > 0)
{
    digit = num % 10;

    // Process digit

    num = num / 10;
}
```

Only the processing changes.

Examples

- Count Digits
- Sum of Digits
- Reverse Number
- Palindrome
- Armstrong

---

# Key Learning

Today I learned that many interview questions use the same while-loop pattern.

The only thing that changes is what I do with each extracted digit.

Instead of memorizing solutions, I should identify the pattern and change only the processing logic.

---

# Progress

Completed

- Armstrong Number
- CPU Dry Run
- Algorithm Building
- Logic Debugging

Next

- Prime Number
- Fibonacci Series
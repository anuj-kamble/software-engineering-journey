# Day 08 Notes - While Loop & Number Problems

---

# 1. While Loop

Syntax

```cpp
while(condition)
{
    // code
}
```

Execution

Initialization

↓

Condition

↓

Execute

↓

Update

↓

Repeat

---

# When to use While Loop?

Use while when the number of iterations is unknown.

Examples

- Count digits
- Reverse number
- Read until zero
- Menu-driven programs

---

# 2. Modulus Operator %

Returns the remainder.

Example

```cpp
5274 % 10
```

Output

```
4
```

Purpose

Extract the last digit.

---

# 3. Integer Division

```cpp
5274 / 10
```

Output

```
527
```

Purpose

Remove the last digit.

---

# 4. Count Digits

Algorithm

1. Handle negative numbers.
2. Handle zero.
3. Repeat until number becomes zero.
4. Remove last digit.
5. Increase count.
6. Print count.

---

# 5. Sum of Digits

Algorithm

1. Extract last digit.
2. Add it to sum.
3. Remove last digit.
4. Repeat.
5. Print sum.

Core Logic

```cpp
digit = num % 10;
sum = sum + digit;
num = num / 10;
```

---

# 6. Reverse Number

Algorithm

1. Extract last digit.
2. Shift reverse left by one place.
3. Add digit.
4. Remove last digit.
5. Repeat.

Formula

```cpp
reverse = reverse * 10 + digit;
```

---

# 7. Palindrome Number

Algorithm

1. Save original number.
2. Reverse the number.
3. Compare original and reverse.

```cpp
if(original == reverse)
```

Equal → Palindrome

Otherwise → Not Palindrome

---

# Important Pattern

```cpp
while(num > 0)
{
    digit = num % 10;

    // Process digit

    num = num / 10;
}
```

This pattern is used in many interview questions.

---

# Common Mistakes

❌ Using

```cpp
while(num < 0)
```

Correct

```cpp
while(num > 0)
```

---

❌ Printing result inside the loop.

Correct

Print after the loop completes.

---

❌ Copying original number before input.

Correct

```cpp
cin >> num;
int original = num;
```

---

# Key Learning

I learned that building the algorithm first makes coding much easier.

The process I will follow from now on:

1. Understand the problem.
2. Dry run with CPU execution.
3. Write the algorithm.
4. Convert logic into code.
5. Test and debug.

---

# Day 08 Summary

Today was my first day solving classic number-based interview problems independently using logical thinking instead of memorization.
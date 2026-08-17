# Day 07 Notes - Revision

---

# 1. Variables

Variables store data inside RAM.

Example:

```cpp
int age = 20;
```

---

# 2. Assignment vs Comparison

Assignment

```cpp
=
```

Stores value.

Comparison

```cpp
==
```

Checks equality.

---

# 3. For Loop Structure

```cpp
for(initialization; condition; update)
{
    // code
}
```

Execution Order

Initialization

↓

Condition

↓

Execute

↓

Update

↓

Condition Again

---

# 4. Nested Loop

```cpp
for(row)
{
    for(col)
    {
    }
}
```

Outer loop controls rows.

Inner loop controls columns.

The inner loop always completes first.

---

# 5. Pattern Logic

Square

```
****
****
****
****
```

Logic

```cpp
col <= 4
```

---

Right Triangle

```
*
**
***
****
```

Logic

```cpp
col <= row
```

---

Inverted Triangle

```
****
***
**
*
```

Logic

```cpp
col <= rows-row+1
```

---

Row Number Pattern

```
1111
2222
3333
4444
```

Logic

```cpp
cout << row;
```

---

Increasing Number Pattern

```
234
345
456
```

Logic

```cpp
cout << row + col;
```

---

# 6. Common Bugs

Wrong

```cpp
if(a = b)
```

Correct

```cpp
if(a == b)
```

---

Wrong update

```cpp
i--
```

Correct

```cpp
i++
```

---

Missing

```cpp
cout << endl;
```

causes output formatting issues.

---

# 7. Logic Building

Before writing code always ask:

- What is repeating?
- Which loop is needed?
- What changes every iteration?
- When should the loop stop?
- What should be printed?

---

# Day 07 Summary

Today focused completely on revision.

No new concept.

Built stronger understanding of loops, conditions, patterns, debugging, and CPU execution.
# Day 05 — Loops in C++

## 1. What I Learned Today

Today I learned about **loops in C++**, mainly the `for` loop.

The main goal was not just to write loops, but to understand **how the CPU executes a loop step by step**.

Topics learned:

- What loops are
- Why loops are needed
- `for` loop syntax
- Initialization
- Condition checking
- Loop body
- Increment and decrement
- `i++`
- `i--`
- `i += 2`
- Counting forward
- Counting backward
- Even numbers
- Odd numbers
- Accumulator variables
- Counter variables
- `count++`
- `sum += i`
- Using `if` inside a loop
- Counting values based on a condition
- Summing values based on a condition
- Understanding the exact execution order of a `for` loop
- Tracing the values of variables during every iteration


---

# 2. What Is a Loop?

A loop is a programming structure used to **execute the same block of code repeatedly**.

For example, if we want to print numbers from 1 to 5 without a loop:

```cpp
cout << 1 << endl;
cout << 2 << endl;
cout << 3 << endl;
cout << 4 << endl;
cout << 5 << endl;

This works, but it is repetitive.

Instead, we can use a loop:

for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}

The loop automatically repeats the code.

Output:

1
2
3
4
5
3. Why Do We Need Loops?

Loops are useful when we need to perform the same operation multiple times.

Examples:

Print numbers from 1 to 100
Process every element of an array
Count students who passed
Find the sum of numbers
Search through data
Count even numbers
Count numbers greater than a particular value
Repeat a calculation many times

Without loops, these tasks would require a lot of repetitive code.

4. for Loop

The basic syntax of a for loop is:

for (initialization; condition; update)
{
    // loop body
}

Example:

for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}

There are three important parts:

initialization
condition
update
5. Three Parts of a for Loop

Consider:

for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}
Initialization
int i = 1;

This happens first.

It creates the loop variable i and gives it the initial value 1.

Condition
i <= 5

The CPU checks this condition before every iteration.

If the condition is:

true

the loop body executes.

If the condition is:

false

the loop stops.

Update
i++

This changes the value of i after the loop body executes.

i++ means:

i = i + 1;
6. Exact Execution Order of a for Loop

This was one of the most important concepts learned today.

For:

for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}

The CPU follows:

1. Initialization
       ↓
2. Check condition
       ↓
3. Execute loop body
       ↓
4. Execute update
       ↓
5. Check condition again
       ↓
6. Repeat

The update does not happen before the loop body.

It happens after the loop body.

7. Step-by-Step Execution

Consider:

for (int i = 1; i <= 5; i++)
{
    cout << i << endl;
}

Execution:

i = 1

1 <= 5
true

print 1

i++
i = 2

Again:

2 <= 5
true

print 2

i++
i = 3

Again:

3 <= 5
true

print 3

i++
i = 4

Again:

4 <= 5
true

print 4

i++
i = 5

Again:

5 <= 5
true

print 5

i++
i = 6

Again:

6 <= 5
false

The loop stops.

Output:

1
2
3
4
5
8. Important Understanding of i++

A very important concept:

for (int i = 1; i <= 5; i++)

does NOT mean:

increase i first
then execute the loop

It means:

check condition
→ execute body
→ increase i
→ check condition again

Example:

i = 1
↓
1 <= 5 → true
↓
print 1
↓
i++
↓
i = 2

Then the next iteration starts.

9. i++

The expression:

i++

means:

i = i + 1;

Example:

i = 1
i++ → 2
i++ → 3
i++ → 4
i++ → 5

It increases the value by one.

10. Counting from 1 to 10

Program:

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    return 0;
}

Output:

1
2
3
4
5
6
7
8
9
10

Here:

Initial value = 1
Condition = i <= 10
Update = i++

The loop variable changes:

1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 10 → 11

When i = 11:

11 <= 10 → false

So the loop stops.

11. Why Does i Become 11?

This is an important point.

For:

for (int i = 1; i <= 10; i++)

when i = 10:

10 <= 10 → true

Therefore the loop body executes.

After the body:

i++

So:

i = 11

Then the CPU checks:

11 <= 10

which is:

false

The loop stops.

So 11 is used for the final condition check, but the loop body does not execute for 11.

12. Counting Backwards

We can also use a loop to count backwards.

Example:

for (int i = 10; i >= 1; i--)
{
    cout << i << endl;
}

Output:

10
9
8
7
6
5
4
3
2
1

Here:

i--

means:

i = i - 1;
13. Execution of Reverse Loop
for (int i = 10; i >= 1; i--)

Execution:

i = 10
10 >= 1 → true
print 10
i-- → 9

i = 9
9 >= 1 → true
print 9
i-- → 8

...

i = 1
1 >= 1 → true
print 1
i-- → 0

0 >= 1 → false
stop
14. Incrementing by 2

A loop does not have to increase by exactly 1.

Example:

for (int i = 2; i <= 10; i += 2)
{
    cout << i << endl;
}

Here:

i += 2;

means:

i = i + 2;

Execution:

i = 2
i = 4
i = 6
i = 8
i = 10
i = 12

When:

12 <= 10

is false, the loop stops.

Output:

2
4
6
8
10
15. Printing Even Numbers

Example:

for (int i = 2; i <= 10; i += 2)
{
    cout << i << endl;
}

Output:

2
4
6
8
10

The update:

i += 2

allows us to directly move from one even number to the next.

16. Printing Odd Numbers

Similarly, we can print odd numbers:

for (int i = 1; i <= 10; i += 2)
{
    cout << i << endl;
}

Output:

1
3
5
7
9

Here the values are:

1 → 3 → 5 → 7 → 9 → 11

When:

11 <= 10

becomes false, the loop stops.

17. Loop Variable

The variable used to control the loop is called the loop variable.

Example:

for (int i = 1; i <= 10; i++)

Here:

i = loop variable

Its value changes during each iteration.

For example:

1
2
3
4
5
...
10
18. Counter Variable

A counter is used when we want to count how many times something happens.

Example:

int count = 0;

Then:

count++;

means:

count = count + 1;

Example:

count = 0

count++
count = 1

count++
count = 2

count++
count = 3
19. Difference Between i and count

Consider:

int count = 0;

for (int i = 2; i <= 10; i += 2)
{
    count++;
}

There are two variables:

i
count

They have different responsibilities.

i

Controls the loop:

2 → 4 → 6 → 8 → 10
count

Counts how many times the required operation happens:

0 → 1 → 2 → 3 → 4 → 5

So:

i = current value being processed

count = number of occurrences / successful cases
20. Does i++ Execute Before or After count++?

Consider:

for (int i = 2; i <= 10; i += 2)
{
    count++;
}

The answer is:

count++ executes first because it is inside the loop body.

Then the update expression executes.

Execution:

i = 2
↓
check i <= 10
↓
execute count++
↓
count = 1
↓
execute i += 2
↓
i = 4

Then:

i = 4
↓
check condition
↓
count++
↓
count = 2
↓
i += 2
↓
i = 6

So the general order is:

condition
→ loop body
→ update

If count++ is inside the body, it happens before i++ or i += 2.

21. Accumulator

An accumulator is a variable that stores a running result.

Example:

int sum = 0;

Then:

sum += i;

means:

sum = sum + i;

The important thing is that sum keeps its previous value.

22. Sum from 1 to 5

Program:

int sum = 0;

for (int i = 1; i <= 5; i++)
{
    sum += i;
}

Execution:

Initially:
sum = 0
i = 1
sum = 0 + 1
sum = 1
i = 2
sum = 1 + 2
sum = 3
i = 3
sum = 3 + 3
sum = 6
i = 4
sum = 6 + 4
sum = 10
i = 5
sum = 10 + 5
sum = 15

Final:

sum = 15
23. Important Accumulator Concept

When using:

sum += i;

we must remember:

sum is not reset during every iteration.

It carries the previous result.

For example:

0 + 6 = 6
6 + 7 = 13
13 + 8 = 21
21 + 9 = 30
30 + 10 = 40

Not:

6 + 6
7 + 7
8 + 8
...

The accumulator always uses:

previous sum + current value
24. Sum of Even Numbers

Program:

int sum = 0;

for (int i = 2; i <= 10; i += 2)
{
    sum += i;
}

cout << "Sum of Even Numbers: " << sum << endl;

The even numbers are:

2, 4, 6, 8, 10

Execution:

sum = 0

i = 2
sum = 0 + 2
sum = 2

i = 4
sum = 2 + 4
sum = 6

i = 6
sum = 6 + 6
sum = 12

i = 8
sum = 12 + 8
sum = 20

i = 10
sum = 20 + 10
sum = 30

Final:

Sum of Even Numbers: 30
25. Counting Even Numbers

Program:

int count = 0;

for (int i = 2; i <= 10; i += 2)
{
    count++;
}

cout << "Count = " << count << endl;

The loop visits:

2
4
6
8
10

There are five even numbers.

Therefore:

count = 5

Output:

Count = 5
26. Using if Inside a Loop

A loop can contain a condition.

Example:

for (int i = 1; i <= 10; i++)
{
    if (i > 5)
    {
        cout << i << endl;
    }
}

The loop visits every number:

1
2
3
4
5
6
7
8
9
10

But the if allows only numbers greater than 5 to execute the code inside it.

Therefore:

6
7
8
9
10

are printed.

27. Counting Numbers Greater Than 5

Program:

int count = 0;

for (int i = 1; i <= 10; i++)
{
    if (i > 5)
    {
        count++;
    }
}

cout << "Count greater than 5: " << count << endl;

Trace:

i = 1
1 > 5 → false
count = 0

i = 2
2 > 5 → false
count = 0

i = 3
3 > 5 → false
count = 0

i = 4
4 > 5 → false
count = 0

i = 5
5 > 5 → false
count = 0

Now:

i = 6
6 > 5 → true
count = 1

i = 7
7 > 5 → true
count = 2

i = 8
8 > 5 → true
count = 3

i = 9
9 > 5 → true
count = 4

i = 10
10 > 5 → true
count = 5

Final:

count = 5

Output:

Count greater than 5: 5
28. Sum of Numbers Greater Than 5

Program:

int sum = 0;

for (int i = 1; i <= 10; i++)
{
    if (i > 5)
    {
        sum += i;
    }
}

cout << "Sum = " << sum << endl;

Only numbers greater than 5 are added.

Those numbers are:

6, 7, 8, 9, 10

Execution:

Initially:
sum = 0
i = 6
sum = 0 + 6
sum = 6
i = 7
sum = 6 + 7
sum = 13
i = 8
sum = 13 + 8
sum = 21
i = 9
sum = 21 + 9
sum = 30
i = 10
sum = 30 + 10
sum = 40

Final output:

Sum = 40
29. Counter vs Accumulator

These are two important programming patterns.

Counter

Used to count.

count++;

Example:

0 → 1 → 2 → 3 → 4 → 5

Meaning:

How many times did something happen?
Accumulator

Used to calculate a running total.

sum += i;

Example:

0 → 6 → 13 → 21 → 30 → 40

Meaning:

What is the total value?
30. Loop + Condition + Counter

A very useful pattern is:

int count = 0;

for (int i = 1; i <= 10; i++)
{
    if (condition)
    {
        count++;
    }
}

This means:

Visit every value
      ↓
Check the condition
      ↓
If true
      ↓
Increase count

This pattern can be used for:

Count even numbers
Count odd numbers
Count positive numbers
Count negative numbers
Count numbers greater than X
Count students who passed
Count valid inputs
31. Loop + Condition + Accumulator

Another important pattern:

int sum = 0;

for (int i = 1; i <= 10; i++)
{
    if (condition)
    {
        sum += i;
    }
}

This means:

Visit every value
      ↓
Check the condition
      ↓
If true
      ↓
Add the value to sum

This pattern can be used for:

Sum of even numbers
Sum of odd numbers
Sum of positive numbers
Sum of numbers greater than X
Sum of values satisfying a condition
32. CPU Mental Model

When I see a for loop, I should mentally execute it like this:

CPU initializes variable
        ↓
CPU checks condition
        ↓
If false → stop
        ↓
If true → execute body
        ↓
Execute update
        ↓
Check condition again
        ↓
Repeat

For example:

for (int i = 1; i <= 10; i++)
{
    cout << i << endl;
}

Think:

Initialize i
↓
Check i <= 10
↓
Print i
↓
i++
↓
Check again
↓
Print
↓
i++
↓
...
↓
Condition false
↓
Stop
33. Important Mistake to Avoid

Do not think that the update happens before the loop body.

Wrong mental model:

i++
↓
condition
↓
body

Correct:

condition
↓
body
↓
i++

For a for loop:

for (initialization; condition; update)

the actual repeated execution is:

condition
→ body
→ update
34. Important Mistake With sum

When using:

sum += i;

do not calculate each iteration from zero.

Wrong:

0 + 6 = 6
0 + 7 = 7
0 + 8 = 8

Correct:

0 + 6 = 6
6 + 7 = 13
13 + 8 = 21
21 + 9 = 30
30 + 10 = 40

The previous value of sum is always preserved.

35. Important Mistake With count

When using:

count++;

the counter only changes when that statement executes.

For example:

if (i > 5)
{
    count++;
}

For:

i = 1, 2, 3, 4, 5

the condition is false.

Therefore:

count stays 0

For:

i = 6, 7, 8, 9, 10

the condition is true.

Therefore:

count increases

and finally:

count = 5
36. Programs Practiced Today

The following C++ programs were created and tested during Day 05:

01_count_1_to_10.cpp

Purpose:

Count from 1 to 10
02_count_10_to_1.cpp

Purpose:

Count backwards from 10 to 1
03_even_numbers.cpp

Purpose:

Print even numbers from 2 to 10
04_odd_numbers.cpp

Purpose:

Print odd numbers from 1 to 10
05_sum_1_to_5.cpp

Purpose:

Calculate the sum of numbers from 1 to 5

Result:

15
06_sum_even_numbers.cpp

Purpose:

Calculate the sum of even numbers from 2 to 10

Result:

30
07_count_even_numbers.cpp

Purpose:

Count even numbers from 2 to 10

Result:

5
08_count_greater_than_5.cpp

Purpose:

Count numbers greater than 5 between 1 and 10

Result:

5

Numbers:

6, 7, 8, 9, 10
09_sum_greater_than_5.cpp

Purpose:

Calculate the sum of numbers greater than 5 between 1 and 10

Calculation:

6 + 7 + 8 + 9 + 10 = 40

Result:

40
37. Day 05 Key Concepts

The most important concepts learned today are:

for loop
for (int i = 1; i <= 10; i++)

Used to repeat code.

i++
i = i + 1;

Increases the loop variable by one.

i--
i = i - 1;

Decreases the loop variable by one.

i += 2
i = i + 2;

Increases the loop variable by two.

count++
count = count + 1;

Used for counting.

sum += i
sum = sum + i;

Used for accumulation.

38. My Mental Model After Day 05

When I see:

for (int i = 1; i <= 10; i++)
{
    if (i > 5)
    {
        sum += i;
    }
}

I should think:

Initialize i = 1
        ↓
Check i <= 10
        ↓
Check if i > 5
        ↓
If true → add i to sum
        ↓
Finish loop body
        ↓
i++
        ↓
Check i <= 10 again
        ↓
Repeat
        ↓
When i becomes 11
        ↓
11 <= 10 → false
        ↓
Stop

This is the execution model I practiced today.

39. Day 05 Final Summary

Today I learned that loops are not just syntax.

A loop is a controlled repetition mechanism.

The most important execution sequence is:

Initialization
      ↓
Condition
      ↓
Loop Body
      ↓
Update
      ↓
Condition
      ↓
Repeat

I also learned two very important patterns:

count++;

for counting occurrences.

And:

sum += value;

for maintaining a running total.

I practiced combining:

for loop
+
if condition
+
counter / accumulator

This is an important foundation for solving programming and algorithm problems.

The main goal of Day 05 was to understand what happens during every iteration, rather than only looking at the final output.
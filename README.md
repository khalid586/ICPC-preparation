## Warm up problems

These problems are taken from [TLE eliminators cp sheet](https://www.tle-eliminators.com/cp-sheet)

|Problem source|Status|Remarks|
|--------------|-------|-------|
|[CF 1883B](https://codeforces.com/problemset/problem/1883/B)  | 🟢Done  | Can afford k+1 odd number of characters otherwise not possible to make a palindrome|
|[CF 1904A](https://codeforces.com/problemset/problem/1904/A)  | 🟢Done  |First we have to findout from which places a king can be attacked then from those selected places we will again check if there is such position that also attacks the queen and those final places will be the answer|
|[CF 1878C](https://codeforces.com/problemset/problem/1878/C)  | 🟢Done  |If the target sum lies between minimum and maximum possible sum of k integers then it is "YES" otherwise "NO"|
|[CF 1875A](https://codeforces.com/problemset/problem/1875/A)  | 🟢Done  |-|
|[CF 1913B](https://codeforces.com/problemset/problem/1913/B)  | 🟢Done  |-|
|[CF 1883C](https://codeforces.com/contest/1883/problem/C)     | 🟢Done  |Special check for k = 4|
|[**CF 1855B](https://codeforces.com/problemset/problem/1855/B)| 🟢Done  | x consecutive numbers wil always have atleast one divisor from 1 to x|

## Binary Search
> BSTA - Binary Search The Answer

|Problem source|Status|Tags|Remarks|
|--------------|-------|----|-------|
|[Number of segments with big sum(CF EDU)](https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D)|🟢Done|`Prefix sum`,`(lower/upper bounds)`|-|
|[⭐CSES factory machine](https://cses.fi/problemset/task/1620)| 🔴`Revisit` |`Binary search`|-|
|[Binary search(CF Edu)](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A)|🟢Done|`Binary search`|-|
|[Closest to the left(CF Edu)](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B)|🟢Done|`Binary search`|-|
|[Closest to the right(CF Edu)](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C)|🟢Done|`Binary search`|-|
|[CF Edu - packing rectangles](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A)|🟢Done|`Binary search` `BSTA`|Check overflow during multiplication|
|[CF Edu - ropes](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B)|🟢Done|`Binary search`  `BSTA`|increment will be 1e-6|
|[CF Edu - very easy task](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C)|🟢Done|`Binary search`  `BSTA`|second machine will start only after the first machine has printed a copy|
|[CF 1985F ](https://codeforces.com/contest/1985/problem/F)|🟢Done|`Binary search`|Check overflow|
|[⭐Children hoilday](https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D)|🟢Done|`Binary search`  `BSTA`|[check](https://github.com/khalid586/Preparation/tree/main/Binary%20Search#children-holiday)|

## Tree Algorithms

| Problem source | Status| Tags |
| --- | --- | --- |
|[CSES Subordinates](https://cses.fi/problemset/task/1674) | `🔴Revisit` | `DP` `DP on tree` |

## Sweep Line technique

|Problem source|Status|Remarks|
|--------------|-------|-------|
|[CSES Restaurant Customers](https://cses.fi/problemset/task/1619)| 🟢Done |Line sweep (Used vector)|

## Two pointers

|Problem source|Status|Tags|Remarks|
|--------------|-------|----|-------|
|[CF 1265](https://codeforces.com/contest/1265/problem/B)| `🔴Revisit` |`two pointer`|-|
|[**CSES sum of three values](https://cses.fi/problemset/task/1641)| `🔴Revisit` |`two pointer`|Use loop for the first value and two pointers for the rest two values|
|[CF 279B](https://codeforces.com/problemset/problem/279/B)| `🔴Revisit` |`two pointer`|-|
|[Segment with small sum (CF Edu)](https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A)|🟢Done|`two pointer`|Iterate the array with two pointers|
|[CSES Ferris wheel](https://cses.fi/problemset/task/1090)| 🟢Done |`Sorting` `two pointer`|-|

## Recursion

|Problem source|Status|Tags| Remarks|
|--------------|-------|----|--------|
|[Beecrowd 1029](https://judge.beecrowd.com/en/problems/view/1029)| 🟢Done |`recursion`|-|

## Dynamic Programming

|Problem source|Status|Tags| Remarks|
|--------------|-------|----|--------|
|[CSES Dice Combinations](https://cses.fi/problemset/task/1633)| 🟢Done |`DP`|Iterate from the beginning and find out the solution|
|[CSES Minimizing Coins](https://cses.fi/problemset/task/1634) | 🟢Done |`DP`|-|

## Basic Data Structures & Algorithms

|Problem source|Status|Tags| Remarks|
|--------------|-------|----|--------|
|[Beecrowd 1068](https://judge.beecrowd.com/en/problems/view/1068)| 🟢Done |`stack`|-|
|[Beecrowd 1069](https://judge.beecrowd.com/en/problems/view/1069)| 🟢Done |`stack`|-|
|[Beecrowd 1566](https://judge.beecrowd.com/en/problems/view/1566)| 🟢Done |`counting sort`|-|


## Greedy Algorithm

|Problem source|Status|Tags|Remarks|
|--------------|-------|----|-------|
|[⭐CF 1914D](https://codeforces.com/contest/1914/problem/D)| 🔴`Using..DP` |`Greedy` `Sorting`| - |
|[CSES Missing coin sum](https://cses.fi/problemset/task/2183)| `🔴Revisit` | `Observation` | After sorting ,if a[i] is less than sum(a[0],a[i-1]) than it is possible to form all numbers from a[0] to sum(a[i-1]) so the missing sum will be sum(a[i-1])+a[i]|
|[CSES Collecting Numbers](https://cses.fi/problemset/task/2216)| 🟢Done | `Greedy` | check if the previous number has less index or not|
|[CSES Tasks and Deadline](https://cses.fi/problemset/task/1630)| 🟢Done | `sorting` | Sort tasks according to duration in ascending order|
|[⭐CF 1520E](https://codeforces.com/problemset/problem/1520/E)| 🟢Done |`Greedy` |Have to minimize the sum of non-starred cells|


<!-- 🟢 🔴-->


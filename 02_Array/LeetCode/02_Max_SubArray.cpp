#include <iostream>
using namespace std;
#include <climits>

// 2- Maximum Sub Array Sum using Brute Force Approach

// O2 of n time complexity
int MaxSum(int arr[], int size)
{
    int MaxSum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int CurrSum = 0;
        for (int end = start; end < size; end++)
        {
            CurrSum += arr[end];
            MaxSum = max(CurrSum, MaxSum);
        }
    }
    return MaxSum;
}

// 3- Maximum Sub Array Sum using Kadane's Algorithm (Most Optimised)
// O of n time complexity

int MaxSumKadanesAlgo(int arr[], int size)
{
    int MaxSum = INT_MIN;
    int CurrSum = 0;
    for (int i = 0; i < size; i++)
    {
        CurrSum += arr[i];
        MaxSum = max(MaxSum, CurrSum);
        if (CurrSum < 0)
        {
            CurrSum = 0;
        }
    }
    return MaxSum;
}

int main()
{
    int size = 7;
    int arr[size] = {3, -4, 5, 4, -1, 7, -8};

    // Q2
    cout << "Maximum Sub Array Sum Using Brute Force is : " << MaxSum(arr, size) << endl;

    // Q3
    cout << "Maximum Sub Array Sum Kadane's Algo Brute Force is : " << MaxSumKadanesAlgo(arr, size) << endl;

    return 0;
}

// Sub Array
/*
[1,2,3,4]
1) 1 | 2 | 3 | 4
2) 1,2 | 2,3 | 3,4
3) 1,2,3 | 2,3,4
3) 1,2,3,4
*/
/*
Formula for total number of Sub Array is
n*(n+1)/2
*/

// Brute Force Approach
/*
You generate all possible candidates for the solution.
You test each one to see if it satisfies the problem’s conditions.
You return the correct solution once found (or the best one, depending on the problem).

Example:
Problem: Find if x = 5 exists in the array arr = [1, 3, 5, 7].
Linear Search is also brute force approach

Drawbacks:
Slow for large inputs (often exponential time).
Inefficient—repeats a lot of work.
Not suitable for competitive programming or real-time systems if data is large.

Pros:
Always works (if a solution exists).
Good for small input sizes or starting point before optimization.
*/

/*
DP:
Optimal sub structures
Overlapping sub problems
*/

/*
for (int val : arr){} only works with when using containers like vector not with array
*/
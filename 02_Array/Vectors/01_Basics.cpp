
#include <iostream>
using namespace std;
#include <vector>

int main()
{
  // Declare
  vector<int> vec;
  // initialized
  vector<int> vec1 = {1, 5, 3};
  // another way to initialized
  vector<int> vec2(5, 0);

  // for each loop -> iterator type must be equal to vector type
  for (int val : vec2)
  {
    cout << val << endl;
  }

  // -- Vector Functions --
  // cout << vec.size() << endl;
  // vec.push_back(565);
  // vec.pop_back();
  // cout << vec.front() << endl;
  // cout << vec.back() << endl;
  // cout << vec.at(2) << endl;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  // vec.push_back(4);
  cout << "Size is " << vec.size() << endl;
  cout << "Capacity is " << vec.capacity() << endl;

  return 0;
}

// Problem 136 (Single Number) on leetcode -
// XOR n^n = 0 , n^0 = n

// HomeWork
// 1 - reverse a vector (pass by refernece)
// 2 - linear search
#include <iostream>
using namespace std;
/*
sum of n natural number
n*n+1/2
*/
int main()
{
  int count = 1, sum = 0;
  int a;
  cout << "Enter a number:" << endl;
  cin >> a;
  while (count <= a)
  {
    sum += count;
    count++;
  }
  cout << "Sum of number from 1 to " << a << " is " << sum << endl;
  return 0;
}

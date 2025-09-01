#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter a number:" << endl;
  cin >> a;

  bool isPrime = true;

  if (a > 2)
  {
    for (int i = 2; i < a; i++)
    {
      if (a % i == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      cout << "Number is prime" << endl;
    }
  }
  else
  {
    cout << "Number is not prime" << endl;
  }
  return 0;
}
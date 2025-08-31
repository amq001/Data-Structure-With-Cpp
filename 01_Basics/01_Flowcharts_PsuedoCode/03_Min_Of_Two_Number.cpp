#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "Enter two numbers:" << endl;
  cin >> a >> b;
  if (a < b)
  {
    cout << "Minimum of " << a << " and " << b << " is " << a << endl;
  }
  else
  {
    cout << "Minimum of " << a << " and " << b << " is " << b << endl;
  }
}
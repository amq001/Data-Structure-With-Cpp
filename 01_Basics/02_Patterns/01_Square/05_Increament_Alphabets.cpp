#include <iostream>
using namespace std;

int main()
{
  // (Increament Alphabets)(n=3, A-H)
  int n = 3;
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  return 0;
}
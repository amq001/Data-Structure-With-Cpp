#include <iostream>
using namespace std;
#include <climits>

int main()
{
  const int size = 5;
  int marks[size];
  for (int i = 0; i < size; i++)
  {
    cout << "Enter value at " << i + 1 << endl;
    cin >> marks[i];
  }
  cout << "Values are " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << marks[i] << endl;
  }
  return 0;
}
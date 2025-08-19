#include <iostream>
using namespace std;

// pass by reference example - Note: Array is always pass by reference
void changeArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] *= 2;
  }
}

int main()
{
  const int size = 3;
  int arr[size] = {1, 2, 3};
  cout << "ARR 1 : ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  cout << endl;
  changeArray(arr, size);
  cout << "ARR 2 : ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  cout << endl;
  return 0;
}

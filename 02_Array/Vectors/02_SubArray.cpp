#include <iostream>
using namespace std;
// SubArray BruteForce
// O (n^3) of n time complexity
void subArray(int array[], int size)
{
  for (int start = 0; start < size; start++)
  {
    for (int end = start; end < size; end++)
    {
      for (int i = start; i <= end; i++)
      {
        if (i == start)
        {
          cout << " {";
        }
        cout << array[i] << ",";
        if (i == end)
        {
          cout << "} ";
        }
      }
      cout << " || ";
    }
    cout << endl;
  }
}

int main()
{
  int size = 7;
  int arr[size] = {3, -4, 5, 4, -1, 7, -8};
  subArray(arr, size);
  return 0;
}

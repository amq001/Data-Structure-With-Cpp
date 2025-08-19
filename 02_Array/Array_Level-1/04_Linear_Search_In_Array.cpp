#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  const int size = 5;
  int arr[size] = {5, 8, 2, 9, 22};
  int value = 22;
  int ans = linearSearch(arr, size, value);
  if (ans == -1)
  {
    cout << "Not FOund";
  }
  else
  {
    cout << "Found at index " << ans;
  }
  return 0;
}
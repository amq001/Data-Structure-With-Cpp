// g++ 07_Swap_Min_Max_Of_Array.cpp -o 07_Swap_Min_Max_Of_Array.exe

#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int arr[], int size)
{
  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < arr[min])
    {
      min = i;
    }
    if (arr[i] > arr[max])
    {
      max = i;
    }
  }
  swap(arr[min], arr[max]);
}

int main()
{

  const int size = 5;
  int arr[size] = {5, 3, 6, 55, 9};
  swapMinMax(arr, size);
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}
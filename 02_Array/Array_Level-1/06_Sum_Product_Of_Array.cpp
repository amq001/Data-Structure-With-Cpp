#include <iostream>
using namespace std;

int productArray(int arr[], int size)
{
  int product = 1;
  for (int i = 0; i < size; i++)
  {
    product *= arr[i];
  }
  return product;
}

int sumArray(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  const int size = 5;
  int arr[size] = {5, 3, 6, 55, 9};
  cout << "Product of an array is : " << productArray(arr, size) << endl;
  cout << "Sum of an array is : " << sumArray(arr, size);
  return 0;
}

// g++ 06_Sum_Product_Of_Array.cpp -o 06_Sum_Product_Of_Array.exe
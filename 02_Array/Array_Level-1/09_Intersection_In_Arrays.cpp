#include <iostream>
using namespace std;

void duplicateInArray(int arr[], int size)
{
  bool visited[size] = {false};
  for (int i = 0; i < size; i++)
  {
    if (visited[i] == true)
    {
      continue;
    }

    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j] && i != j)
      {
        visited[j] = true;
      }
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (visited[i] == true)
    {
      cout << arr[i] << endl;
    }
  }
}

void intersactionOfArrays(int arr[], int size, int arr2[], int size2)
{
  // int dupIntersect[4] = {};
  // int counter = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr[i] == arr2[j])
      {
        cout << arr[i] << endl;
        // dupIntersect[counter++] = arr[i];
      }
    }
  }
  // duplicateInArray(dupIntersect, counter);
}

int main()
{

  /* Home work */
  const int size = 5;
  int arr[size] = {5, 3, 6, 55, 9};
  const int size2 = 6;
  int arr2[size2] = {2, 4, 22, 3, 9, 55};

  // 4- print intersection of 2 arrays (nested loop and hashing)
  intersactionOfArrays(arr, size, arr2, size2);

  return 0;
}

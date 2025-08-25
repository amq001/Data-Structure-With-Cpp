#include <iostream>
using namespace std;

// 3- print all the unique value in an array (nested loop)
//  We will solve it later using Hashing
// Time complexity : O(n^2)
void uniqueValue(int arr[], int size)
{
  int visited[size] = {false};
  for (int i = 0; i < size; i++)
  {
    if (visited[i] == true)
    {
      continue;
    }
    bool isUnique = true;
    for (int j = 0; j < size; j++)
    {
      if (j != i && arr[i] == arr[j])
      {
        visited[j] = true;
        isUnique = false;
      }
    }
    if (isUnique)
    {
      cout << arr[i] << endl;
    }
  }
}

int main()
{
  const int size = 5;
  int arr[size] = {55, 3, 6, 55, 9};
  uniqueValue(arr, size);
  return 0;
}
#include <iostream>
using namespace std;
#include <climits>

// Q1: Smallest and largest in an array
int main()
{
  int arr[] = {5, 15, -35, -5, 0};
  int size = 5;
  int minimum = INT_MAX;
  int minIndex;
  int maximum = INT_MIN;
  int maxIndex;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < minimum)
    {
      minimum = arr[i];
      minIndex = i;
    }
    if (arr[i] > maximum)
    {
      maximum = arr[i];
      maxIndex = i;
    }
  }
  cout << "Min is : " << minimum;
  cout << "  At Index : " << minIndex << endl;
  cout << "Max is : " << maximum;
  cout << " At Index : " << maxIndex << endl;
  return 0;
}

// Boiler Plate
// #include <iostream>
// using namespace std;

// int main()
// {
//   cout<<"Hello";
//   return 0;
// }

//  g++ -std=c++11 vector.cpp -o vector.exe
//  ./vector.exe

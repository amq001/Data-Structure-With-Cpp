#include <iostream>
#include <vector>
using namespace std;

// Brute Force
// vector<int> productExceptSelf(vector<int> &nums)
// {
//   int n = nums.size();
//   vector<int> result(n, 1);
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if (i != j)
//       {
//         result[i] *= nums[j];
//       }
//     }
//   }
//   return result;
// }

// Optimal Approach
vector<int> productExceptSelf(vector<int> &nums)
{
  int n = nums.size();
  vector<int> result(n, 1);
  for (int i = 1; i < n; i++)
  {
    result[i] = result[i - 1] * nums[i - 1];
  }
  int right = 1;
  for (int j = n - 1; j >= 0; j--)
  {
    result[j] *= right;
    right *= nums[j];
  }
  return result;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> result = productExceptSelf(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << ", ";
  }
  return 0;
}
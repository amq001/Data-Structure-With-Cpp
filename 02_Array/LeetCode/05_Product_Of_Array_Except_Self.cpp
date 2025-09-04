#include <iostream>
#include <vector>
using namespace std;

// Brute Force
vector<int> productExceptSelf(vector<int> &nums)
{
  int n = nums.size();
  vector<int> result(n, 1);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i != j)
      {
        result[i] *= nums[j];
      }
    }
  }

  // int prefix = 1;
  // for (int i = 0; i < n; i++) {
  //   result[i] = prefix;
  //   prefix *= nums[i];
  // }
  // int postfix = 1;
  // for (int i = n - 1; i >= 0; i--) {
  //   result[i] *= postfix;
  //   postfix *= nums[i];
  // }
  return result;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> result = productExceptSelf(nums);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int left = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != 0)
        {
            swap(nums[right], nums[left]);
            left++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
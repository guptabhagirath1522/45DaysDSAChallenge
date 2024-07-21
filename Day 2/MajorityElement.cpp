#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 1;
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != ans)
        {
            count--;
        }
        else
        {
            count++;
        }
        if (count == 0)
        {
            ans = nums[i];
            count = 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;

    return 0;
}
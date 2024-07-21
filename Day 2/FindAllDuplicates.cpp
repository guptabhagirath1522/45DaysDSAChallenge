#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int x = abs(nums[i]);
        if (nums[x - 1] < 0)
        {

            ans.push_back(x);
        }
        nums[x - 1] *= -1;
    }
    return ans;
}

int main()
{
    vector<int> nums;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    vector<int> result = findDuplicates(nums);
    cout << "The duplicates in the array are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
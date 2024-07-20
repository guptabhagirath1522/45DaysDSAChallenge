#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); ++i)
    {
        int x = target - nums[i];
        if (hash.find(x) != hash.end())
        {
            return {hash[x], i};
        }
        hash[nums[i]] = i;
    }
    return {};
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
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    vector<int> result = twoSum(nums, target);
    cout << "The indices of the two numbers are: " << result[0] << " and " << result[1] << endl;
    return 0;
}
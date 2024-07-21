#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() < 3)
    {
        return {};
    }
    if (nums[0] > 0)
    { // Base case 2
        return {};
    }
    vector<vector<int>> answer;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            break;
        }
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int low = i + 1, high = nums.size() - 1;
        int sum = 0;
        while (low < high)
        {
            sum = nums[i] + nums[low] + nums[high];
            if (sum > 0)
            {
                high--;
            }
            else if (sum < 0)
            {
                low++;
            }
            else
            {
                answer.push_back({nums[i], nums[low], nums[high]});
                int last_low_occurence = nums[low], last_high_occurence = nums[high];
                while (low < high && nums[low] == last_low_occurence)
                {
                    low++;
                }
                while (low < high && nums[high] == last_high_occurence)
                {
                    high--;
                }
            }
        }
    }
    return answer;
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

    vector<vector<int>> result = threeSum(nums);

    cout << "The triplets with sum zero are: ";
    for (const auto &triplet : result)
    {
        cout << "[";
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}
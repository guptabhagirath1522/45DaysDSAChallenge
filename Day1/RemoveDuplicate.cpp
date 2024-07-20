// Given an integer array nums sorted in non - decreasing order, remove the duplicates in - place such that each unique element appears only once.The relative order of the elements should be kept the same.Then return the number of unique elements in nums.

// Consider the of unique of nums to be k, to get accepted, you need to do the following things :

// Change the array nums such that the first k elements of nums contain the unique elements in the they were present in nums initially.The remaining elements of nums are not important as well as the of nums.Return k.

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }

    int k = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
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
    cout << "The length of the array after removing duplicates is " << removeDuplicates(nums) << endl;
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> result(m + n);
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            result[k] = nums1[i];
            i++;
        }
        else
        {
            result[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m)
    {
        result[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        result[k] = nums2[j];
        j++;
        k++;
    }

    nums1 = result;
}

int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int m, n;
    cout << "Enter the number of elements in the first array: ";
    cin >> m;
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }
    cout << "Enter the number of elements in the second array: ";
    cin >> n;
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums2.push_back(temp);
    }
    merge(nums1, m, nums2, n);
    cout << "The merged array is: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
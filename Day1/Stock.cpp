/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit, return 0.*/

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n <= 1)
    {
        return 0;
    }
    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < n; i++)
    {
        if (prices[i] > minPrice)
        {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit)
            {
                maxProfit = currentProfit;
            }
        }
        else
        {
            minPrice = prices[i];
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> prices;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        prices.push_back(temp);
    }
    cout << "The maximum profit is " << maxProfit(prices) << endl;
    return 0;
}
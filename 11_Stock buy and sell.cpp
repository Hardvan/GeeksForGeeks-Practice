/*
The cost of stock on each day is given in an array A[] of size N.
Find all the segments of days on which you buy and sell the stock
so that in between those days for which profit can be generated.

The task is to complete the function stockBuySell()
which takes an array A[] and N as input parameters and
finds the days of buying and selling stock.
The function must return a 2D list of integers containing all the buy-sell pairs
i.e. first value of pair will represent the day on which you buy the stock and
second value represent the day on which you sell that stock.
If there is No Profit, return an empty list.
*/

#include <vector>

using namespace std;

vector<vector<int>> stockBuySell(vector<int> A, int n)
{
    vector<vector<int>> res;

    int buy = 0, sell = 0;
    bool bought = false;

    for (int i = 1; i < n; i++)
    {
        if (A[i] > A[i - 1])
        {
            if (!bought)
            {
                buy = i - 1;
                bought = true;
            }
            sell = i;
        }
        else
        {
            if (bought)
            {
                res.push_back({buy, sell});
                bought = false;
            }
        }
    }

    if (bought)
    {
        res.push_back({buy, n - 1});
    }

    return res;
}

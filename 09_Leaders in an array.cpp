/*
Given an array A of positive integers.
Your task is to find the leaders in the array.
An element of array is leader if it is greater than or equal to
all the elements to its right side.
The rightmost element is always a leader.
*/

#include <vector>

using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> res;

    int cur_leader = a[n - 1]; // Rightmost element is always a leader
    res.push_back(cur_leader);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= cur_leader)
        {
            res.push_back(a[i]);
            cur_leader = a[i]; // Update current leader
        }
    }

    // Reversing res
    for (int i = 0; i < res.size() / 2; i++)
        swap(res[i], res[res.size() - i - 1]);

    return res;
}

#include <vector>
#include <unordered_map>

#define ll long long

using namespace std;

bool check(vector<ll> A, vector<ll> B, int N)
{
    unordered_map<int, int> freqA, freqB;
    int i;

    // Counting element frequency in both arrays
    for (i = 0; i < N; i++)
    {
        freqA[A[i]]++;
        freqB[B[i]]++;
    }

    for (i = 0; i < N; i++)
    {
        if (freqA[A[i]] != freqB[A[i]])
            return false;
    }

    return true;
}
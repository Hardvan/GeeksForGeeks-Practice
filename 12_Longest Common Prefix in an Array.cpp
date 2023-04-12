#include <string>

using namespace std;

string longestCommonPrefix(string arr[], int N)
{
    string prefix = arr[0];

    for (int i = 1; i < N; i++)
    {
        int j = 0;
        while (j < prefix.length() &&
               j < arr[i].length() &&
               prefix[j] == arr[i][j])
        {
            j++;
        }

        prefix = prefix.substr(0, j);
    }

    if (prefix.length() == 0)
        return "-1";

    return prefix;
}

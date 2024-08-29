#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int maxIndexDifference(vec &arr)
{
    int n = arr.size();
    vec maxRight(n);
    maxRight[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
        maxRight[i] = max(maxRight[i + 1], arr[i]);

    int maxDiff = -1;
    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (maxRight[j] >= arr[i])
        {
            maxDiff = max(maxDiff, j - i);
            j++;
        }
        else
            i++;
    }

    return maxDiff;
}

int main()
{
    system("cls");
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    vec arr;
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cout << maxIndexDifference(arr) << endl;

    return 0;
}
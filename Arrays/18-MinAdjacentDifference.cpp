#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int minAdjacentDifference(vec &arr)
{
    ll size = arr.size(), minDifference = abs(arr[0] - arr[size - 1]), difference;

    for (int i = 0; i < size - 1; i++)
        minDifference = min(minDifference, abs(arr[i] - arr[i + 1]));

    return minDifference;
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

    int size, element;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cout << minAdjacentDifference(arr) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int floorSortedArray(vec &arr, int x)
{
    ll size = arr.size(), low = 0, high = size - 1, smalltestElement = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x)
        {
            smalltestElement = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return smalltestElement;
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

    int size, x;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> x;

    cout << floorSortedArray(arr, x) << endl;

    return 0;
}

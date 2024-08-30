#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int minSortedRotated(vec &arr)
{
    int size = arr.size();
    ll low = 0, high = size - 1, result = INT8_MAX;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[high])
        {
            result = min(result, arr[low]);
            break;
        }

        if (arr[low] <= arr[mid])
        {
            result = min(result, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            result = min(result, arr[mid]);
        }
    }

    return result;
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

    int size;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << minSortedRotated(arr) << endl;

    return 0;
}
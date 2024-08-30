#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int binarySearch(vec &arr, int toFound)
{
    int size = arr.size(), low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == toFound)
            return 1;

        if (arr[mid] < toFound)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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

    int size, toFound;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> toFound;

    cout << binarySearch(arr, toFound) << endl;

    return 0;
}
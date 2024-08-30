#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int peakElement(vec &arr)
{
    int size = arr.size();

    if (size == 1)
        return 0;

    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        bool isLeftOK = (mid == 0) || (arr[mid] >= arr[mid - 1]);
        bool isRightOK = (mid == size - 1) || (arr[mid] >= arr[mid + 1]);

        if (isLeftOK && isRightOK)
            return mid;

        if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return high;
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

    cout << peakElement(arr) << endl;

    return 0;
}
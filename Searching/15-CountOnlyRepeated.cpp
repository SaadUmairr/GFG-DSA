#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

pair<long, long> countRepeated(vec &arr)
{
    int repeatedElement = -1, count = 0, size = arr.size(), low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if ((mid > 0 && arr[mid] == arr[mid - 1]) || (mid < size - 1 && arr[mid] == arr[mid + 1]))
        {
            repeatedElement = arr[mid];
            break;
        }

        if (arr[mid] == arr[0] + mid)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (repeatedElement == -1)
        return {-1, -1};

    count = size - (arr[size - 1] - arr[0]);
    return {repeatedElement, count};
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

    pair<long, long> result = countRepeated(arr);

    cout << result.first << " : " << result.second << endl;

    return 0;
}
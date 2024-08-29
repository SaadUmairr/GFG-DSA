#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

ll kadane(vec &arr)
{
    int result = arr[0], maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {

        maxEnding = max(maxEnding + arr[i], arr[i]);
        result = max(result, maxEnding);
    }
    return result;
}

ll maxCircularSum(vec &arr)
{

    ll maxKadane = kadane(arr);

    if (maxKadane < 0)
        return maxKadane;

    ll sum = 0, maxCircular;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }

    maxCircular = sum + kadane(arr);

    return max(maxCircular, maxKadane);
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

    cout << maxCircularSum(arr) << endl;

    return 0;
}
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

    cout << kadane(arr) << endl;

    return 0;
}
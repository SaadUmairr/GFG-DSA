#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int longestEvenOddSubarray(vec &arr)
{
    int size = arr.size(), alternateCounter = 1, maxSubarray = 1;

    for (int i = 1; i < size ; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            cout << "CHECK: " << arr[i] << " with " << arr[i + 1] << endl;
            alternateCounter++;
            cout << "COUNTER: " << alternateCounter << endl;
            maxSubarray = max(maxSubarray, alternateCounter);
            cout << "MAX: " << maxSubarray << endl;
        }
        else
            alternateCounter = 1;
        cout << endl;
    }

    return maxSubarray;
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

    cout << longestEvenOddSubarray(arr) << endl;

    return 0;
}
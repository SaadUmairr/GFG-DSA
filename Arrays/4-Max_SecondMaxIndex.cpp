#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec maxSecondMax(vec arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size(), i = size - 2;

    vec result;
    result.push_back(arr[size - 1]);

    while (i >= 0 && result.size() == 1)
    {
        if (arr[i] < result[0])
            result.push_back(arr[i]);
        i--;
    }
    if (result.size() == 1)
        result.push_back(-1);
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

    vec arr, result;
    ll size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    result = maxSecondMax(arr);

    for (auto &tr : result)
        cout << tr << '\t';

    return 0;
}
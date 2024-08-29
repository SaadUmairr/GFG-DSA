#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec arrayLeader(vec &arr)
{
    vec result;
    int size = arr.size(), currentLeader = arr[size - 1];
    if (size == 0)
        return result;
    result.push_back(currentLeader);
    for (int i = size - 2; i >= 0; i--)
    {
        if (currentLeader <= arr[i])
        {
            currentLeader = arr[i];
            result.push_back(arr[i]);
        }
    }

    reverse(result.begin(), result.end());
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
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    result = arrayLeader(arr);

    for (auto &tr : result)
        cout << tr << '\t';

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int majority(vec &arr, int x, int y)
{
    int size = arr.size(), xCounter = 0, yCounter = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
            xCounter++;
        else if (arr[i] == y)
            yCounter++;
    }

    if (xCounter == yCounter)
        return min(x, y);
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

    int size, x, y, element;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cin >> x, y;

    cout << majority(arr, x, y) << endl;

    return 0;
}
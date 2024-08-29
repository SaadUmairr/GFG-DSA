#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;
void reverseArray(vec &arr, int start, int end)
{
    end--;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseInGroups(vec &arr, int chunk)
{
    int size = arr.size();
    for (int i = 0; i < size; i += chunk)
    {
        int end = min(i + chunk, size);
        reverseArray(arr, i, end);
    }
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

    int size, element, chunk;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cin >> chunk;

    reverseInGroups(arr, chunk);

    for (auto &tr : arr)
        cout << tr << '\t';

    return 0;
}
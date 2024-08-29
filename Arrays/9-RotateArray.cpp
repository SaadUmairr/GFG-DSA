#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void reverse(vec &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateArray(vec &arr, int gap)
{

    int size = arr.size();

    reverse(arr, 0, (gap % size) - 1);
    reverse(arr, gap % size, size - 1);
    reverse(arr, 0, size - 1);
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

    int size, element, gap;
    vec arr;

    cin >> size >> gap;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    rotateArray(arr, gap);

    for (auto &tr : arr)
        cout << tr << '\t';

    return 0;
}
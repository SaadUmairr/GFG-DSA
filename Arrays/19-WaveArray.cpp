#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void waveArray(vec &arr)
{
    for (int i = 0; i < arr.size() - 1; i += 2)
        swap(arr[i], arr[i + 1]);
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

    waveArray(arr);

    for (auto &elements : arr)
        cout << elements << '\t';

    return 0;
}
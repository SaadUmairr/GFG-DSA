#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void reArrange(vec &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] + (arr[arr[i]] % size) * size;

    for (int i = 0; i < size; i++)
        arr[i] /= size;
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

    vec arr;
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    reArrange(arr);

    for (auto &tr : arr)
        cout << tr << '\t';

    return 0;
}
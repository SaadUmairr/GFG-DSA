#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int arraySearch(vec &arr, int toFound)
{

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == toFound)
            return i;
    return -1;
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

    int size, toFound;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> toFound;

    cout << arraySearch(arr, toFound) << endl;

    return 0;
}
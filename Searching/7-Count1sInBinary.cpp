#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int count1s(vec &arr)
{
    int size = arr.size();

    int count = 0, i = 0;

    while (arr[i] != 0 && i<size)
    {
        count++;
        i++;
    }
    return count;
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

    int size;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << count1s(arr) << endl;

    return 0;
}
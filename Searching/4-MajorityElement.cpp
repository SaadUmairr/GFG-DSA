#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int majorityELement(vec &arr)
{
    int size = arr.size();

    int votes = 0, canditdate = -1, count = 0;

    for (int i = 0; i < size; i++)
    {
        if (votes == 0)
        {
            canditdate = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == canditdate)
                votes++;
            else
                votes--;
        }
    }

    for (int i = 0; i < size; i++)
        if (arr[i] == canditdate)
            count++;
    if (count > (size / 2))
        return canditdate;
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

    int size;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << majorityELement(arr) << endl;

    return 0;
}
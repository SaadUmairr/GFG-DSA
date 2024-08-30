#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int roofTop(vec &arr)
{
    int steps = 0, maxSteps = 0, size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            steps++;
            maxSteps = max(steps, maxSteps);
        }
        else
            steps = 0;
    }
    return maxSteps;
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

    cout << roofTop(arr) << endl;

    return 0;
}
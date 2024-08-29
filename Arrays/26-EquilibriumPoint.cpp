#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int equilibriumPoint(vec &arr)
{
    int leftSum = 0, rightSum = 0, size = arr.size();

    if (size == 1)
        return arr[0];

    for (int i = 1; i < size; i++)
        rightSum += arr[i];

    for (int i = 0; i < size - 1; i++)
    {
        if (leftSum == rightSum)
            return i + 1;
        leftSum += arr[i];
        rightSum -= arr[i + 1];
    }
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
    int size, element;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cout << equilibriumPoint(arr) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int trappingRainWater(vec &arr)
{
    int size = arr.size();
    int waterUnits = 0;
    vec leftMax(size, 0), rightMax(size, 0);

    leftMax[0] = arr[0];
    rightMax[size - 1] = arr[size - 1];

    for (int i = 1; i < size; i++)
        leftMax[i] = max(arr[i], leftMax[i - 1]);

    for (int i = size - 2; i >= 0; i--)
        rightMax[i] = max(arr[i], rightMax[i + 1]);

    for (int i = 1; i < size - 1; i++)
        waterUnits = waterUnits + (min(leftMax[i], rightMax[i]) - arr[i]);

    return waterUnits;
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

    cout << trappingRainWater(arr) << endl;

    return 0;
}
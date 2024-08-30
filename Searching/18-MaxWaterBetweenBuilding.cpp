#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int waterLevel(vec &height)
{
    int maxWaterLevel = INT8_MIN, level, size = height.size(), start = 0, end = size - 1;

    if (size <= 2)
        return 0;

    while (start <= end)
    {
        level = min(height[start], height[end]) * (end - start - 1);
        maxWaterLevel = max(maxWaterLevel, level);

        (height[start] < height[end]) ? start++ : end--;
    }

    return maxWaterLevel;
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

    vec height(size);

    for (int i = 0; i < size; i++)
        cin >> height[i];

    cout << waterLevel(height) << endl;

    return 0;
}
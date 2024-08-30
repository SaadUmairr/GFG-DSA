#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int countOccurence(vec &arr, int x)
{
    int size = arr.size();
    int count = 0, target = size / x;

    if (x > size)
        return 0;

    map<int, int> frequency;

    for (int i = 0; i < size; i++)
    {
        if (frequency.find(arr[i]) == frequency.end())
            frequency[arr[i]] = 1;
        else
            frequency[arr[i]]++;
    }
    for (auto itr : frequency)
        if (itr.second > target)
            count++;

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

    int size, x;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> x;

    cout << countOccurence(arr, x) << endl;

    return 0;
}
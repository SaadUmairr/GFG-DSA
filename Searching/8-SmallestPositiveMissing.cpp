#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int smallestMissingPositive(vec &arr)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
        if (arr[i] < 0)
            arr[i] = 0;

    for (int i = 0; i < size; i++)
    {
        int value = abs(arr[i]);
        if ((1 <= value) && (value <= size))
        {
            if (arr[value - 1] > 0)
                arr[value - 1] *= -1;
            else if (arr[value - 1] == 0)
                arr[value - 1] = -1 * (size + 1);
        }
    }

    for (int i = 1; i < size + 1; i++)
        if (arr[i - 1] >= 0)
            return i;
    return size + 1;

    // Another approach with O(nlogn) time complexity
    // sort(arr.begin(), arr.end());
    // int count = 1;
    // for (int i = 0; i < size; i++)
    //     if (arr[i] == count)
    //         count++;
    // return count;
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

    cout << smallestMissingPositive(arr) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

bool isSortedAndRotated(vec &arr)
{

    // Your code here
    int n = arr.size();
    int minElement = INT8_MAX, maxElement = INT8_MIN, minIndex = -1, maxIndex = -1;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
            minIndex = i;
        }
    }
    if (minIndex - maxIndex == 1 && arr[0] >= arr[n - 1])
    {
        // Ascending
        for (int i = 0; i < maxIndex; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                return false;
            }
        }
        for (int i = maxIndex + 1; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                return false;
            }
        }
        return true;
    }
    else if (minIndex - maxIndex == -1 && arr[0] <= arr[n - 1])
    {
        // Descending
        for (int i = 0; i < minIndex - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                return false;
            }
        }
        for (int i = maxIndex + 1; i < n - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                return false;
            }
        }
        return true;
    }
    return false;
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

    int size,
        element;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    if (isSortedAndRotated(arr))
        cout << "YES, THE PROVIDED ARRAY IS SORTED AND ROTATED" << endl;
    else
        cout << "NO, THE PROVIDED ARRAY IS EITHER NOT SORTED OR NOT ROTATED" << endl;

    return 0;
}
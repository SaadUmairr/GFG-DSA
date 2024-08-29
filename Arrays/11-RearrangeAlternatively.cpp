#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void rearrangeAlternatively(vec &arr)
{
    int size = arr.size();
    int start = 0, end = size - 1;
    int maxElement = arr[size - 1] + 1;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = (arr[end] % maxElement) * maxElement + arr[i];
            end--;
        }
        else
        {
            arr[i] = (arr[start] % maxElement) * maxElement + arr[i];
            start++;
        }
    }

    for (int i = 0; i < size; i++)
        arr[i] /= maxElement;
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

    rearrangeAlternatively(arr);

    for (auto &tr : arr)
        cout << tr << '\t';

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int mean(vec &arr)
{
    ll sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];
    return sum / arr.size();
}

int median(vec &arr)
{
    sort(arr.begin(), arr.end());

    int totalTerms = arr.size();
    if (totalTerms % 2 == 0)
        return (arr[totalTerms / 2 - 1] + arr[totalTerms / 2]) / 2;
    else
        return arr[totalTerms / 2];
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

    vec arr;
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cout << mean(arr) << endl;
    cout << median(arr) << endl;

    return 0;
}
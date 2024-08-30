#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec result;

void twoRepeatedElements(vec &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {

        int index = abs(arr[i]);

        if (arr[index] > 0)
            arr[index] *= -1;
        else
            result.push_back(abs(arr[i]));
    }
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

    vec arr(size + 2);

    for (int i = 0; i < size + 2; i++)
        cin >> arr[i];

    twoRepeatedElements(arr);

    for (auto &element : result)
        cout << element << '\t';

    return 0;
}
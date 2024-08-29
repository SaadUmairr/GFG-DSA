#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vector<vector<ll>> stockBuySell(vec &arr)
{
    vector<vector<ll>> result;

    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            int buy = i, sell = i;
            while (sell < size - 1 && arr[sell + 1] > arr[sell])
                sell++;

            if (sell > buy)
                result.push_back({buy, sell});
            i = sell;
        }
    }
    return result;
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
    vector<vector<ll>> result;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    result = stockBuySell(arr);

    for (auto &row : result)
    {
        cout << endl;
        for (auto &element : row)
            cout << element << '\t';
    }

    return 0;
}
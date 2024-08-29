#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void frequencyLimitedRange(vec &arr, int p)
{
    int size = arr.size();

    vec result(size, 0);

    if (size < p)
    {
        arr = result;
        return;
    }

    map<int, int> frequency;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 1 && arr[i] <= p)
            frequency[arr[i]]++;
    }

    for (auto &key : frequency)
        result[key.first - 1] = key.second;

    arr = result;

    // Optimised Approach
    //  p++;

    //     for(int i=0;i<size;i++)
    //     {
    //         int index = (arr[i]%p) -1;
    //         if(index>=size)
    //             continue;
    //         int c1 = arr[index] /p;
    //         int c2 = arr[index] %p;

    //         c1++;

    //         arr[index] = c1 * p + c2;

    //     }

    //     for(int i=0;i<size;i++)
    //         arr[i]/=p;
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

    int size, element, p;
    vec arr;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cin >> p;

    frequencyLimitedRange(arr, p);

    for (auto &traverse : arr)
        cout << traverse << '\t';

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int sizeOfA, sizeOfB;

vec merge(vec &arr, vec &brr)
{
    int i = 0, j = 0, k = 0;
    vec result(sizeOfA + sizeOfB);
    while (i < sizeOfA && j < sizeOfB)
    {
        if (arr[i] < brr[j])
        {
            result[k] = arr[i];
            i++;
        }
        else
        {
            result[k] = brr[j];
            j++;
        }
        k++;
    }

    while (i < sizeOfA)
    {
        result[k] = arr[i];
        i++;
        k++;
    }

    while (j < sizeOfB)
    {
        result[k] = brr[j];
        j++;
        k++;
    }

    return result;
}

int median(vec &arr, vec &brr)
{
    vec result = merge(arr, brr);

    int n = result.size();

    if (n % 2 == 0)
        return (result[(n - 1) / 2] + result[n / 2]) / 2;
    return result[n / 2];
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

    cin >> sizeOfA >> sizeOfB;

    vec arr(sizeOfA), brr(sizeOfB);

    for (int i = 0; i < sizeOfA; i++)
        cin >> arr[i];

    for (int i = 0; i < sizeOfB; i++)
        cin >> brr[i];

    cout << median(arr, brr) << endl;

    return 0;
}
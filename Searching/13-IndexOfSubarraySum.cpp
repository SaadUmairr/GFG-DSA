#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec indexOfSubarraySum(vec &arr, int sum)
{
    vec result;

    int currentSum = arr[0], start = 0, end = 0, size = arr.size();

    for (end = 1; end <= size; end++)
    {
        while (sum < currentSum && start < end - 1)
        {
            currentSum -= arr[start];
            start++;
        }
        if (currentSum == sum)
        {
            result.push_back(start + 1);
            result.push_back(end);

            return result;
        }
        if (end < size)
            currentSum += arr[end];
    }

    return vec{-1};
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

    int size, sum;

    cin >> size;

    vec arr(size), result;

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> sum;

    result = indexOfSubarraySum(arr, sum);

    for (auto &element : result)
        cout << element << '\t';

    return 0;
}
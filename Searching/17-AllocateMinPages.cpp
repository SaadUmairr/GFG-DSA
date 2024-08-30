#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

bool isPossible(vec &arr, int students, int currentMin)
{
    int studentRequired = 1, sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > currentMin)
            return false;

        if (sum + arr[i] > currentMin)
        {
            studentRequired++;
            sum = arr[i];

            if (studentRequired > students)
                return false;
        }
        else
            sum += arr[i];
    }

    return true;
}

ll minPages(vec &arr, int students)
{
    ll size = arr.size(), sum = 0, result = INT8_MAX, mx = INT8_MIN;

    if (size < students)
        return -1;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }

    int low = mx, high = sum;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, students, mid))
        {
            result = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
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

    ll size, students;

    cin >> size;

    vec arr(size);

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> students;

    cout << minPages(arr, students) << endl;

    return 0;
}
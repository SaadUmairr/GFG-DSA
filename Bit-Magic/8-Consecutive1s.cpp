#include <iostream>
#include <algorithm>
using namespace std;

int consecutive1s(int n)
{
    int count = 0, currentBit = 0, maxCount = 0;
    while (n != 0)
    {
        currentBit = n % 2;
        if (currentBit)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
            count = 0;
        n /= 2;
    }

    return maxCount;
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

    int input;

    cin >> input;

    cout << consecutive1s(input) << endl;

    return 0;
}
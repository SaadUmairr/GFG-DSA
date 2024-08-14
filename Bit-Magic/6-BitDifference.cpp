#include <iostream>
#define ll long long int
using namespace std;

ll countBitsFlip(int a, int b)
{
    int result = a ^ b, count = 0;

    while (result != 0)
    {
        if (result & 1)
            count++;
        result >>= 1;
    }
    return count;
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

    ll a, b;

    cin >> a >> b;

    cout << countBitsFlip(a, b) << endl;

    return 0;
}
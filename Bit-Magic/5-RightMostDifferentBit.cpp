#include <iostream>
#define ll long long int
using namespace std;

int rightmostDifferentBit(ll a, ll b)
{
    int count = 1;

    while (a || b)
    {
        if ((a & 1) != (b & 1))
            return count;
        count++;
        a >>= 1;
        b >>= 1;
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

    ll a, b;

    cin >> a >> b;

    cout << rightmostDifferentBit(a, b) << endl;

    return 0;
}
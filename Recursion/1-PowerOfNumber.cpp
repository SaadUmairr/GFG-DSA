#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

ll MODULO = 1000000007;

ll power(ll number, ll pwr)
{
    if (pwr == 0)
        return 1;
    if (pwr == 1)
        return number;
    if (pwr % 2 == 0)
    {

        ll result = power(number, pwr / 2);
        result = result * result % MODULO;
        return result;
    }
    else
    {
        ll result = power(number, pwr - 1) % MODULO;
        return (number * result) % MODULO;
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

    ll number, pwr;

    cin >> number >> pwr;

    cout << power(number, pwr) << endl;

    return 0;
}
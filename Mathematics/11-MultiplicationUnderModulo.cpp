#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

ll MODULO = pow(10, 9) + 7;

ll multiplyUnderModulo(ll a, ll b)
{
    return ((a % MODULO) * (b % MODULO)) % MODULO;
}

int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ll a, b;

    cin >> a >> b;

    cout << multiplyUnderModulo(a, b) << endl;

    return 0;
}
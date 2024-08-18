#include <iostream>
#define ll long long int
using namespace std;

bool isPrime(ll num)
{
    if (num == 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (ll i = 5; i * i <= num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    system("cls");
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    // #endif

    ll num;

    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime number" << endl;
    else
        cout << num << " is not a Prime number" << endl;

    return 0;
}
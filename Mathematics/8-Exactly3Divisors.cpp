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

ll exactly3Divisors(ll num)
{
    ll count = 0;
    for (ll i = 2; i * i <= num; i++)
        if (isPrime(i) && i * i <= num)
            count++;
    return count;
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

    cout << exactly3Divisors(num) << endl;

    return 0;
}
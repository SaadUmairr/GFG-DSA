#include <iostream>
#define ll long long int
using namespace std;

int sum(ll number)
{
    return (number == 0) ? 0 : (number % 10 + sum(number / 10));
}

int digitalRoot(ll number)
{

    return (number < 10) ? number : digitalRoot(sum(number));
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

    ll number;

    cin >> number;

    cout << digitalRoot(number) << endl;

    return 0;
}
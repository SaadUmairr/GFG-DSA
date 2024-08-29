#include <iostream>
#define ll long long int
using namespace std;

ll sumOfDigits(ll number)
{
    return (number == 0) ? 0 : (number % 10 + sumOfDigits(number / 10));
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

    cout << sumOfDigits(number) << endl;

    return 0;
}
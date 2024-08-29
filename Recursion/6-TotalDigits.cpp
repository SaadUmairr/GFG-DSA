#include <iostream>
#define ll long long int
using namespace std;

int totalDigits(ll number)
{
    return number == 0 ? 0 : (1 + totalDigits(number / 10));
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

    cout << totalDigits(number) << endl;

    return 0;
}
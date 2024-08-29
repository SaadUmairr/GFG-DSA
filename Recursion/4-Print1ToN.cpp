#include <iostream>
#define ll long long int
using namespace std;

void print1ToN(ll n)
{
    if (n == 0)
        return;
    print1ToN(n - 1);
    cout << n << '\t';
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

    int range;

    cin >> range;

    print1ToN(range);

    return 0;
}
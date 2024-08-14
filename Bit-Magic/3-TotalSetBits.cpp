#include <iostream>
using namespace std;

int powerOf2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
        x++;
    return x - 1;
}

int totalSetBits(int input)
{
    if (input == 0)
        return 0;

    int x = powerOf2(input), bitsUpto2x = x * (1 << (x - 1));
    int msbUpto2 = input - (1 << x) + 1, rest = input - (1 << x);
    int result = bitsUpto2x + msbUpto2 + totalSetBits(rest);

    return result;
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

    int input;

    cin >> input;

    cout << totalSetBits(input) << endl;

    return 0;
}
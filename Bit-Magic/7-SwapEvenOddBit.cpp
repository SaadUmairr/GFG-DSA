#include <iostream>
using namespace std;

unsigned int swapBits(unsigned int n)
{
    int a = 0;
    for (int i = 0; i < 32; i += 2)
    {
        if (n & 1)
            a += (1 << (i + 1));
        if ((n >> 1) & 1)
            a += (1 << i);
        n >>= 2;
    }
    return a;
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

    cout << swapBits(input) << endl;

    return 0;
}
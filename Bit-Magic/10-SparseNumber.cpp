#include <iostream>
using namespace std;

bool isSparse(int n)
{
    int previousBit = 0;
    while (n > 0)
    {
        if (n & 1 == 1 && previousBit == 1)
            return false;
        previousBit = n & 1;
        n >>= 1;
    }
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

    int input;

    cin >> input;

    cout << isSparse(input) << endl;

    return 0;
}
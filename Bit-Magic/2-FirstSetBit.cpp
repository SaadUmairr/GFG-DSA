#include <iostream>
using namespace std;

unsigned int firstSetBit(int input)
{
    int count = 1;
    while (input > 0)
    {
        if (input & 1)
            return count;
        count++;
        input >>= 1;
    }
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

    cout << firstSetBit(input) << endl;

    return 0;
}
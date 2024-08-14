#include <iostream>
using namespace std;

bool checkKthBit(int input, int k)
{
    if ((input >> k) & 1 != 0)
        return true;
    return false;
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

    int input, k;
    cin >> input >> k;

    cout << checkKthBit(input, k) << endl;

    return 0;
}
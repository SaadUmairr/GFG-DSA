#include <iostream>
using namespace std;

long long int grayToBinary(long long int n)
{
    long long int result = n;

    while (n > 0)
    {
        n >>= 1;
        result ^= n;
    }
    return result;
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

    long long int input;

    cin >> input;

    cout << grayToBinary(input) << endl;

    return 0;
}
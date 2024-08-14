#include <iostream>
using namespace std;

bool powerOf2(int input)
{
    return (input && ((input & (input - 1)) == 0));
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

    long long int input;

    cin >> input;

    cout << powerOf2(input) << endl;

    return 0;
}
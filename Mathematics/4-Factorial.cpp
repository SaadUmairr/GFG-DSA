#include <iostream>
#define ll long long int
using namespace std;

ll factorial(ll input)
{
    if (input == 0)
        return 1;
    return input * factorial(input - 1);
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

    ll input;

    cin >> input;

    if (input < 0)
    {
        cout << "FACTORIAL OF NEGATIVE NUMBER IS UNDEFINED" << endl;
        return -1;
    }

    cout << factorial(input) << endl;

    return 0;
}
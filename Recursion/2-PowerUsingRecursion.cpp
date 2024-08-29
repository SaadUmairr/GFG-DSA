#include <iostream>
#define ll long long int
using namespace std;

ll powerRecursion(int number, int power)
{
    if (power == 0)
        return 1;
    return number * powerRecursion(number, power - 1);
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

    int number, power;

    cin >> number >> power;

    cout << powerRecursion(number, power) << endl;

    return 0;
}
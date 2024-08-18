#include <iostream>
using namespace std;

double celsiusToFahrenheit(int celsius)
{
    return celsius * (9.0 / 5.0) + 32;
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

    int celsius;

    cin >> celsius;

    cout << celsiusToFahrenheit(celsius) << endl;

    return 0;
}
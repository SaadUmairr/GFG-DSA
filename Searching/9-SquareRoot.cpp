#include <iostream>
#include <cmath>
using namespace std;

int squareRoot(int num)
{
    return floor(sqrt(num));
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

    int num;

    cin >> num;

    cout << squareRoot(num) << endl;

    return 0;
}
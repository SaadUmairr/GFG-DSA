#include <iostream>
#include <math.h>
using namespace std;

int absolute(int input)
{
    return abs(input);
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

    cout << absolute(input) << endl;

    return 0;
}
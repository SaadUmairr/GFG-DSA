#include <iostream>
#include <cmath>
using namespace std;

double gpTerm(int a, int b, int num)
{
    double result = b / a;
    if (num == 1)
        return a;
    return (a * pow(result, num - 1));
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

    int a, b, num;

    cin >> a >> b >> num;

    cout << gpTerm(a, b, num) << endl;

    return 0;
}
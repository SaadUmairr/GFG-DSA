#include <iostream>
#include <cmath>
using namespace std;

double factorial(int num, double result)
{
    if (num == 1)
        return floor(result) + 1;

    return factorial(num - 1, result + log10(num));
}

int digitsInFactorial(int num)
{
    return factorial(num, 0);
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

    int num;
    cin >> num;

    cout << digitsInFactorial(num) << endl;

    return 0;
}

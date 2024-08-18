#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int digitsInLogarithm(int input)
{
    double result = 0;

    for (int i = 1; i <= input; i++)
        result += log10(i);
    return floor(result + 1);
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

    cout << digitsInLogarithm(input) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec fractionTrouble(int p, int q)
{
    int numerator = 0, denominator = 1;

    for (int i = 10000; i > 1; i--)
    {
        int check = (p * i - 1) / q;
        if (check * denominator > i * numerator)
        {
            denominator = i;
            numerator = check;
        }
    }
    int gcd = __gcd(numerator, denominator);
    return vec{numerator / gcd, denominator / gcd};
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

    int p, q;
    vec result;

    cin >> p >> q;

    result = fractionTrouble(p, q);

    for (auto &element : result)
        cout << element << '\t';

    return 0;
}
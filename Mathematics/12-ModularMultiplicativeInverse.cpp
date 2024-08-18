#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int moduloInverse(int a, int m)
{
    int result = 1;

    while (result < m)
    {
        if ((a * result) % m == 1)
            return result;
        result++;
    }
    return -1;
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

    int a, m;

    cin >> a >> m;

    cout << moduloInverse(a, m) << endl;

    return 0;
}
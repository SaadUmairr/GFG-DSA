#include <iostream>
#define ll long long int
using namespace std;

int josephusSurvivor(int n, int k)
{
    if (n == 1)
        return 0;
    return (josephusSurvivor(n - 1, k) + k) % n;
}

int josephus(int n, int k)
{
    return josephusSurvivor(n, k) + 1;
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

    int n, k;

    cin >> n >> k;

    cout << josephus(n, k) << endl;

    return 0;
}
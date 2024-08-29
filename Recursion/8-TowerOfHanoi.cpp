#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

ll towerOfHanoi(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
        return 1;
    }

    int moves1 = towerOfHanoi(n - 1, from, aux, to);

    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;

    int moves2 = towerOfHanoi(n - 1, aux, to, from);

    return (moves1 + moves2 + 1);
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

    int disks, moves;

    cin >> disks;

    moves = towerOfHanoi(disks, 1, 3, 2);

    cout << moves << endl;

    return 0;
}
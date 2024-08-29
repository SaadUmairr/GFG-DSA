#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int bettingGame(string &game)
{
    int result = 4, bet = 1, size = game.size();

    for (int chr = 0; chr < size; chr++)
    {
        if (game[chr] == 'W')
        {
            result += bet;
            bet = 1;
        }
        else if (game[chr] == 'L')
        {
            result -= bet;
            bet *= 2;
            if (result < bet && chr < size - 1)
                return -1;
        }
    }
    return result;
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

    string str;

    cin >> str;

    cout << bettingGame(str) << endl;

    return 0;
}
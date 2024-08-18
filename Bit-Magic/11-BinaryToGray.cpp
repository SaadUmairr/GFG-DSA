#include <iostream>
using namespace std;

long long int binaryToGray(long long int n)
{
    return (n ^ (n >> 1));
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

    long long int input;

    cin >> input;

    cout << binaryToGray(input) << endl;

    return 0;
}
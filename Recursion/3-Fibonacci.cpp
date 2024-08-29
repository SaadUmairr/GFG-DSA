#include <iostream>
#define ll long long int
using namespace std;

ll fibonacci(int term)
{
    if (term == 1 || term == 0)
        return term;
    return fibonacci(term - 2) + fibonacci(term - 1);
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

    int term;

    cin >> term;

    cout << fibonacci(term) << endl;

    return 0;
}
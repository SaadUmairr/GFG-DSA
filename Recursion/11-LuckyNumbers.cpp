#include <iostream>
#define ll long long int
using namespace std;

bool isLucky(ll num, int counter = 2)
{
    if (num < counter)
        return true;
    if (counter % num == 0)
        return false;

    num = num - (num / counter);

    return isLucky(num, counter + 1);
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

    ll num;

    cin >> num;

    if (isLucky(num))
        cout << num << " is a lucky number" << endl;
    else
        cout << num << " is not a lucky number" << endl;

    return 0;
}
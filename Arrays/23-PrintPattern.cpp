#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec result;

vec pattern(int num)
{
    if (num <= 0)
    {
        result.push_back(num);
        return result;
    }
    result.push_back(num);
    pattern(num - 5);
    result.push_back(num);
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

    int num;

    cin >> num;

    result = pattern(num);

    for (auto &element : result)
        cout << element << '\t';

    return 0;
}
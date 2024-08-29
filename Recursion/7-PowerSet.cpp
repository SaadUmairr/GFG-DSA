#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> powerSet(string s)
{
    vector<string> result;

    int size = s.size();
    for (int i = 1; i <= (1 << size) - 1; i++)
    {
        string res = "";

        for (int bits = 0; bits < size; bits++)
            if (i & (1 << bits))
                res += s[bits];

        result.push_back(res);
    }

    result.insert(result.begin(), "");
    sort(result.begin(), result.end());

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

    string input;
    vector<string> result;

    cin >> input;

    result = powerSet(input);

    for (auto &element : result)
        cout << element << '\t';

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int maxOccuredInteger(vec &left, vec &right, int maxx)
{
    int size = left.size(); // since both arrays will be of same size
    vec prefix(maxx + 2, 0);
    for (int i = 0; i < size; i++)
    {
        int start = min(left[i], right[i]), end = max(left[i], right[i]);

        prefix[start] += 1;
        if (end + 1 <= maxx)
            prefix[end + 1] -= 1;
    }

    int maxCount = prefix[0], maxOccurenceIndex = 0;

    for (int i = 1; i <= maxx; i++)
    {
        prefix[i] += prefix[i - 1];
        if (prefix[i] > maxCount)
        {
            maxCount = prefix[i];
            maxOccurenceIndex = i;
        }
    }

    return maxOccurenceIndex;
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

    int size, element, maxx;
    vec left, right;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, left.push_back(element);

    for (int i = 0; i < size; i++)
        cin >> element, right.push_back(element);

    cin >> maxx;

    cout << maxOccuredInteger(left, right, maxx) << endl;

    return 0;
}
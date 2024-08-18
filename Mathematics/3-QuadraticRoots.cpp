#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

void printVector(vector<int> &arr)
{
    cout << endl;
    for (auto &element : arr)
        cout << element << '\t';
    cout << endl;
}

vector<int> quadraticRoots(int a, int b, int c)
{
    vector<int> roots;
    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        roots.push_back(-1);
        return roots;
    }

    double rootA = (-b + sqrt(d)) / 2 * a,
           rootB = (-b - sqrt(d)) / 2 * a;
    roots.push_back(max(rootA, rootB));
    roots.push_back(min(rootA, rootB));

    return roots;
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

    int a, b, c;

    vector<int> roots;

    cin >> a >> b >> c;

    roots = quadraticRoots(a, b, c);

    printVector(roots);

    return 0;
}
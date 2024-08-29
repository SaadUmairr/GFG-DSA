#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string> result;

void possibleWords(int start, vector<int> number, map<int, string> &phoneKeys, string temp, int size)
{
    if (start >= size)
    {
        result.push_back(temp);
    }
    string str = phoneKeys[number[start]];

    for (int i = 0; i < str.size(); i++)
    {
        temp.push_back(str[i]);
        possibleWords(start + 1, number, phoneKeys, temp, size);
        temp.pop_back();
    }
}

vector<string> phoneCharacters(vector<int> numbers)
{
    map<int, string> phoneKeys = {{1, ""}, {2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};

    if (numbers.size() == 0)
        return result;

    string temp = "";

    possibleWords(0, numbers, phoneKeys, temp, numbers.size());
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

    int size, el;
    vector<int> numbers;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> el, numbers.push_back(el);

    phoneCharacters(numbers);

    for (auto &str : result)
        cout << str << '\t';

    return 0;
}
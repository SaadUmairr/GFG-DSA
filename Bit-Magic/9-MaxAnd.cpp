#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAnd(vector<int> &arr)
{
    int result = 0;
    int count;

    for (int bit = 31; bit >= 0; bit--)
    {
        int mask = result | (1 << bit);
        count = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            if ((arr[i] & mask) == mask)
                count++;
        }

        if (count >= 2)
            result = mask;
    }

    return result;
}

int main()
{
    system("cls");
    vector<int> arr;
    int size, element;

    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> element, arr.push_back(element);

    cout << maxAnd(arr) << endl;

    return 0;
}

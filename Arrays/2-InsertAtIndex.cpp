#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void insertAtIndex(int arr[], int size, int index, int element)
{
    if (index < 0 && index > size)
        return;

    int temp = arr[index];

    for (int i = size - 1; i >= index; i--)
        arr[i] = arr[i - 1];

    arr[index] = element;
    arr[index + 1] = temp;
}

int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int *arr, size, index, element;
    cin >> size;

    arr = new int[size];

    for (int i = 0; i < size - 1; i++)
        cin >> arr[i];

    cin >> index >> element;

    insertAtIndex(arr, size, index, element);

    for (int i = 0; i < size; i++)
        cout << arr[i] << '\t';

    return 0;
}
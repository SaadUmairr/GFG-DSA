#include <iostream>
using namespace std;

void insertAtEnd(int arr[], int size, int element)
{
    arr[size - 1] = element;
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
    int *arr, size, element;
    cin >> size;

    arr = new int[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> element;

    insertAtEnd(arr, size, element);

    for (int i = 0; i < size; i++)
        cout << arr[i] << '\t';

    return 0;
}
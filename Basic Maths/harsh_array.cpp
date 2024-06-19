#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = *max_element(arr, arr + n);
    int hash[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}
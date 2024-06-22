#include <iostream>
#include <vector>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= arr[pivot])
            i++;
        while (arr[j] > arr[pivot])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[pivot]);
    return j;
}

void QuickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int loc = partition(arr, low, high);
    QuickSort(arr, low, loc - 1);
    QuickSort(arr, loc + 1, high);
}

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
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    vector<int> v;
    while (i <= mid && j <= high){
        if (arr[i] <= arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid){
        v.push_back(arr[i]);
        i++;
    }
    while (j <= high){
        v.push_back(arr[j]);
        j++;
    }
    for (int k = low; k <= high; k++){
        arr[k] = v[k - low];
    }
}

void MergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
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
    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
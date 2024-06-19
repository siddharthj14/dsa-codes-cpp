#include <iostream>
#include <algorithm>
#include <map>
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
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;;
    }

    return 0;
}
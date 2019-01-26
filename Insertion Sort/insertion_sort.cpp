#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,j;
    for(int i = 1;i < n;i++)
    {
        int k = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > k)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}
void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       cout << arr[i] << " ";
   cout << endl;
}

int main()
{
    int t;
    cout << "Enter array size"<<endl;
    cin >> t;
    cout << "Enter value "<<endl;
    int arr[t];
    for(int i = 0;i<t;i++)
        cin >> arr[i];
    insertion_sort(arr, t);
    printArray(arr, t);

    return 0;
}

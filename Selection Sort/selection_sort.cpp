#include<bits/stdc++.h>
using namespace std;

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int Array[],int n)
{
    for(int i = 0;i <n-1;i++)
    {
        int Min = i;
        for(int j=i +1;j<n;j++)
        {
            if(Array[j] < Array[Min])
                Min = j;
        }
        Swap(&Array[Min],&Array[i]);
    }

}
void printArray(int arr[],int n)
{
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cout << "Enter array Size" << endl;
    cin >> t;
    int arr[t];
    for(int i = 0;i < t;i++)
        cin >> arr[i];
    cout << "Before sorted "<<endl;
    printArray(arr,t);
    selection_sort(arr,t);
    cout << "After Sorted"<<endl;
    printArray(arr,t);

}

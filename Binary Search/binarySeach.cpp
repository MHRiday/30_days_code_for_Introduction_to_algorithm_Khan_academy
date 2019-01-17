#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i = 0;i < n;i++)
        cout << arr[i] << " ";
    cout <<endl;
}
int binarySearch(int arr[],int value,int Size)
{
    int Min = 0,Max = Size - 1;
    while(Min <= Max)
    {
        int mid = (Min + Max) / 2;
        if(arr[mid] == value)
            return mid;
        else if(arr[mid] < value)
            Min = mid + 1;
        else Max = mid - 1;
    }

    return -1;
}

int main()
{
    int Size,value;
    cout << "Enter array Size : "<<endl;
    cin >> Size;
    cout << "Enter target value : "<<endl;
    cin >> value;
    int arr[Size];
    cout << "Enter array  value : "<<endl;
    for(int i = 0;i < Size;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + Size); //for sorting we used build in function!
    printArray(arr,Size);
    int index = binarySearch(arr,value,Size);
    if(index == -1) cout << "Value isn't present at array" <<endl;
    else cout << "Value is present at index number :" <<index <<endl;

}

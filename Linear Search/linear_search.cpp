#include<bits/stdc++.h>
using namespace std;

// In linear search we have a array and a target value. We will find out the target value is in the array or not.
//If it is in the array it will print the index number otherwise it will print -1.

int linearSearch(int arr[],int targetValue,int sizeOfArray)
{
    for(int i = 0;i < sizeOfArray;i++)
    {
        if(arr[i] == targetValue)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter size of the Array: " <<endl;
    cin >> n;
    cout << "Enter a number : " <<endl;
    int x;
    cin >> x;
    int arr[n];
    cout << "Enter a array list : " <<endl;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int index = linearSearch(arr,x,sizeOfArray);
    if(index == -1)  cout << "NUmber isn't present at array" <<endl;
    else cout << "Number is present at index number " << index <<endl;
    return 0;

}

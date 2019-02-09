#include<bits/stdc++.h>
using namespace std;
#include<limits>
int INF = numeric_limits<int>::max();

void Merge(int A[],int p,int q,int r)
{
    int n1,n2,i,j,k;
    //
    n1 = q - p+1;
    n2 = r - q;
    int L[n1 + 1],R[n2 + 1];
    for(int i = 1;i <= n1;i++)
    {
        L[i] = A[p + i - 1];
    }
    for(int j = 1;j <= n2;j++)
    {
        R[j] = A[q + j];
    }

    L[n1 + 1] = INF;
    R[n2 + 1] = INF;
    i = 1;
    j = 1;

    for(k = p;k <= r;k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }


}

void MergeSort(int A[],int p,int r)
{
    int q = (p+r) / 2;
    if(p < r)
    {
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << A[i] <<endl;
}

int main()
{
    int A[] = {2,3,4,5,2,3,7,3,22,633,67,22,868,9643,43,412,11,1};
    int p = 0;
    int r = sizeof(A)/sizeof(A[0]);
    cout << "Given array is " <<endl;
    printArray(A, r);

    MergeSort(A, 0, r - 1);

    cout <<"Sorted array is  "<<endl;
    printArray(A, r);
    return 0;
}

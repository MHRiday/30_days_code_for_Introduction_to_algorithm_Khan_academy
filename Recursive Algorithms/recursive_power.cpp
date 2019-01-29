#include<bits/stdc++.h>
using namespace std;

int power(int base,int n)
{
    if(base == 0)
        return 0;
    else if(n < 0)
        return -1;
    else if(n == 0)
        return 1;
    else return (base * power(base,n - 1));
}

int main()
{
    int base,n;
    cout << "Enter base and power" <<endl;
    cin >> base >> n;
    int pow = power(base,n);
    cout << pow <<endl;
}

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 0;
    while( n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << " Enter a number" << endl;
    int n;
    cin >> n;
    cout << factorial(n) << endl;


}

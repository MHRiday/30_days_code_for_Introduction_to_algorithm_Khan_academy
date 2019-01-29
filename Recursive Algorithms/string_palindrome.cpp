#include<bits/stdc++.h>
using namespace std;
void isMelindrome(string word)
{
    int n = word.length();
    for(int i = 0,j=n-1;i<=j;i++,j--)
    {
        if(word[i] != word[j])
        {
            cout << word<< " isn't Melindrome" <<endl;
            return;
        }
    }
    cout <<word <<" String is Melindrome" <<endl;
}

int main()
{
    string word;
    cout << "Enter a word" <<endl;
    getline(cin , word);
    isMelindrome(word);
}

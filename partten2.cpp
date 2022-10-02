#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    i=1;
    char m =65;
    char f;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            f = m+n+j-i-1;
            cout<<f;
            j++;
        }
    i++;
    cout<<endl;
    }
return 0;
}
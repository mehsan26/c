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
        f=m+n-i;
        while(j<=i)
        {
            
            cout<<f;
            f++;
            j++;
        }
    i++;
    cout<<endl;
    }
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c;
    cin>>n;
    char m;
    m = 65;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<m;
            j++;
        }
        cout<<endl;
        i++;
        m++;
    }    
    return 0;
}
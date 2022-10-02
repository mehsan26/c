#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,s,m,p;
    cin>>n;
    s=n;
    i=1;
    while(i<=(n+n))
    {
        j=1;
        while(j<s)
        {
            cout<<" ";
        
            j++;
        }
        s--;
        k=1;
        p=1;
        while(k<=i)
        {
            if(k>m)
            {
                cout<<p;
                p--;
            }
            else
            {
                cout<<p;
                p++;
            }
            k++;
        }
        cout<<endl;
        m++;
        i=i+2;
    }    
    return 0;
}
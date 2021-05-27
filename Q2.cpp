#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=2*n;j++)
            {
                if(j<=i||j>2*n-i) cout<<"* ";
                else cout<<"  ";
            }
        }
        else{
                int d=2*n-i+1;
            for(j=1;j<=2*n;j++)
            {
                if(j<=d||j>=2*n-d+1) cout<<"* ";
                else cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

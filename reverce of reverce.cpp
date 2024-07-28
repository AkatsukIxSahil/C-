//print reverce of reverce
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<"  ";
        {
            for(int j=1;j<=i;j++)
            cout<<"* ";
        }
        cout<<endl;
    }
    }
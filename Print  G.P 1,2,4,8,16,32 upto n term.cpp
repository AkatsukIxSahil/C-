//Print  G.P 1,2,4,8,16,32 upto n terms.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int a=1;
     for(int i=1;i<=n;i++)
    {
        a = a*2;
    cout<<a<<" ";
    }
} 
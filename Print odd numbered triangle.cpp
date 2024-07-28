/*
Print 
1
1 3
1 3 5
1 3 5 7  method 01*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
        cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
    
}
//Method 02
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j=j+2)
        {
        cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
//Method 03
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a = 1;
        for(int j=1;j<=i;j++)
        cout<<a<<" ";
        a+=2;
    }
    cout<<endl;
}

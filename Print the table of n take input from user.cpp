//Print the table of n take input from user
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number: "<<endl;
    cin>>n>>m;
    for(int i=n;i<=m;i=i+n)
    {
        cout<<i<<endl;
    }

}
//Take 3 integers and print lowest of them
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c\n";
    cin>>a,b,c;
    if(a<b && a<c)
    {
        cout<<a;
    }
   else if(b<a && b<c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
}
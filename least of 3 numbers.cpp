//least of 3 numbers;
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c\n";
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
        cout<<a;
    }
    else if(b<a && b<c)
    {
        cout<<b;
    }
    else if(c<a && a<b)
    {
        cout<<c;
    }

}
#include<iostream>
using namespace std;
int sum(int x, int y)//pass by value
{
    return x+y;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
cout<<sum(a,b);
}
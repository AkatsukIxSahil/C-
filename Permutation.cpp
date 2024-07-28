#include<iostream>
using namespace std;
fact(int y)//creating a function which calculates factorial of a number
{
    int f = 1;
    for(int i = 1; i <= y; i++)
    {
        f = f * i;
    }
    return f;//After calculating factorial it returns the calculated value
}
int main()
{
    int n,r;
    cout<<"enter n and r\n";
    cin>>n>>r;
int a = fact(n);//function calling
int b = fact(n-r);//function calling
cout<<a/b<<endl;
}
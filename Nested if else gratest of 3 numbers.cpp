#include<iostream>
 using namespace std;
 int main()
 {
    int a,b,c;
    cout<<"enter a b c\n";
    cin>>a>>b>>c;
    if(a>b)
    {
      if(a>c)
      {
         cout<<a<<"a is gratest\n";
      }
      else
      {
         cout<<c<<"c is gratest\n";
      }
    }
    else
    {
      if(b>c)
      {
         cout<<b<<"b is gratest\n";
      }
      else 
      {
         cout<<c<<"c is gratest";
      }
 }
 }
//If ages of A, B, C are input determine youngest
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b,c\n";
    cin>>a>>b>>c;
    if(a<b && a<c)
   {
    cout<<a<<"\n a is youngest";
   }
   else if(b<a && b<c)
   {
    cout<<b<<"\n b is youngest";
   }
   else{
    cout<<c<<"\nc is youngest";
   }
     
}
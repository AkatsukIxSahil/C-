//sum by recursion
#include<iostream>
using namespace std;
void sum(int n, int s)
{
    if(n==0)
    {
         cout<<s<<endl;
         return;
    }
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;
    cout<<"enter n:\n";
    cin>>n;
    sum(n,0);
}
//check if number is divisible by 5 or 3 but not by 15
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    if(n%5==0 || n%3==0)
    {
        if(n%15!=0)
        {
            cout<<n;
        }
        else
        {
 cout<<"Not accurate number";
        }
        
    }
}
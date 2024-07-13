//Display G.P 3,12,48 up to n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
     int a=3;
    for(int i=3;i<=n;i++)
    {
        a = a*4;
     cout<<a<<endl;
    }
}
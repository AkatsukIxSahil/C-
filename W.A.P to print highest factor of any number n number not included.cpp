//W.A.P to print highest factor of any number n number not included.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int h = 1;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) h = i;
    }
        cout<<h<<endl;
    }

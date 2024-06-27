#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    if(n>=81 && n<=100)
    {
        cout<<"Very Good\n";
    }
   else if(n>=61 && n<=80)
    {
        cout<<"Good\n";
    }
   else if(n>=41 && n<=60)
    {
        cout<<"Avrage\n";
    }
    else if(n<40)
    {
        cout<<"Fail\n";
    }
}
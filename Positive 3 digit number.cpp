#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    if(n>=100 && n<=999) 
    {
        cout<<"+ive 3 digit number\n";
    }
    else (n<0 || n<100 && n>0 || n>999); //we can use or , and insted of || , &&
    {
        cout<<"not a +ive 3 digit number\n";
    }
}
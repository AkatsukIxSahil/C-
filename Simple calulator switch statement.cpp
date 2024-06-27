#include<iostream>
 using namespace std;
 int main()
 {
    int a,b;
    char op;
    cout<<"a\n";
    cout<<"op\n"; 
    cout<<"b\n";
    cin>>a;
    cin>>op;
    cin>>b;
    switch(op)
    {
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
    default:
    cout<<"Invaild oprator or number\n";
 }
 }
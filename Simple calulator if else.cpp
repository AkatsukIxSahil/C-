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
    if(op=='+')
    {
        cout<<a+b;
    }
   else if(op=='/')
    {
        cout<<a/b;
    }
   else if(op=='-')
    {
        cout<<a-b;
    }
  else if(op=='*')
    {
        cout<<a*b;
    }
 }
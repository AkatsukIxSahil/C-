 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b,c;
    cout<<"enter a b c\n";
    cin>>a>>b>>c;
    if(a>b and a>c)
    {
        cout<<a<<"\na is gratest";
    }
    else if(b>a && b>c)
    {
        cout<<b<<"\nb is gratest";
    }
    else {
        cout<<c<<"\nc is gratest";
    }
 }
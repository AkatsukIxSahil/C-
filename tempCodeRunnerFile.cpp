//Check if the perimeter of rectangle > its area.
#include<iostream>
 using namespace std;
 int main()
 {
    int a,p,l,b;
    cout<<"enter l,b\n";
    cin>>l>>b;
    a = l*b;
    p = 2*(l+b);
    cout<<a<<"\narea is \n";
    cout<<p<<"\nperimeter is \n";
    if(a>p)
    {
        cout<<"\narea is gratest";
    }
    else if(p>a)
    {
        cout<<p<<"\np is gratest";
    }
    else {
        cout<<"\na = p";
    }
 }
//Check if Area of Rectangle is > its perimeter
#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter l and b";
    cin>>l>>b;
    int A=l*b;
    cout<<"Area is"<<A;
    int P=2*(l+b);
    cout<<"Perimeter is"<<P;
    if(A>P)
    {
        cout<<"Area is Grater than perimeter\n";
    }
    else
    {
        cout<<"less\n";
    }
}
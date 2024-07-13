//Print AP
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i=i+2)
    {
        cout<<i<<endl;
    }
}
/*Altarnate maths method
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
for(int i=1;i<=2*n;i=i+2)
{
cout<<i<<endl;
}
}
Note the program print up to A.P terms = n not upto n
e.g if n is 4 it will print first four terms of A.P not A.P upto 4*/
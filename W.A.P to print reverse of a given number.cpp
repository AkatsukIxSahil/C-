//W.A.P to print reverse of a given number
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enetr n: ";
cin>>n;
int r = 0;
while(n!=0)
{
    int lastdigit = n%10;
    r*=10;
    r+=lastdigit;
    n/=10;
}
cout<<r;
}
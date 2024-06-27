#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    if(n%5==0 || n%3==0)
{
    cout<<"divisible\n";
}
else
{
    cout<<"Not divisible\n";
}
}
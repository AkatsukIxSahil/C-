//1 to n only 1 parameter
#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0) return;//base case
    print(n-1);//call
    cout<<n<<endl;//work
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    print(n);
}
// 1 to n using 2nd parameter
#include<iostream>
using namespace std;
void print(int x, int n)
{
    if(x>n) return;//base case
    cout<<x<<endl;
    print(x+1,n);
}
int main()
{
    int n;
    cout<<"n\n";
    cin>>n;
    print(1,n);
} 
//Prime and composite
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n==1) cout<<"niter prime nor composite\n";
    else if(flag==true) cout<<n<<" is prime\n";
    else cout<<"composite\n";

}
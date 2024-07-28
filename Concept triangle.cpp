//Concept triangle
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of rows:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=n-i+1;j--)
        {
         cout<<j<<" ";
        }
        cout<<endl;
    }

}

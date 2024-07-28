#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter n,m\n";
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(i == 1 && j<=m )
           {
            cout<<"* ";
           }
           else if(i<=n && j==1 )
           {
            cout<<"* ";
           }
            else if(i==n)
            {
            cout<<"* ";
            }
        else if(j==m)
        {
            cout<<"* ";
        } 
            else
           {
            cout<<" ";
           }
            
           
        }
        cout<<endl;
    }
}
print the given pattern using c++
* * * * * *
*         *
*         *
* * * * * *
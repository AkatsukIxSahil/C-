//Continue statement
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
      if(i==8 || i==9)
      {
        continue;
      }
        cout<<i<<endl;
    }
}
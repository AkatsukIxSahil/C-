//Prog to print highst factor M1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int f = 1;
//     cout<<"enetr n :";
//     cin>>n;
//     for(int i=1;i<n;i++)
//     {
//         if(n%i==0)  f = i;
//     }
//     cout<<f<<endl;
//  }

//Prog to print highst factor M2
#include<iostream>
using namespace std;
int main()
{
    int n;
    int f = 1;
    cout<<"enetr n :";
    cin>>n;
    for(int i=n/2;i>=1;i--)
    {
        if(n%i==0)  f = i;
        break;
    }
    cout<<f<<endl;
 }


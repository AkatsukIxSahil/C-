//Check if number is prime or composite
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n; 
    bool m = true;
    for(int i=2;i=n/2;i++)
    {
        if(n%i==0){
    cout<<"composite :";
    break;
        }
        bool m = false;
        {
            cout<<"prime :";
            break;
        }
    }
    if(n==1)
    {
        cout<<"nither prime nor composite: ";
    }
}
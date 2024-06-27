//Profit And Loss
#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"enter cp and sp\n";
    cin>>cp>>sp;
    if(sp>cp)
    {
        cout<<"profit\n"<<sp-cp;
    }
    else if(cp>sp)
    {
        cout<<"loss\n"<<cp-sp;
    }
    else
    {
        cout<<"no profit no loss\n";
    }
}
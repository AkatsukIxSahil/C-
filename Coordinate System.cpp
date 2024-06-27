//Coordinate System
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a,b";
    cin>>a>>b;
    if(a>0 && b==0)
    {
        cout<<"Point on +ive X-axis";
    }
   else if(b==0 && a<0)
     {
         cout<<"Point on -ive X-axis";
     }
    else if(a==0 && b>0)
     {
         cout<<"Point on +ive Y-axis";
     }
     else if(a==0 && b<0)
     {
         cout<<"Point on -ive Y-axis";
     }
     else if(a>0 && b>0)
     {
         cout<<"Point in 1st Quadrant";
     }
     else if(a<0 && b>0)
     {
         cout<<"Point in 2nd Quadrant";
     }
     else if(a<0 && b<0)
     {
         cout<<"Point in 3rd Quadrant";
     }
     else if(a>0 && b<0)
     {
         cout<<"Poin in 4th Quadrant";
     }
          else if(a==0 && b==0)
    {
         cout<<"Point on Origin";
     }
 }
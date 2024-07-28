//Swap two numbers using functions
#include<iostream>
using namespace std;
void swap(int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x;
    int y;
    cout<<"enter x,y\n";
    cin>>x;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<x<<" "<<y<<endl;
}
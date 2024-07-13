//WPA to print sum of digits of given number
#include<iostream>
using namespace std;
int main()
{
      int n;
      cout<<"enter n: \n";
      cin>>n;
      int sum = 0;
      while(n!=0)
      {
        int lastdigit = n%10;
        n /= 10;
        sum +=lastdigit;
      }
      cout<<sum;
}

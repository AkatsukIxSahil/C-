 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b,c;
    cout<<"enter a b c\n";
    cin>>a>>b>>c;
    if(a+b>=c || a+c>=b || b+c>=a)
    {
        cout<<"Sides of triangle\n";
    }
    else
    {
        cout<<"Not sides of triangle\n";
    }
 }
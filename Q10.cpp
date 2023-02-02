#include<iostream>
using namespace std;
int main()
{
    int a[10],add;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Your Number=";
        cin>>a[i];
        cout<<endl;
    }
     for(int i=0;i<10;i++)
    {
        add=add+a[i];
    }
    cout<<"Sum Of All Elrment="<<add;
    return 0;
}
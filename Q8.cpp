#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10;
    cout<<"Before Swap"<<endl<<"a="<<a<<"   b="<<b<<endl;
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"After Swap"<<endl<<"a="<<a<<"   b="<<b;
    return 0;
}
//Addition and subtraction of two numbers using points
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,diff;
    cout<<"Enter number 01: ";
    cin>>a;
    cout<<"Enter number 02: ";
    cin>>b;
    int *aptr;
    int *bptr;
    aptr=&a;
    bptr=&b;
    sum=*aptr+*bptr;
    cout<<"Sum of two numbers is: "<<sum<<endl;
    diff=*aptr-*bptr;
    cout<<"Difference between the two numbers is: "<<diff;
}

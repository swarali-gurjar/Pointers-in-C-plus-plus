//Incrementation on pointers
#include<iostream>
using namespace std;
int main()
{
    int a=50;
    int *ptr;
    ptr=&a;
    cout<<"FLOAT"<<endl;
    cout<<"Address before increment:"<<ptr<<endl<<*ptr<<endl;
    ptr++;
    cout<<"Address after increment:"<<ptr<<endl<<*ptr<<endl;
    cout<<endl;
    cout<<"FLOAT";
    cout<<endl;
    float b=70.1f;
    float *bptr;
    bptr=&b;
    cout<<"Address before increment:"<<bptr<<endl<<*ptr<<endl;
    bptr++;
    cout<<"Address after increment:"<<bptr<<endl<<*ptr<<endl;
    cout<<endl;
    cout<<"DOUBLE";
    cout<<endl;

double c=23.34567;
    double *cptr;
    cptr=&c;
    cout<<"Address before increment:"<<cptr<<endl<<*ptr<<endl;
    cptr++;
    cout<<"Address after increment:"<<cptr<<endl<<*ptr<<endl;
    cout<<endl;
    cout<<endl;
   
}

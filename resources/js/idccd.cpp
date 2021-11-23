#include<iostream>
using namespace std;
int main(int argc,char** argv)
{
    cout<<sizeof(int)<<endl;
    int x=0x1000;
    x=x<<32;
    cout<<hex<<x<<endl;
    return 0;
}
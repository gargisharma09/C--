#include<iostream>
using namespace std;
 int main()
 {
    int principle,rate,time,SI;
    cout<<"enter principle:";
    cin>>principle;
    cout<<"enter rate";
    cin>>rate;
    cout<<"enter time";
    cin>>time;
    SI=(principle*rate*time)/100;
    cout<<"\n si is :" << SI; 
    return 0;
 }
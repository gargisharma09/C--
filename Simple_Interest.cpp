#include<iostream>
using namespace std;
 int main()
 {
    int principle,rate,time,SI;
    cout<<"Principle:";
    cin>>principle;
    cout<<"Rate: ";
    cin>>rate;
    cout<<"Time: ";
    cin>>time;
    SI=(principle*rate*time)/100;
    cout<<"\n SI is:" << SI; 
    return 0;
 }
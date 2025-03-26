 #include<iostream>
 using namespace std;
int main()
{
    double compound ,rate,time,principal;
    cout<<"enter principle:";
    cin>>principal;
    cout<<"enter time:";
    cin>>time;
    cout<<"enter rate:";
    cin>>rate;
    compound = principal((1+rate)time-1);
    cout<<"\ncompound int="<<compound;
    return 0;
}
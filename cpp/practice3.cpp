#include<iostream>
using namespace std;
struct  student 
{
    int rate,qty,amt,dis,b_amt,gst,net_bill;
};
int main() {
    struct student s1[3];

    for(int i=0;i<3;i++) {
        cout<<"enter rate:";
        cin>>s1[i].qty;
        cout<<"enter qty:";
        cin>>s1[i].qty;

        s1[i].amt=s1[i].rate*s1[i].qty;
        s1[i].dis=s1[i].amt*0.10;
        s1[i].b_amt=s1[i].amt-s1[i].dis;
        s1[i].net_bill=s1[i].b_amt*0.18;
        s1[i].net_bill=s1[i].b_amt+s1[i].gst;

        cout<<"rate qty amt dis b_amt gst net_bill\n";
        cout<<s1[i].rate,s1[i].qty,s1[i].amt,s1[i].dis,s1[i].b_amt,s1[i].gst,s1[i].net_bill;


    } 
    return 0;
}

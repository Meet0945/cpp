#include<iostream>
using namespace std;
int main(){
    int n,r=0,re;
    cout<<"Enter a value:";
    cin>>n;
    while(n!=0) {
        re=n%10;
        r=r*10+re;
        n/=10;
    }
    cout<<"revers number:\n"<<r;\
    return 0;
}
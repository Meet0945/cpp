#include<iostream>
using namespace std;
int main() {
    int n,f=1,s=1,next,c;
    cout<<"Enter a num:";
    cin>>n;
    cout<<"fibonacii series:\n";
    for(c=0;c<n;c++){
        if(c<=1)
        next = c;
        else {
            next=f+s;
            f=s;
            s=next;
        }
        cout<<next;
    }
    cout<<"\n";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char s1[25];
    char s2[30];
    char s3[50];

    cout<<"enter a s1:";
    cin>>s1;
    cout<<"enter a s2:";
    cin>>s2;

    for( i=0;s1[i]!='\0';i++) {
        s3[i]=s1[i];
    }
    for( j=0;s2[j]!='\0';j++) {
        s3[i]=s2[j];
       i++; 
}

    s3[i]='\0';
    cout<<s3;

    return 0;
}



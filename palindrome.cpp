#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[100],b[100];
    cout<<"Enter the string to check if it is a palindrome: ";
    cin>>a;
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    cout<<"Entered string is a palindrome ";
    else
    cout<<"Entered string is not a palindrome ";
    return 0;
}
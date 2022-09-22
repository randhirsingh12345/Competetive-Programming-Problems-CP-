/*1. Pallindrome Integer
Problem Statement
Given an integer x , return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.*/
#include<iostream>
#include<string.h>
using namespace std;
void check_Pallindrome ();
int main()
{
    int x,k,temp;
    cout<<"Checking palindrome without convert a integer into a string \n";
    cout<< "x= ";
    cin>>x;
    if(x<0)
    {
       cout<< "false";
        exit(0);
    }
    temp=x;
    while(x)
    {
        int r=x%10;
        k=10*k+r;
        x=x/10;
    }
    if(temp==k)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    check_Pallindrome();
    return 0;

}

void check_Pallindrome ()
{
    char str[10],s[10];
     cout<<"Checking palindrome by using convert a integer into a string \n";
    cout<<"x= " ;
    cin.ignore();
    cin.getline(str,10);
    strcpy(s,str);
    strrev(str);
    if((strcmp(str,s)==0))
       cout<< "true\n";
    else
       cout<<"false\n";

}


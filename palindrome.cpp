#include<iostream>
using namespace std;
int main()
{
    int num, temp, rem, reverse=0;
    cout<<"enter the number";
    cin>>num;
    temp=num;
    while(num !=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(temp==reverse)
       cout<<"palindrome number";
    else
        cout<<"not a palindrome number";

}
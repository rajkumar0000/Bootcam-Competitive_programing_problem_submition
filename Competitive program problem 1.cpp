/*  Given an integer  x , return  true  if  x  is palindrome integer.
    An integer is a palindrome when it reads the same backward as forward.
    For example,  121  is a palindrome while  123  is not.              */
#include<iostream>
using namespace std;
int palindrom(int);
int palindrom(int n)
{
    if(n<0)
        return -1;
    int original_num=n;
    int rem =0 , rev =0 ;

    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(original_num==rev)
        return 1;
    else
        return 0;
}
int main()
{
    int n=121;
    if(palindrom(n)==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}

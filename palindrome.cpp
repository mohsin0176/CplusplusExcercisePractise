#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int i,s,j;
    cin>>i;
    s=i;
    int arr[i];
    int tmp[i];
    for(i=0;i<=s;i++)
    {
        cin>>arr[i];
    }
    for(i=s;i>=0;i--)
    {
        tmp[5-i]=arr[i];
    }
    for(i=0;i<=s;i++)
    {
        cout<<tmp[i];
    }
    if(tmp!=arr)
    {
        cout<<"Number is Palindrome"<<endl;
    }
    else
    {
        cout<<"Number is not Palindrome"<<endl;
    }
    return 0;
}

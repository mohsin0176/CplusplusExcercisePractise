#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{
    int i;
    int j;
    int s;
    int sh;
    cout<<"Enter Size of Array:"<<endl;
    cin>>s;
    cout<<"Enter Number Of Position to be Shifted:"<<endl;
    cin>>sh;
    int arr[s];
    int tmp[s];
    cout<<"Enter Elements of Array:"<<endl;
    for(i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered Array:"<<endl;
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    //cout<<"Shifting Start:"<<endl;
    for(i=(s-sh);i<s;i++)
    {
        tmp[i-3]=arr[i];
        if(i=(s-1))
        {
            for(j=0;j<=sh;j++)
            {
                tmp[j+2]=arr[j];
            }
        }

    }
    cout<<"Shifted Array:"<<endl;
    for(i=0;i<s;i++)
    {
        cout<<tmp[i]<<"\t";
    }
    return 0;
}

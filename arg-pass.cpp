#include<bits/stdc++.h>
using namespace std;


void display(char c='*',int count=5)
{
    cout<<c<<endl<<count<<endl;
}

int main()
{
    int count=50;
    display();
    display('#');
    display('#',count);
    return 0;
}

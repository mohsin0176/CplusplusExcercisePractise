 #include<bits/stdc++.h>
 #include<iostream>
 using namespace std;

 int &fun(int &n)
 {
     return n;
 }
int main()
{
    int a=10;
    cout<<fun(a);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "abcd";
    string s2 = "cdab";
    string temp = s1+s2;
    temp.substr(s2.begin(), s2.end());
    return 0;

}
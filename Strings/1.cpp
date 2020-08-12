#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   //cin >> s;
   getline(cin, s);
    for(int i = s.length(); i>= 0; i--)
        cout << s[i]<<endl;
   return 0;
}
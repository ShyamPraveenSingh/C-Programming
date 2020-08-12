#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string n = s;
    reverse(n.begin(), n.end());
    if(n == s)
        cout << "yes" << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "0011100110";
    int a=0,b=0,c=0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == '0')   a++;
        if(str[i] == '1')   b++;
        if(a == b)  c++;
    }
    cout << c << endl;

    return 0;
}
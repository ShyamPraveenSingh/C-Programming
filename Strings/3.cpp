#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "shyamm";
    int count;
    for(int i = 0; i<strlen(s); i++){
        count = 1;
        for (int j = i+1; i < strlen(s); j++){
            if(s[i]==s[j] && s!=''){
                count++;
                s[j] = '\0';
            }
        }
    }
    if(count>0 && s[i]!='0')
        cout << '\n' << s[i] << endl;

    return 0;
}
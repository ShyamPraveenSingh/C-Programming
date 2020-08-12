#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "axxxy";
    int count = 0;
    for(int i = 0; i<a.length(); i++){
        for(int j = 0; j<a.length(); j++){
            if(a[i]!=a[j] ){
                i++; j++;
            }
            if(a[i]==a[j]){
                count++; j++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
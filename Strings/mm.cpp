#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> f;
    first.insert({"Shyam", 21});
    first.insert({"Praveen", 41});
    first.insert({"Singh", 31});
    first.insert({"Sh", 20});
    map<string, int> :: iterator it;
    for(it=first.begin(); it!=first.end(); ++it){
        cout << it->first << it->second << '\n';
    }
    cout << first[1] << '\n';

    return 0;
}
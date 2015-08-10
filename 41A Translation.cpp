#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    while(cin>>s){
        string s1;
        cin>>s1;
        reverse(s.begin(),s.end());
        if(s==s1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

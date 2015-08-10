#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,g=0;
    cin>>n;
    string s,s1;
    while(n--){
        if(g!=0){
            cin>>s1;
            if(s1==s){
                g+=1;
            }
            else{
                g-=1;
            }
        }
        else{
            cin>>s;
            g=1;
        }
    }
    cout<<s<<endl;
    return 0;
}

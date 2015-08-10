#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4;
    while(cin>>a1>>a2>>a3>>a4){
        string s;
        cin>>s;
        int i,j,k,l;
        k=0;
        l=s.length();
        for(i=0;i<l;i++){
            if(s[i]=='1'){
                k+=a1;
            }
            else if(s[i]=='2'){
                k+=a2;
            }
            else if(s[i]=='3'){
                k+=a3;
            }
            else if(s[i]=='4'){
                k+=a4;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}

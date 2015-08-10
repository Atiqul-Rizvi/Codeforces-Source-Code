#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[8];
    int i,j,k,l,m,n;
    for(i=0;i<8;i++){
        cin>>s[i];
    }
    m=n=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(s[i][j]>='A' && s[i][j]<='Z'){
                if(s[i][j]=='Q'){
                    m+=9;
                }
                if(s[i][j]=='R'){
                    m+=5;
                }
                if(s[i][j]=='B' || s[i][j]=='N'){
                    m+=3;
                }
                if(s[i][j]=='P'){
                    m+=1;
                }
            }
            if(s[i][j]>='a' && s[i][j]<='z'){
                if(s[i][j]=='q'){
                    n+=9;
                }
                if(s[i][j]=='r'){
                    n+=5;
                }
                if(s[i][j]=='b' || s[i][j]=='n'){
                    n+=3;
                }
                if(s[i][j]=='p'){
                    n+=1;
                }
            }
        }
    }
    if(m>n){
        cout<<"White"<<endl;
    }
    else if(m<n){
        cout<<"Black"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    return 0;
}

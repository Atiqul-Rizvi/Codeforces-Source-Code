#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    char a[3][10]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    while(cin>>c){
        string s,s2;
        cin>>s;
        int x,i,j,k,l;
        l=s.length();
        for(x=0;x<l;x++){
            for(i=0;i<3;i++){
                for(j=0;j<10;j++){
                    if(s[x]==a[i][j]){
                        if(c=='R'){
                            if(j==0){
                                s2+=a[i][j];
                                break;
                            }
                            else{
                                s2+=a[i][j-1];
                                break;
                            }
                        }
                        if(c=='L'){
                            if(j==9){
                                s2+=a[i][j];
                                break;
                            }
                            else{
                                s2+=a[i][j+1];
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}

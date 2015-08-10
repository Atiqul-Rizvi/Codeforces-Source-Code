#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int y;
    while(cin>>y){
        int i,j,k,l,m,n;
        for(i=y+1;;i++){
            n=i;
            string s;
            ostringstream c;
            c<<n;
            s=c.str();
            l=s.length();
            m=0;
            for(j=0;j<l;j++){
                for(k=j+1;k<l;k++){
                    if(s[j]==s[k]){
                        m=1;
                        break;
                    }
                }
                if(m==1){
                    break;
                }
            }
            if(m==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}

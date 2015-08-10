#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,k,l,f;
    while(getline(cin,s)){
        l=s.length();
        j=1;
        k=-1;
        f=0;
        for(i=0;i<l;i++){
            if(s[i]=='@'){
                k=i;
                if(j>1){
                    j=0;
                }
                else{
                    f=1;
                }
            }
            else{
                j++;
            }
        }
        if((k==-1)||(k==(l-1))||(f==1)){
            cout<<"No solution"<<endl;
        }
        else{
            for(i=0;i<l;i++){
                cout<<s[i];
                if(s[i]=='@'){
                    cout<<s[i+1];
                    if(i!=k){
                        cout<<',';
                    }
                    i++;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

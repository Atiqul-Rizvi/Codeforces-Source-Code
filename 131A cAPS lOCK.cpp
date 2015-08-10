#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,s1;
    int i,j,k,l,f;
    while(cin>>s){
        s1=s;
        l=s1.length();
        for(i=0;i<1;i++){
            if(s1[i]>='A'&&s1[i]<='Z'){
                f=0;
                s1[i]=tolower(s1[i]);
                for(j=1;j<l;j++){
                    if(s1[j]>='A'&&s1[j]<='Z'){
                        s1[j]=tolower(s1[j]);
                    }
                    else{
                        f=1;
                    }
                }
            }
            else{
                f=0;
                s1[i]=toupper(s1[i]);
                for(j=1;j<l;j++){
                    if(s1[j]>='A'&&s1[j]<='Z'){
                        s1[j]=tolower(s1[j]);
                    }
                    else{
                        f=1;
                    }
                }
            }
        }
        if(f==1){
            cout<<s<<endl;
        }
        else{
            cout<<s1<<endl;
        }
    }
    return 0;
}

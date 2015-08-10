#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1[1000],s2[1000];
    string s3[1000],s4[1000];
    int i,j,k,l;
    cin>>l;
    for(i=0;i<l;i++){
        cin>>s3[i]>>s4[i];
        if(i!=0){
            for(j=i-1;j>=0;j--){
                if(s3[i]==s4[j]){
                    s4[j]=s4[i];
                    s1[i]=s3[i];
                    k++;
                    s2[i]=s4[j];
                }
            }
        }
    }
    k=0;
    for(i=0;i<l;i++){
        if(s3[i]!=s1[i]&&s2[i]!=s4[i]){
            k++;
        }
    }
    cout<<k<<endl;
    for(i=0;i<l;i++){
        if(s3[i]!=s1[i]&&s2[i]!=s4[i]){
            cout<<s3[i]<<" "<<s4[i]<<endl;
        }
    }
    return 0;
}

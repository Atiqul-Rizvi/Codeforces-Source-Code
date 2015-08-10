#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    while(cin>>s1){
        cin>>s2;
        cin>>s3;
        int a[26]={0},b[26]={0};
        int i,j,k,l1,l2,l3;
        l1=s1.length();
        l2=s2.length();
        l3=s3.length();
        for(i=0;i<l1;i++){
            k=s1[i]-65;
            if(k>=0 && k<26){
                a[k]++;
            }
        }
        for(i=0;i<l2;i++){
            k=s2[i]-65;
            if(k>=0 && k<26){
                a[k]++;
            }
        }
        for(i=0;i<l3;i++){
            k=s3[i]-65;
            if(k>=0 && k<26){
                b[k]++;
            }
        }
        j=0;
        for(i=0;i<26;i++){
            if(a[i]!=b[i]){
                j=1;
                break;
            }
        }
        if(j==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

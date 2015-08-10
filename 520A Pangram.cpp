#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    while(cin>>a){
        string s;
        cin>>s;
        int ara[26];
        for(int i=0;i<26;i++){
            ara[i]=0;
        }
        c=s.length();
        for(int i=0;i<c;i++){
            if(s[i]=='a' || s[i]=='A'){
                ara[0]=1;
            }
            if(s[i]=='b' || s[i]=='B'){
                ara[1]=1;
            }
            if(s[i]=='c' || s[i]=='C'){
                ara[2]=1;
            }
            if(s[i]=='d' || s[i]=='D'){
                ara[3]=1;
            }
            if(s[i]=='e' || s[i]=='E'){
                ara[4]=1;
            }
            if(s[i]=='f' || s[i]=='F'){
                ara[5]=1;
            }
            if(s[i]=='g' || s[i]=='G'){
                ara[6]=1;
            }
            if(s[i]=='h' || s[i]=='H'){
                ara[7]=1;
            }
            if(s[i]=='i' || s[i]=='I'){
                ara[8]=1;
            }
            if(s[i]=='j' || s[i]=='J'){
                ara[9]=1;
            }
            if(s[i]=='k' || s[i]=='K'){
                ara[10]=1;
            }
            if(s[i]=='l' || s[i]=='L'){
                ara[11]=1;
            }
            if(s[i]=='m' || s[i]=='M'){
                ara[12]=1;
            }
            if(s[i]=='n' || s[i]=='N'){
                ara[13]=1;
            }
            if(s[i]=='o' || s[i]=='O'){
                ara[14]=1;
            }
            if(s[i]=='p' || s[i]=='P'){
                ara[15]=1;
            }
            if(s[i]=='q' || s[i]=='Q'){
                ara[16]=1;
            }
            if(s[i]=='r' || s[i]=='R'){
                ara[17]=1;
            }
            if(s[i]=='s' || s[i]=='S'){
                ara[18]=1;
            }
            if(s[i]=='t' || s[i]=='T'){
                ara[19]=1;
            }
            if(s[i]=='u' || s[i]=='U'){
                ara[20]=1;
            }
            if(s[i]=='v' || s[i]=='V'){
                ara[21]=1;
            }
            if(s[i]=='w' || s[i]=='W'){
                ara[22]=1;
            }
            if(s[i]=='x' || s[i]=='X'){
                ara[23]=1;
            }
            if(s[i]=='y' || s[i]=='Y'){
                ara[24]=1;
            }
            if(s[i]=='z' || s[i]=='Z'){
                ara[25]=1;
            }
        }
        for(int k=0;k<26;k++){
            if(ara[k]==1){
                e=1;
            }
            else{
                e=0;
                break;
            }
        }
        if(e==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define a0 "0\n";
#define a1 "0 1 0\n";
#define a2 "0 1 2 1 0\n";
#define a3 "0 1 2 3 2 1 0\n";
#define a4 "0 1 2 3 4 3 2 1 0\n";
#define a5 "0 1 2 3 4 5 4 3 2 1 0\n";
#define a6 "0 1 2 3 4 5 6 5 4 3 2 1 0\n";
#define a7 "0 1 2 3 4 5 6 7 6 5 4 3 2 1 0\n";
#define a8 "0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0\n";
#define a9 "0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0\n";
int main()
{
    int n;
    while(cin>>n){
        int i,j,k,l;
        k=n*2;
        for(i=0;i<=n;i++){
            for(j=0;j<k;j++){
                cout<<' ';
            }
            if(i==0){ cout<<a0;}
            else if(i==1){ cout<<a1;}
            else if(i==2){ cout<<a2;}
            else if(i==3){ cout<<a3;}
            else if(i==4){ cout<<a4;}
            else if(i==5){ cout<<a5;}
            else if(i==6){ cout<<a6;}
            else if(i==7){ cout<<a7;}
            else if(i==8){ cout<<a8;}
            else if(i==9){ cout<<a9;}
            k-=2;
        }
        k=2;
        i-=2;
        for(l=i;l>=0;l--){
            for(j=0;j<k;j++){
                cout<<' ';
            }
            if(l==0){ cout<<a0;}
            else if(l==1){ cout<<a1;}
            else if(l==2){ cout<<a2;}
            else if(l==3){ cout<<a3;}
            else if(l==4){ cout<<a4;}
            else if(l==5){ cout<<a5;}
            else if(l==6){ cout<<a6;}
            else if(l==7){ cout<<a7;}
            else if(l==8){ cout<<a8;}
            else if(l==9){ cout<<a9;}
            k+=2;
        }
    }
    return 0;
}

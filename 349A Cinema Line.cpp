#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int a[n];
        int i,j,k,l,a100=0,a50=0,a25=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]!=25){
            cout<<"NO"<<endl;
        }
        else{
            j=0;
            for(i=0;i<n;i++){
                if(a[i]==25){
                    a25++;
                }
                if(a[i]==50){
                    a50++;
                }
                if(a[i]==100){
                    a100++;
                }
                if(a[i]!=25){
                    if(a[i]==50){
                        if(a25>=1){
                            a25--;
                        }
                        else{
                            cout<<"NO"<<endl;
                            j=1;
                            break;
                        }
                    }
                    else{
                        if((a50>=1 && a25>=1)||(a25>=3)){
                            if(a50>=1 && a25>=1){
                                a50--;
                                a25--;
                            }
                            else{
                                a25-=3;
                            }
                        }
                        else{
                            cout<<"NO"<<endl;
                            j=1;
                            break;
                        }
                    }
                }
            }
            if(j==0){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}

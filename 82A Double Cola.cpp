#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int i,j,k,l;
    while(cin>>l){
        j=1;
        while(l>=1){
            k=0;
            for(i=0;i<5;i++){
                l-=j;
                if(l<=0){
                    break;
                }
                k++;
            }
            j*=2;
        }
        cout<<s[k]<<endl;
    }
    return 0;
}

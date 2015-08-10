#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i,j,k;
    while(cin>>s){
        k=s.length();
        j=0;
        for(i=0;i<k;i++){
            if((s[i]=='H')||(s[i]=='Q')||(s[i]=='9')){
                j=1;
                break;
            }
        }
        if(j==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

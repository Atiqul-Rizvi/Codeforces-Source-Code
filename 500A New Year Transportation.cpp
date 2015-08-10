#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,t,i,j,k,l;
    int a[30000];
    while(cin>>n>>t){
        for(i=1;i<n;i++){
            cin>>a[i];
        }
        l=0;
        for(i=1;i<n;i++){
            j=a[i]+(i);
            if(j==t){
                cout<<"YES"<<endl;
                l=1;
                break;
            }
            i=j-1;
        }
        if(l==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

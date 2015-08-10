#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,g,i,j,k,l;
    while(cin>>a>>b>>s){
        g=(int)(abs(a));
        i=(int)(abs(b));
        if(g+i>s){
            cout<<"No"<<endl;
        }
        else{
            if(((g+i)-s)%2==0){
                cout<<"Yes"<<endl;
            }
            else if(((g+i)-s)%2!=0){
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

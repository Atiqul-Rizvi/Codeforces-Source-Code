#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k,l;
    while(cin>>a>>b>>c>>d){
        i=max((3*a/10),(a-((a/250)*c)));
        j=max((3*b/10),(b-((b/250)*d)));
        if(i>j){
            cout<<"Misha"<<endl;
        }
        else if(j>i){
            cout<<"Vasya"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}

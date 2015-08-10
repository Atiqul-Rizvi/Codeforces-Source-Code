#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    while(cin>>x1>>y1>>x2>>y2){
        int x3,y3;
        x3=abs(x1-x2);
        y3=abs(y1-y2);
        if((x1!=x2) && (y1!=y2) && (x3!=y3)){
            cout<<"-1"<<endl;
        }
        else if(x1==x2){
            cout<<(x1+y3)<<' '<<y1<<' '<<(x2+y3)<<' '<<y2<<endl;
        }
        else if(y1==y2){
            cout<<x1<<' '<<(y1+x3)<<' '<<x2<<' '<<(y2+x3)<<endl;
        }
        else{
            cout<<x1<<' '<<y2<<' '<<x2<<' '<<y1<<endl;
        }
    }
    return 0;
}

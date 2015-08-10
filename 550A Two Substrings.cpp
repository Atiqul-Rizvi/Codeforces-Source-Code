#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<ctime>
#include<algorithm>
#include<vector>
#define read() freopen("input.txt","r",stdin)
#define out() freopen("output.txt","w",stdout)
#define mem(a) memset(a, 0, sizeof(a))
#define maxx 70005
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        int i,j,k,l;
        i=s.find("AB");
        j=s.rfind("AB");
        k=s.find("BA");
        l=s.rfind("BA");
        if((i!=-1 && i+1<l) || (k!=-1 && k+1<j)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

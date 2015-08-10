#include<iostream>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    string s,s1;
    int i,j,k,l;
    while(cin>>s){
        s1=s;
        l=s1.length();
        j=k=0;
        for(i=0;i<l;i++){
            if(s[i]>='a'&&s[i]<='z'){
                j++;
            }
            else{
                k++;
            }
        }
        if(j>k){
            transform(s1.begin(),s1.end(),s1.begin(),::tolower);
            cout<<s1<<endl;
        }
        else if(j<k){
            transform(s1.begin(),s1.end(),s1.begin(),::toupper);
            cout<<s1<<endl;
        }
        else if(j==k){
            transform(s1.begin(),s1.end(),s1.begin(),::tolower);
            cout<<s1<<endl;
        }
    }
    return 0;
}

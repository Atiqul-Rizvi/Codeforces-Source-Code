#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i,j,k,l;
    while(getline(cin,s)){
        l=s.length();
        k=0;
        for(i=0;i<l;i++){
            if(s[i]==','){
                cout<<',';
                if(i!=l-1){
                    cout<<' ';
                }
                k=1;
            }
            else if(s[i]=='.'){
                if(k==3||k==2){
                    cout<<' ';
                }
                cout<<"...";
                i+=2;
                k=2;
            }
            else if(s[i]>='0'&&s[i]<='9'){
                if(k==3){
                    cout<<' ';
                }
                while(s[i]>='0'&&s[i]<='9'){
                    cout<<s[i];
                    i++;
                }
                i--;
                k=3;
            }
        }
        cout<<endl;
    }
    return 0;
}

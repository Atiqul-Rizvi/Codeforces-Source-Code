#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s,t="YES";
	int i,j;
	for(i=0;i<8;i++){
		cin >> s;
		for(j=0;j<7;j++){
			if(s[j+1]==s[j]){
                t="NO";
                break;
            }
		}
		if(t=="NO"){
            break;
		}
	}
	cout<<t;
	return 0;
}

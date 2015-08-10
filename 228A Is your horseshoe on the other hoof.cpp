#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(4);
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        cout<<(4-a.size())<<endl;
    }
    return 0;
}

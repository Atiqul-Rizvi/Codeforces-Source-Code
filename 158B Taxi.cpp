#include<iostream>
using namespace std;
int main()
{
    int n,a[100000],i,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    b=c=d=e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1){
            b++;
        }
        if(a[i]==2){
            c++;
        }
        if(a[i]==3){
            d++;
        }
        if(a[i]==4){
            e++;
        }
    }
    f=e;
    if(d>b){
        f+=d;
        g=-1;
    }
    if(b>=d){
        f+=d;
        g=b-d;
    }
    h=(2*c)%4;
    if(h==0){
        f+=(c/2);
    }
    else{
        f+=((c+1)/2);
    }
    if(g!=-1){
        g-=h;
        f+=(g+3)/4;
    }
    cout<<f;
    return 0;
}

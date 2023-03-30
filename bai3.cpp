#include<bits/stdc++.h>
using namespace std;
int fibo(int a){
    if(a<=3) return 1;
    else{
    int x=1,y=1;
    while(x<a){
        int k=x+y;
                  y=x;
                  x=k;
    }if(x==a) return 1;
    else return 0;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<=n;i++){
            if(fibo((int)a[i])==1) cout<<a[i]<<" ";

        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int nt(int a){
    if(a<2) return 0;
    else for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return 0;
        
    }return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,j=-1;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(nt(i)==1&&nt(n-i)==1){
            j=i;
            break;
        }
    }if(j==-1) cout<<j<<endl;
    else cout<<j<<" "<<n-j<<endl;
}
}
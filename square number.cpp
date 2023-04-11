#include<bits/stdc++.h>
using namespace std;
int main(){

        int a,b; cin>>a>>b;
        int m=sqrt(a),k=0;
        if(m*m==a){
            while(m*m<=b){
                k+=m*m;
                m++;
            }
        }
        else{
            int n=m+1;
            while(n*n<=b){
                k+=n*n;
                n++;
            }

    }
            cout<<k<<endl;
    
    return 0;
}
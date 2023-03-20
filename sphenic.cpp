#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long n,s=1;
        int a[20],j=0;
        cin>>n;
        int a=n;
        for (int i = 2; i <= n/2; i++)
        {
           if(n%i==0){
            a[j]=i;
            j++;
            n/=i;
           }else ;
        }
        for (int k = 0; k <= j; k++)
        {
            s*=int(a[k]);
        }
        if( s==a) cout<<1;
        else cout<<0;
    }
    
}
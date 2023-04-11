#include<bits/stdc++.h>
using namespace std;
int main(){
        long long a;
        cin>>a;
        long long s=0;
        while(a!=0){
            s=s*10+a%10;
            a/=10;

        }
        cout<<s;

        return 0;
}
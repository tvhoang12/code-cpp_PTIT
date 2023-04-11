#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	if(a%b==0) return b;
	else return ucln(b,a%b);
}
long long nb(long long a,long long x){
	long long s=0;
	while(x!=0){
          s=s*10+a;
		  x-=1;
	}

	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		cout<<ucln(nb(a,x),nb(a,y));
		cout<<endl;
	    
	}
}
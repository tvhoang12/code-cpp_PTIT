#include <bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	if(a%b>0) return ucln(b,a%b);

	else return b; 
}
int bcnn(int a,int b){

	return a*b/ucln(a,b);
}
int dem(int n){
	int count=0;
	while(n!=0){
      count++;
	  n/=10;
	}
	
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){ 
		int x,y,z,t;
		cin>>x>>y>>z>>t;
		int k=bcnn(x,y),
		    m=bcnn(y,z),
			l=bcnn(k,m);
			for(int i=1;i)

	}
}
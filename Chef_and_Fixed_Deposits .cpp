#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,x;
	   bool flag=false;
	   cin>>n>>x;
	   int a[n];
	   for(int i=0;i<n;i++){
	         cin>>a[i];
	   } 
	   sort(a,a+n,greater<>());
	   int sum=0;
	   int i;
	   for(i=0;i<n;i++){
	         sum+=a[i];
	         if(sum>=x){
	               flag=true;
	               break;
	         }
	   }
	   if(flag){
	         cout<<i+1<<endl;
	   }
	   else{
	         cout<<"-1"<<endl;
	   }
	}
	return 0;
}

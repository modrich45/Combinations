#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int factorial(int n,int k){
	if(k==0 || k==n){
		return 1;
	}else{
		return factorial(n-1,k-1)+factorial(n-1,k);
	}
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,k;
cin>>n>>k;
int ans=factorial(n,k);
cout<<ans;

return 0;
}


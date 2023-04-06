#include <iostream>
using namespace std;

int main(){
	long long p,q,r,n,t;

	
	cin>>p>>q>>r;
	cin>>n;
	
	for(long long i = 0; i < n; i++){
		cin>>t;
		if(t % p == 0 && t % q == 0 && t % r == 0){
			printf("YA\n");
		}else{
			printf("TIDAK\n");
		}
	}
	
}

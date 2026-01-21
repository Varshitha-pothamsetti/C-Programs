#include<bits/stdc++.h>
#define fast_io_ios_base::sync_with_stdio_(false);cin.tie(null)
#definr ll long long
using namespace std;
void printBinary(int n){
	int bits_count=log2(n); //8
	int mask =0b100000000;
	
	for(int i=bits_count;i>=0;i--){
		if((mask &n)>0){
			count<<1;
		}
		else
		{
			count<<0;
		}
		mak=mask>>1;
	}
}
int main(){
	int n=1;
	count<< (1 & 0) << endl;
	//or(1)
	count<<(1 | 0 ) <<endl;
	//xor(^)
	count<<(1 ^ 1)<<endl;
	
}

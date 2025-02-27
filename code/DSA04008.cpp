#include<bits/stdc++.h>

using namespace std;

int n, mod = 1e9+7;

void mul(long long a[2][2], long long tmp[2][2]){
	long long res[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			res[i][j] = 0;
			for(int k = 0; k < 2; k++){
				res[i][j] += a[i][k] * tmp[k][j] % mod;
				res[i][j] %= mod;
			}
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j ++) a[i][j] = res[i][j];
	}
}

void process(long long a[2][2]){
	long long ans[2][2];
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(i == j) ans[i][j] = 1;
			else ans[i][j] = 0;
		}
	}
	while(n){
		if(n % 2 == 1){
			mul(ans, a);
		}
		mul(a, a);
		n /= 2;
	}
	cout << ans[1][0] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[2][2];
		a[0][0] = 1; a[1][0] = 1; a[0][1] = 1; a[1][1] = 0;
		process(a);
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		long long ans = 0;
		for(int i = 0; i < n - 2; i++){
			int l = i + 1, r = n - 1;
			while(l < r){
				if(a[l] + a[r] >= k - a[i]) r--;
				else{
					ans += r - l;
					l++;
				}
			}
		}
		cout << ans << endl;
	}
}

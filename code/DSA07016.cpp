#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		s += ' ';
		stack<int> st;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == 'D'){
				st.push(i + 1);
			}
			else{
				cout << i + 1;
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
			}
		}
		cout << endl;
	}
}


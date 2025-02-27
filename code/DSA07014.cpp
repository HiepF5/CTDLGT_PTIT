#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		for(int i = s.length() - 1; i >= 0; i--){
			if(isdigit(s[i])){
				st.push(s[i] - '0');
			}
			else{
				int num1 = st.top();
				st.pop();
				int num2 = st.top();
				st.pop();
				if(s[i] == '+'){
					st.push(num2 + num1);
				}
				else if(s[i] == '-'){
					st.push(num1 - num2);
				}
				else if(s[i] == '*'){
					st.push(num1 * num2);
				}
				else{
					st.push(num1 / num2);
				}
			}
		}
		cout << st.top() << endl;
	}
}

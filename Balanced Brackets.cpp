#include <bits/stdc++.h>

using namespace std;


bool isBracket(char c){
	if(c == '(' || c == '{' || c == '['){
		return true;
	}
	return false;
}

bool is(string s){
	stack<char> st;
	for(int i = 0 ; i < s.length(); i++){
		if(isBracket(s[i])){
			st.push(s[i]);
		}else{
			
			if(st.empty()) return false;
			char top = st.top();
			if(s[i] == ')'){
				if(top == '('){
					st.pop();
				}else{
					return false;
				}
			}
			if(s[i] == '}'){
				if(top == '{'){
					st.pop();
				}else{
					return false;
				}
			}
			if(s[i] == ']'){
				if(top == '['){
					st.pop();
				}else{
					return false;
				}
			}
		}
	}
	if(st.empty()) return true;
	return false;
}

int main(){
	int n;
	cin >>n;
	string s;
	for(int i =0; i < n; i++){
		cin >>s;
		if(is(s)){
			cout <<"YES"<<endl;
		}else{
			cout <<"NO"<<endl;
		}
	}
		
	
	return 0;
}

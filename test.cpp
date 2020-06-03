#include <bits/stdc++.h>

using namespace std;

void decode(){
	int a, b;
	cin >> a >> b;
	int w=max(2*b, a);
	int h=max(2*a, b);
	cout << pow(min(w, h), 2) << "\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}

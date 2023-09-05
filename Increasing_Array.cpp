#include <bits/stdc++.h>
using namespace std;



int main(){
	long long int n;
	cin >> n;
	
	long long int x[n];
	long long int operations = 0;
	
		
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	
	long long int prev = x[0];
	
	for(int i = 1; i < n; i++){
		if(x[i] < prev){
			operations += prev - x[i];		
		}
		else{
			prev = x[i];
		}
	}
	cout << operations << endl;
	
	
	return 0;
}

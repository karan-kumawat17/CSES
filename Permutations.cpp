#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	
	if(n == 2 || n == 3){
		cout << "NO SOLUTION" << endl;
	}
	else if(n == 4){
		cout << "2 4 1 3";
	}
	else{
		for(int i = 1; i <= n; i+=2){
			cout << i << " ";
		}
		for(int i = 2; i <= n; i+=2){
			cout << i << " ";
		}
		
	}
	cout << endl;
	return 0;
}

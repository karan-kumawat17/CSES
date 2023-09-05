#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	long long int count1 = 1, count2 = 1, count3 = 1, count4 = 1;
	long long int max1 = 1, max2 = 1, max3 = 1, max4 = 1;
	
	long long int len = s.length();
	
	for(int i = 0; i < len - 1; i++){
		if(s[i] == 'A' && s[i+1] == 'A'){
			count1++;
			if(count1 >= max1){
				max1 = max(count1, max1);
			}
		}
		else if(s[i] == 'T' && s[i+1] == 'T'){
			count2++;
			if(count2 >= max2){
				max2 = max(count2, max2);
			}
		}
		else if(s[i] == 'G' && s[i+1] == 'G'){
			count3++;
			if(count3 >= max3){
				max3 = max(count3, max3);
			}
		}
		else if(s[i] == 'C' && s[i+1] == 'C'){
			count4++;
			if(count4 >= max4){
				max4 = max(count4, max4);
			}
		}
		else{
			count1 = 1, count2 = 1, count3 = 1, count4 = 1;
		}
	}
	
	long long int max11 = max(max1, max2);
	long long int max22 = max(max3, max4);
	
	cout << max(max11, max22) << endl;
	return 0;
}

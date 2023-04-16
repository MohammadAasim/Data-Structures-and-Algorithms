#include<iostream>
using namespace std;
int main(){
	int m,n,k,s;
	cin >>m >> n >> k >> s;
	char park[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> park[i][j];
		}
	}

	for(int i = 0; i < m && s >= k; i++){
		for(int j = 0; j < n && s >= k; j++){
			if(j != 0){
				s--;
			}
			if(park[i][j] == '*'){
				s += 5;
			}
			else if(park[i][j] == '.'){
				s -= 2;
			}
			else if(park[i][j] == '#'){
				break;
			}
		}
	}

	s < k ? cout << "No" : cout << "Yes\n" <<s;
	return 0;
}
#include <bits/stdc++.h>
using namespace std; 

int a[10005];

int main(){
	int n, k;

	cin >> n >> k;

	for( int i= 0; i< n; ++i ){
		cin >> a[i];
	}

	int i= 0; 
	int j= n-1;
	int c= 0;

	while( i <= j ){
		
		if( a[i] <= k || a[j] <= k ){
			if( i== j ){
				c++;
				i++;
				j--;
			}else if( a[i] <= k ){
				c++;
				i++;
			}else if( a[j] <= k ){
				c++;
				j--;
			}
		}else{	
			break;
		}

	}

	cout << c << endl;

}
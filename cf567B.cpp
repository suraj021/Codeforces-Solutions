#include <bits/stdc++.h>

using namespace std;
	
typedef long int li;	
typedef vector<li> vli;

set< li > s;

char logs[102];

int main(){

	int n;

	scanf( "%d", &n );

	li curr_size= 0;
	li min_size= 0;

	pair< set<li>::iterator, bool > did;

	for( int i= 0; i< n; ++i ){

		char c;
		li x;

		cin >> c >> x;

		if( c== '+' ){

			s.insert( x );

			if( curr_size < min_size ){
				curr_size++;
			}else{
				min_size= ++curr_size;
			}
			
		}else{

			if( s.find( x ) == s.end() ){	// not found
				//curr_size++;
				min_size++;
				s.insert( x );

			}else{

				s.erase( x );
				curr_size--;
			}
		}
		
		//cout << "\t" << curr_size << " " << min_size << endl;;
	}

	cout << min_size << endl;
}
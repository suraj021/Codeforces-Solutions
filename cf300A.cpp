#include <bits/stdc++.h>

using namespace std;

queue< int > neg;
queue< int > pos;
queue< int > zero;

int main(){

	int n, x;
	
	scanf( "%d", &n );

	while( n-- ){

		scanf( "%d", &x );

		if( x > 0 )
			pos.push( x );
		else if ( x < 0 )
			neg.push( x );
		else
			zero.push( x );

	}

	if( neg.size()%2== 0 ){

		if( pos.size()== 0 ){

			x= neg.front();
			pos.push( x );

			neg.pop();

			x= neg.front();
			pos.push( x );

			neg.pop();

			x= neg.front();
			zero.push( x );

			neg.pop();
		}
		else{

			x= neg.front();

			neg.pop();

			zero.push( x );	
		}
	}else{

		if( pos.size()== 0 ){

			x= neg.front();
			pos.push( x );

			neg.pop();

			x= neg.front();
			pos.push( x );

			neg.pop();

		}
	}

	cout << neg.size() << " ";
	while( !neg.empty() ){
		cout << neg.front() << " ";
		neg.pop();
	}	

	cout << "\n";

	cout << pos.size() << " ";
	while( !pos.empty() ){
		cout << pos.front() << " ";
		pos.pop();
	}	

	cout << "\n";

	cout << zero.size() << " ";
	while( !zero.empty() ){
		cout << zero.front() << " ";
		zero.pop();
	}	

	cout << "\n";


}
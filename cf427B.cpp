#include <bits/stdc++.h>

using namespace std;

int a[200005];
int n, t, c;

class tree{

private:

	vector< int > st;
	int N;

public:

	tree( int N ){

		this->N= n;
		st.assign( 4*N, 0 );

		build( 1, 0, N-1 );

		//for( int i= 0; i< 4*N; ++i )
		//	cout << st[i] << " ";

		cout << endl;

	}

	void build( int id, int l, int r ){

		if( l== r ){

			st[id]= a[l];
			return;
		}

		int mid= ( l + r )/2;
		int left= 2*id;
		int right= left + 1;

		build( left, l, mid );
		build( right, mid+1, r );

		st[id]= max( st[left], st[right] );

	}

	int getValue( int id, int l, int r, int qs, int qe ){

		if( l== qs && r== qe )
			return st[id];

		int mid = (l + r) / 2;
			
		if (qs > mid)
			return getValue( 2*id+1, mid+1, r, qs, qe );
			
		if (qe <= mid)
			return getValue( 2*id, l, mid, qs, qe );

		return max( getValue(2*id, l, mid, qs, mid), getValue(2*id+1, mid+1, r, mid+1, qe ) );
	}

	int getValue( int qs, int qe ){

		return getValue( 1, 0, N-1, qs, qe );
	}


};

int main(){

	int count= 0;

	scanf( "%d%d%d", &n, &t, &c );

	for( int i= 0; i< n; ++i )
		scanf( "%d", &a[i] );

	tree tr( n );

	for( int i=0; i< n-c+1; ++i ){

		if( tr.getValue( i, i+c-1 ) <= t )
			count++;
	}

	cout << count << endl;

	return 0;
}
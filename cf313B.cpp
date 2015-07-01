#include <bits/stdc++.h>

using namespace std;

struct node{

	int len;
	string s;
	int ans;

	void assign_leaf( char c ){

		s= "";

		s+= c;
		len= 1;
		ans= 0;
	}

	void merge( node& left, node& right ){

		len= left.len + right.len ;

		ans= left.ans + right.ans;

		if( left.s[left.len - 1] == right.s[0] )
			ans++;

		s+= left.s + right.s;

	}

	int getValue(){

		return ans;
	}

};

class SegmentTree{

private:

	int N;
	node* st;

public: 

	SegmentTree( string s ){

		this->N= s.length() ;

		st= new node[4*N];

		build( s, 1, 0, N-1 );

		//for( int i=1; i< 4*N; ++i )
		//	cout << st[i].s << " " << st[i].ans << endl;
	}

	int getValue( int qs, int qe ){

		node result= getValue( 1, 0, N-1, qs, qe );

		return result.getValue();
	}

private:

	void build( string& s, int id, int l, int r ){

		if( l== r ){

			st[id].assign_leaf( s[l] );

			return ;
		}

		int left= 2*id;
		int right= left + 1;
		int mid= ( l + r )/2;

		build( s, left, l, mid );
		build( s, right, mid + 1, r );

		st[id].merge( st[left], st[right] );
	}

	node getValue( int id, int l, int r, int qs, int qe ){

		if( qs== l && qe== r )
			return st[id];

		int left= 2*id;
		int right= left + 1;
		int mid= ( l + r )/2;

		if( qs > mid )
			return getValue( right, mid+1, r, qs, qe );

		if( qe <= mid )
			return getValue( left, l, mid, qs, qe );

		node left_ans= getValue( left, l, mid,  qs, mid );
		node right_ans= getValue( right, mid+1, r, mid+1, qe);

		node ans;

		ans.merge( left_ans, right_ans );

		return ans;
	}


};

int main(){

	string s;
	int q;

	int qs, qe ;

	cin >> s;

	SegmentTree seg( s );

	scanf( "%d", &q );

	while( q-- ){

		scanf( "%d%d", &qs, &qe );

		qs--; qe--;

		printf("%d\n", seg.getValue( qs, qe ) );

	}

}
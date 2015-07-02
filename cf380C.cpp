#include <bits/stdc++.h>

using namespace std;

struct node{

	int unused_left;		// unused   ')' bracket in the node
	int unused_right;		// unused   '(' bracket in the node
	int bracket;			// number of  '()'  in the node

	void assign_leaf( char c ){

		bracket= 0;

		if( c== '(' ){

			unused_right= 1;		
			unused_left= 0;
		}else{

			unused_left= 1;
			unused_right= 0;
		}
	}

	void merge( node& left, node& right ){

		int t= min( left.unused_right, right.unused_left );		

		bracket= left.bracket + right.bracket + t;
		unused_left= left.unused_left + right.unused_left - t;
		unused_right= left.unused_right + right.unused_right - t;
		
	}

	int get_length(){

		return 2*bracket;
	}

};

class Segment_tree{

	private:
			node *st;
			int N;

	public:

			Segment_tree( string str ){

				int N= str.length();		// length of string

				this->N= N;

				st= new node[ 4*N ];		// array of node of length 4*N

				build( str, 1, 0, N-1 );	// build the segment tree

				//for( int i=1; i<= 4*N; ++i )
				//	cout << st[i].unused_left << "   " << st[i].unused_right << "      " << st[i].bracket << endl;
			}	

			void build( string &str, int id, int l, int r ){

				if( l== r ){

					st[id].assign_leaf( str[l] );
					return;
				}

				int left= 2*id;
				int right= left + 1;

				int mid= ( l + r )/2;

				build( str, left, l, mid );
				build( str, right, mid + 1, r );

				st[id].merge( st[left], st[right] );

			}

			int query( int qs, int qe ){

				node result= query( 1, 0, N-1, qs, qe );

				return result.get_length();

			}


	private: 

			node query( int id, int l, int r, int qs, int qe ){

				if( l== qs && r== qe )
					return st[id];

				int left= 2*id;
				int right= left + 1;

				int mid= ( l + r )/2;

				if( qs > mid )
					return query( right, mid+1, r, qs, qe);

				if ( qe <= mid )
					return query( left, l, mid,  qs, qe );

				node left_res= query( left, l, mid,  qs, mid );
				node right_res= query( right, mid+1, r, mid+1, qe);

				node ans;

				ans.merge( left_res, right_res );

				return ans;
			}

};

int main(){

	string str;

	int x, y;
	int M;

	cin >> str;

	Segment_tree seg( str );

	scanf( "%d", &M );

	while( M-- ){

		scanf( "%d%d", &x, &y );

		x--, y-- ;

		printf("%d\n", seg.query( x, y ) );
	}

}
#include <bits/stdc++.h>

using namespace std;

bool taken[1000];
int team[500][500];
int sol[1000];
int helper[1000];

int main(){

 	int N;
 	int x;
 	cin >> N;

 	for( int i= 2; i<= 2*N; ++i ){
 		for( int j= 1; j< i; ++j ){
 			//cout << "i " << i << "j " << j << endl;
 			cin >> x;
 			team[i][j]= x;
 			team[j][i]= x;
 		}
 	}

 	/*for( int i= 1; i<= 2*N; ++i ){
 		for( int j= 1; j<= 2*N; ++j )
 			cout << team[i][j] << "        ";
 		cout << endl;
 	}*/

 	int count= 0;

 	while( count < 2*N ){

		 	for( int player= 1; player<= 2*N; ++player ){
		 		
			 		int maxi= INT_MIN;
				 	int id= 0;
			 		
			 		if( !taken[player] ){

			 			for( int mate= 1; mate<= 2*N; ++mate ){

				 			if( !taken[mate] ){
				 				
				 				if( mate != player ){
						 			
						 			if( maxi < team[mate][player] ){
						 				maxi= team[mate][player];
						 				id= mate;
						 			}
						 		}
				 			}
				 		}


			 		}

		 		//cout << player << " " << id << " " << endl;
		 		if( id )
			 		helper[player]= id;

		 	}	

		 	//cout << endl;

		 	//for( int i= 1; i<= 2*N; ++i )
 			//	cout << helper[i] << " ";

 			//cout << endl; 

		 	for( int i= 1; i<= 2*N; ++i )
		 		if( i== helper[helper[i]] && !taken[i] ){
		 			sol[i]= helper[i];
		 			sol[helper[i]]= i;
		 			taken[i]= 1;
		 			taken[helper[i]]= 1;
		 			count+= 2;
		 		}

		 	//cout << "count " << count << endl;

	}

 	for( int i=1 ;i<= 2*N; ++i )
 		cout << sol[i] << " ";

 	cout << endl;

 	return 0;

}


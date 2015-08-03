#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>

typedef long long ll;

using namespace std;

char S[2000006], T[2000006];
int index[26][26];
int len;
int hamm_dist= 0;

int main(){

	scanf( "%d", &len );
	scanf( "%s%s",S,T );

	for( int i=0; i<len; i++ )
		if( S[i]!= T[i] ){

			index[S[i]-'a'][T[i]-'a']= i+1;
			hamm_dist++;
		}

	for( int i=0; i<26; i++ )
		for( int j=0; j<26 ; j++ )
			if( index[i][j] && index[j][i] ){

				printf("%d\n", hamm_dist-2 );
				printf("%d %d\n", index[i][j], index[j][i] );

				return 0;
			}

	for( int i=0; i<26; i++ )
		for( int j=0; j<26; j++ )
			if( index[i][j] ){

				for( int k= 0; k<26; k++ )
					if( index[j][k] ){

						printf("%d\n", hamm_dist-1 );
						printf("%d %d", index[i][j], index[j][k] );
						return 0;
					}

			}

	printf("%d\n", hamm_dist );
	printf("-1 -1");

	return 0;

}
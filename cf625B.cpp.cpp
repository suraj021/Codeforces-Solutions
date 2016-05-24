#include <bits/stdc++.h>

using namespace std;

#define max_n 100005

int lps[max_n];

void kmpPreprocess( string P ){

	int m= P.length();

	int i= 0, j= -1;

	lps[0]= -1;

	while( i < m ){

		while( j>= 0 && P[i] != P[j] )
			j= lps[j];

		i++;	j++;

		lps[i]= j;
	}

	//for( int i= 0; i< m; ++i )
		//cout << lps[i] << " ";

	//cout << endl;

}

int KMP( string T, string P ){

	int n= T.length();
	int m= P.length();

	int i= 0, j= 0;

	while( i < n ){

		while( j >= 0 && T[i]!= P[j] )
			j= lps[j];

		i++;	j++;

		if( j== m ){

			return i-j+1;
		}

	}

    return -1;
}



int main(){

    string T, P;

    cin >> T >> P;

    int m= P.length();
    int n= T.length();

    kmpPreprocess( P );

    long ans= 0;

    while( true ){

        int index= KMP( T, P ) - 1;

        if( index < 0 )
            break;

        //cout << index << ' ';

        ans++;

        if( index+m <= T.length() )
            T= T.substr( index + m );
        else
            break;

        //cout << T << endl;
    }

    cout << ans;
}

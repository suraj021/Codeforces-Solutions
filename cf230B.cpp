#include <bits/stdc++.h>

using namespace std;

long long _seive_size;

vector< long > primes;
bitset< 100000007 > prime;

void prime_generator( long long n ){
    // generates prime no. till n and store it in
    // primes vector, n<= 10^6
    _seive_size= n + 1;

    prime.set();

    prime[0]= prime[1]= 0;

    for( long long i= 2; i<= _seive_size; ++i ){
        if( prime[i] ){
            for( long long j= i*i; j<= _seive_size; j+= i )
                prime[j]= false;

            primes.push_back( i );
        }
    }

}

bool is_prime( long N ){
    // returns 'true' if N is a prime

    if( N <= _seive_size )
        return prime[N];

    for( int i= 0; i< (int)primes.size(); ++i )
        if( N%primes[i]== 0 )
            return false;

    return true;
}

int main(){

    prime_generator( 10000000 );

    int n;
    long long x;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> x;

        if( x < 3 )
			printf( "NO\n" );
		else if( x%2== 0 || x%2!= 0 ){

			if( x%2== 0 && x > 4){
				printf("NO\n");
				continue;
			}else if( x%2== 0 && x <= 4 ){
				printf("YES\n");
				continue;
			}

            long long sqrtx= sqrt(x);

			if( is_prime( sqrtx ) && sqrtx*sqrtx== x ){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }

		}else
			printf("NO\n");

    }


}

#include<bits/stdc++.h>
using namespace std;

long no_of_zeroes( long long n ){
    long ans= 0;
    long a= 5;
    while( true ){
        ans+= n/a;

        if( n/a == 0 )
            break;
        a*= 5;
    }

    return ans;
}

vector< long long > answer;

int main(){
    ios::sync_with_stdio(false);

    long long m, n;
    long low= 1, high= 1e9;
    long mid;
    cin >> m;

    while( low < high ){

        long mid= ( low + high ) >> 1;

        if( no_of_zeroes( mid ) < m ){
            low= mid + 1;
        }else{
            high= mid;
        }

    }

    while( no_of_zeroes( low )== m ){
        answer.push_back( low );
        ++low;
    }

    cout << (int)answer.size() << '\n';
    for( int i= 0; i< (int)answer.size(); ++i )
        cout << answer[i] << ' ';

}

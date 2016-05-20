#include <bits/stdc++.h>

using namespace std;

long long nC2( long long n ){
    return 1LL*( (n*(n-1)*1LL)/2 );
}

int main(){

    long long n, m;
    long long kma, kmi;

    cin >> n >> m;

    if( n%m ){
        kmi= nC2( n/m+1 )*( n%m )*1LL + nC2( n/m )*( m - n%m )*1LL;
    }else{
        kmi= nC2( n/m )*m*1LL;
    }


    kma= nC2( n-m+1 )*1LL;

    cout << kmi*1LL << ' ' << kma*1LL << endl;

    return 0;
}

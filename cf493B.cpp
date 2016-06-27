#include <bits/stdc++.h>
using namespace std;

long a[200005];
vector< long > first;
vector< long > second;

int main(){

    int n;
    long long sum1, sum2;

    sum1= sum2= 0;

    cin >> n;

    for( int i= 0; i< n; ++i ){
        cin >> a[i];
        if( a[i] >= 0 ){
            sum1+= a[i];
            first.push_back( a[i] );
        }else{
            sum2+= (-a[i]);
            second.push_back( -a[i] );
        }
    }

    if( sum1 > sum2 ){
        cout << "first";
    }else if( sum2 > sum1 ){
        cout << "second";
    }else{

        int len1= (int)first.size();
        int len2= (int)second.size();

            bool flag= true;
            int win;

            for( int i= 0; i< len1; ++i ){
                if( first[i] > second[i] ){
                    win= 1;
                    flag= false;
                    break;
                }else if( first[i] < second[i] ){
                    win= 2;
                    flag= false;
                    break;
                }
            }

            if( flag ){

                if( a[n-1] >= 0 )
                    cout << "first";
                else
                    cout << "second";

            }else{

                if( win==1 )
                    cout << "first";
                else
                    cout << "second";

            }




    }

}

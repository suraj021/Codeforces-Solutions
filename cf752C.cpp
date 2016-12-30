#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair< int, int > pii;

#define ff first
#define ss second
#define pb push_back
#define mod 1000000007

int main(){

    int n;
    string s;

    cin >> n;
    cin >> s;

    int cnt= 0;

    for( int i= 0; i< n; ++i ){
        set<char> st;
        //cout << i << '\n';

        if( s[i]== 'L' ){
            st.insert( s[i] );
            i++;
            while( i < n ){
                if( st.find('U')!= st.end() && s[i]== 'D' ){
                    break;
                }else if( st.find('D')!= st.end() && s[i]== 'U' ){
                    break;
                }else if( s[i]== 'R' ){
                    break;
                }
                //cout << '\t' << s[i] << endl;
                st.insert( s[i] );
                i++;
            }

        }else if( s[i]== 'R' ){
            st.insert( s[i] );
            i++;
            while( i < n ){
                if( st.find('U')!= st.end() && s[i]== 'D' ){
                    break;
                }else if( st.find('D')!= st.end() && s[i]== 'U' ){
                    break;
                }else if( s[i]== 'L' ){
                    break;
                }
                //cout << '\t' << s[i] << endl;
                st.insert( s[i] );
                i++;
            }
        }else if( s[i]== 'U' ){
            st.insert( s[i] );
            i++;
            while( i < n ){
                if( st.find('L')!= st.end() && s[i]== 'R' ){
                    break;
                }else if( st.find('R')!= st.end() && s[i]== 'L' ){
                    break;
                }else if( s[i]== 'D' ){
                    break;
                }
                //cout << '\t' << s[i] << endl;
                st.insert( s[i] );
                i++;

            }
        }else{
            st.insert( s[i] );
            i++;
            while( i < n ){
                if( st.find('L')!= st.end() && s[i]== 'R' ){
                    break;
                }else if( st.find('R')!= st.end() && s[i]== 'L' ){
                    break;
                }else if( s[i]== 'U' ){
                    break;
                }
                //cout << '\t' << s[i] << endl;
                st.insert( s[i] );
                i++;
            }
        }
        i--;
        cnt++;

        //cout << i << endl << endl;;
        st.clear();
    }

    cout << cnt << endl;

    return 0;
}

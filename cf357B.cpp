#include <bits/stdc++.h>
using namespace std;

int color[100005]= {0};

int main(){

    int n, m;
    int x, y, z;

    cin >> n >> m;

    for( int i= 0; i< m; ++i ){
        cin >> x >> y >> z;

        bool c[4]= {0};

        if( !color[x] && !color[y] && !color[z] ){
            color[x]= 1;
            color[y]= 2;
            color[z]= 3;
        }else if( color[x] && !color[y] && !color[z] ){
            c[color[x]]= true;
            int s= y;
            for( int j= 1; j<= 3; ++j ){
                if( !c[j] ){
                    c[j]= true;
                    color[s]= j;
                    s= z;
                }
            }
        }else if( color[y] && !color[x] && !color[z] ){
            c[color[y]]= true;
            int s= x;
            for( int j= 1; j<= 3; ++j ){
                if( !c[j] ){
                    c[j]= true;
                    color[s]= j;
                    s= z;
                }
            }
        }else if( color[z] && !color[x] && !color[y] ){
            c[color[z]]= true;
            int s= x;
            for( int j= 1; j<= 3; ++j ){
                if( !c[j] ){
                    c[j]= true;
                    color[s]= j;
                    s= y;
                }
            }
        }else if( color[x] && color[y] && !color[z] ){
            color[z]= 6 - color[x] - color[y];
        }else if( color[y] && color[z] && !color[x] ){
            color[x]= 6 - color[z] - color[y];
        }else if( color[z] && color[x] && !color[y] ){
            color[z]= 6 - color[x] - color[z];
        }

    }

    for( int i= 1; i<= n; ++i )
        cout << color[i] << ' ';

}

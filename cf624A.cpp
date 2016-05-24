/*
	// Author: Suraj Bora
	// Email: surajbora021@gmail.com

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    double d, L, v1, v2;

    cin >> d >> L >> v1 >> v2;

    double x= (( L - d )*v1)/( v1 + v2 );

    double t= x/v1;

    printf("%0.6lf", t );

}

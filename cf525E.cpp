#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>

using namespace std;

#define ulli unsigned long long int


ulli fact[26];

void find_factorial(){

	fact[1]= 1;

	for( int i=2; i<=18; i++ )
		fact[i]= i*fact[i-1];
	for( int i=19; i<=25; i++ )
		fact[i]= i;

}

int main(){

	find_factorial();

	for( int i=1; i<26; i++ ){

		cout << fact[i] << endl;
	}


}
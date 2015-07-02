#include <bits/stdc++.h>

using namespace std;

int main(){

	string wake_t, slept;

	cin >> wake_t;
	cin >> slept;

	int h0= (slept[0]-'0')*10 + (slept[1]-'0') ;
	int m0= (slept[3]-'0')*10 + (slept[4]-'0');
	int m1= (wake_t[3]-'0')*10 + (wake_t[4]-'0') ;
	int h1= (wake_t[0]-'0')*10 + (wake_t[1]-'0') ;

	int hp= h1 - h0;
	int mp= m1 - m0;

	//cout << hp << " " << mp << endl;

	if( mp < 0 ){
		hp-= 1;
		mp+= 60;
	}

	if( hp < 0 )
		hp+= 24;

	printf("%02d:%02d\n", hp, mp );

}
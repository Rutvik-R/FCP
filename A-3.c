/*
Name :- Rutvik
R.No :- E-21
A.No :- U21CS021
*/

#include <stdio.h>

int main() {

// Q-5
	float ans = 0 , a ;

	scanf("%f" , &a);

	if (a <= 10000) ans += a * 0.5 ;
	else ans += (10000) * 0.5 ;

	if (a > 10000 && a <= 25000) ans += (a - 10000) * 0.6 + 50 ;
	else ans += 15000 * 0.6 + 50 ;

	if (a > 25000) ans += (a - 25000) * 0.75 + 140 ;

	printf("%f" , ans);

	return 0;

}






















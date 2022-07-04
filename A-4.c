#include <stdio.h>

int condi(int num) {
	int digi[10];
	int ptr = 0 , multi = 10 ;

	while (num) {

		for (int i = 0; i < ptr; ++i)
		{
			if (digi[i] == num % 10 )  return 0 ;
		}
		digi[ptr] = num % 10 ;
		ptr++;
		num /= multi ;

	}

	return 1 ;
}


int main() {

	int n , ans ;

// Q-1
	/*
	// a
	printf("Enter no :  ");
	scanf("%d" , &n);
	ans = 1 ;
	while (n != 1) {
		if (n % 2 == 0) ans += n * n ;
		else ans -= n * n ;
		n--;
	}
	printf("ans = %d" , ans);

	*/

	/*
	// b
	printf("Enter no :  ");
	scanf("%d" , &n);
	ans = 1 ;
	while (n != 1) {
		ans += n * n ;
		n--;
	}
	printf("ans = %d" , ans);
	*/
	/*
		// c
		printf("Enter no :  ");
		scanf("%d" , &n);
		int dumi = 1;
		ans = 0 ;
		int t = 0;
		while (dumi > ans / 1000 ) {
			t++;
			dumi *= n ;
			dumi /= t ;
			if (t % 4 == 1) ans += dumi ;
			else if (t % 4 == 3) ans -= dumi ;
		}
		printf("ans = %d" , ans);
	*/
	/*
		// d
		printf("Enter no :  ");
		scanf("%d" , &n);
		ans = 0 ;
		int dumi = n ;

		while (dumi) {
			ans += (dumi % 10) * (dumi % 10) * (dumi % 10) ;
			dumi /= 10 ;
		}
		if (ans == n)printf("Yes");
		else printf("No");
	*/

	/*
		// e
		printf("Enter no :  ");
		scanf("%d" , &n);
		ans = 0 ;
		int dumi = n ;

		while (dumi) {
			int d = dumi % 10 , d1 = 1   ;
			while (d) {d1 *= d; d--;}

			ans += d1 ;

			dumi /= 10 ;
		}
		if (ans == n)printf("Yes");
		else printf("No");
	*/

	/*

		//Q-2

		//a
		for (int i = 1; i <= 4; ++i)
		{
			for (int j = 4 - i ; j ; j--) printf(" ");
			for (int j = 0 ; j < i ; j++) printf("* ");
			printf("\n");
		}

		printf("\n\n");

		// b
		for (int i = 5; i ; i--) {
			for (int j = 1 ; j <= i ; j++) printf("%d" , j);
			printf("\n");
		}

		printf("\n\n");

		// c
		for (int i = 1; i <= 5; ++i)
		{
			for (int j = i; j ; j--) printf("%d " , j * j);
			printf("\n");
		}
		printf("\n\n");

		// d
		for (int i = 1; i <= 5; ++i)
		{
			for (int j = 1; j <= 11; ++j)
			{
				if (j <= i) printf("%d" , j );
				else if (12 - j <= i) printf("%d" , 12 - j );
				else printf(" ");
			}
			printf("\n");
		}
		printf("\n\n");

		// e
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 1; j <= 5; ++j)
			{
				if (j <= i && j <= 10 - i) printf("%d " , j );
			}
			printf("\n");
		}
		printf("\n\n");

		// f
		for (int i = 1; i < 10; ++i)
		{
			for (int j = 0; j < 5 - i; ++j) printf("  ");
			for (int j = 0; j < i - 5 ; ++j) printf("  ");
			for (int j = 0; j < i * 2 - 1 && j < (10 - i) * 2 - 1 ; ++j) printf("%c " , 'A' + j * 2);
			printf("\n");

		}
	*/

	/*
		// Q -3
		int n1 , n2 ;
		printf("Enter n1 and n2 : ");
		scanf("%d %d" , &n1 , &n2);
		n1 = (n1 / 2) * 2 + 1 ;
		while (n1 <= n2) {printf("%d " , n1); n1 += 2 ;}
	*/

	/*
		// Q-4
		printf("Enter a No :  ");
		scanf("%d" , &n);
		ans = 0 ;
		while (n) {ans += (n % 10) * (n % 10) ; n /= 10;}
		printf("%d" , ans);
	*/

	/*
		// Q -5
		int n1 , n2 ;
		scanf("%d %d" , &n1 , &n2);
		ans = 0 ;
		while (n1 && n2) {ans += (n1 % 10) * (n2 % 10); n1 /= 10 ; n2 /= 10; }
		printf("%d" , ans);
	*/
	/*
		// Q-6
		int l , r ;
		// printf("Enter l & r");
		scanf("%d %d" , &l , &r);

		int left , right , maxi = -1 , num = -1;
		left = (l + r) / 2 ;
		right = (l + r) - left ;

		while (left >= l && right <= r) {

			if (condi(left) == 1) {num = left ; break ;}
			if (condi(right) == 1) {num = right ; break ;}
			left--;
			right++;
		}
		printf("%d" , num);
	*/
	/*
		// Q-7
		int a , b, c ;
		scanf("%d %d %d" , &a, &b, &c) ;
		ans = 0 ;
		for (int i = 1; i < a; ++i)
			for (int k = 1; k < c; ++k)
				for (int j = 1; j < b; ++j)
					if (i * k > j * j) ans++;
					else break;

		printf("%d" , ans);
	*/


	return 0 ;
}










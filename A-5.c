// Rutvik Ranpariya

#include <stdio.h>

int main() {

	// Q-1
	int a1[10] = {1, 2, 3, 4 , 5, 6, 7, 8, 9, 10} ;
	int a2[10] = {11, 21, 31, 41 , 51, 61, 71, 81, 91, 101} ;
	int a3[10] , avg = 0;
	for (int i = 0 ; i < 10 ; i++) {
		a3[i] = a1[i] + a2[i] ;
		avg += a3[i] ;
	}

	avg = avg / 10 ;

	for (int i = 0 ; i < 10 ; i++) printf("%d " , a3[i]);

	printf("\nAvg = %d" , avg);

	/*
	// Q-2
		int n ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] , dumi;
		for(int i=0 ; i<n ; i++) scanf("%d" , &num[i]);

		for(int i=0 ; i<n ; i++)
			for(int j=i+1 ; j<n ; j++)
				if(num[i]<num[j]){
					dumi=num[i];
					num[i]=num[j];
					num[j]=dumi;
				}


		for(int i=0 ; i<n ; i++) printf("%d " , num[i]);
	*/

	/*
	// Q-3
		int n ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] , odd=0;
		for(int i=0 ; i<n ; i++) {
			scanf("%d" , &num[i]);
			if(num[i]%2) odd++;

		}

		printf("odd is %d \neven is %d" , odd , n-odd);

	*/

	/*
	// Q-4
		int n ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] , maxi=0 , mini=0;
		for(int i=0 ; i<n ; i++) {
			scanf("%d" , &num[i]);
			if(num[maxi] < num[i]) maxi = i ;
			if(num[mini] > num[i]) mini = i ;

		}

		num[maxi] = num[maxi] + num[mini] ;
		num[mini] = num[maxi] - num[mini] ;
		num[maxi] = num[maxi] - num[mini] ;

		for(int i=0 ; i<n ; i++) printf("%d " , num[i]);
	*/

	/*
	// Q-5
		int n , dumi;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] , maxi=0 , mini=0;
		for(int i=0 ; i<n ; i++) {
			scanf("%d" , &num[i]);
		}

		printf("Enter No :  ");
		scanf("%d" , &dumi);

		int a=0 ;
		for(int i=0 ; i<n ; i++) {
			if(a==1) num[i-1] = num[i] ;
			else if(num[i]==dumi)a=1 ;
			}

		for(int i=0 ; i<n-1 ; i++) printf("%d " , num[i]);
	*/

	/*
	// Q-6
		int n , dumi , dumi1;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n+1] , maxi=0 , mini=0;
		for(int i=0 ; i<n ; i++) {
			scanf("%d" , &num[i]);
		}

		printf("\nEnter new No :  ");
		scanf("%d" , &dumi1);

		printf("\nEnter key :  ");
		scanf("%d" , &dumi);

		int a=0 ;
		for(int i=n ; i+1 ; i--) {

			if(num[i]==dumi){
				num[i+1] = dumi1 ;
				break;
			}
			if(a==0) num[i+1] = num[i] ;
		}

		for(int i=0 ; i<n+1 ; i++) printf("%d " , num[i]);

	*/

	/*
	// Q- 7
		int n , ans=0 ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] ;
		for(int i=0 ; i<n ; i++)
			scanf("%d" , &num[i]);

		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				ans += ( num[i]%num[j] ) ;

		printf("Ans = %d" , ans);
	*/

	/*
	// Q-8
		int n , ans=0 , dumi , numi ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int num[n] ;
		for(int i=0 ; i<n ; i++) {
			scanf("%d" , &num[i]);

			dumi = 1 ;
			numi = num[i];
			while(numi/dumi != 0) dumi*= 10 ;

			dumi/=10 ;
			int t =0;

			while(dumi!=1 && numi%10 != numi){
				if(numi%10 != (numi/dumi)%10 ){
					t=1 ;
					break;
				}
				numi = numi%dumi;
				dumi /= 100 ;
				numi /= 10 ;

			}
			if (t==0) ans++;

		}

		printf("Ans = %d" , ans);
	*/

	/*
	// Q-9
		int n , ans=0 ;
		printf("Enter size of array :  ");
		scanf("%d" , &n);

		int n1[n] , n2[n] , n3[2*n];
		printf("Enter array 1 : ");
		for(int i=0 ; i<n ; i++)
			scanf("%d" , &n1[i]);

		printf("Enter array 2 : ");
		for(int i=0 ; i<n ; i++)
			scanf("%d" , &n2[i]);

		int i=0 , j=0;

		while(i<n || j<n){
			if(i<n && j<n)
			{
				if(n1[i] < n2[j]){
					n3[i+j] = n1[i]; i++;
				}
				else{
					n3[i+j] = n2[j];
					j++;
				}
			}
			else if(i<n){
				n3[i+j] = n1[i];
				i++;
			}
			else if(j<n){
				n3[i+j] = n2[j];
				j++;
			}
		}

		printf("New arr is : ");
		for(int i=0 ; i<2*n ; i++) printf("%d " , n3[i]);
	*/

	/*
	//Q-10
		int n , m , ans = 0 ;
		printf("Enter size of array n ,m  :  ");
		scanf("%d %d" , &n , &m);

		int n1[n][m] , n2[n][m] , n3[n][m];
		printf("Enter matrices 1 : ");
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m ; j++)
				scanf("%d" , &n1[i][j]);

		printf("Enter matrices 2 : ");
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m ; j++)
				scanf("%d" , &n2[i][j]);

		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < m ; j++)
				n3[i][j] = n1[i][j] - n2[i][j] ;

		printf("Ans = \n");
		for (int i = 0 ; i < n ; i++) {
			for (int j = 0 ; j < m ; j++) {
				printf("%d " , n3[i][j]);
			}
			printf("\n");
		}
		scanf("%d" , 274);
	*/
	return 0;
}






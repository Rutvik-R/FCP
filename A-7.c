// Rutvik Ranpariya

#include <stdio.h>
int n;

float pow_(float x, int y)
{
    if (y < 1)
    {
        x = 1 / x;
        y = -y;
    }
    if (x == 0)
        return 0;
    if (y >= 1)
        return x * pow_(x, y - 1);

    return 1;
}

int Q_2(int n)
{
    int arr[n][n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
                ans += arr[i][j];
        }
    }
    return ans;
}

void Q_3()
{
    char s[100], ss[100], ans[200];
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", ss);

    int n;
    scanf("%d", &n);

    int ptr = 0, ptr2 = 0;
    int ch = 0;
    while (s[ptr2] != '\0')
    {
        if (ptr2 != n || ch)
        {
            ans[ptr] = s[ptr2];
            ptr++;
            ptr2++;
        }
        else
        {
            for (int i = 0; ss[i] != '\0'; i++)
            {
                ans[ptr] = ss[i];
                ptr++;
            }
            ch = 1;
        }
    }
    ans[ptr] = '\0';
    printf("ans is %s \n", ans);
}

int flip(int n, int index)
{
    int t;
    int ans = 0;
    int dumi = n, dd = 1;

    for (int i = 0; i < 100; i++)
    {
        if (n / dd != 0)
        {
            dd *= 10;
        }
    }
    int i;
    dd /= 10;
    for (i = 0; i < 100; i++)
    {
        if (i + 1 == index)
            break;
        ans *= 10;
        ans += n / dd;
        n = n % dd;
        dd /= 10;
    }

    while (n)
    {
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }

    return ans;
}

int Q_5(int x, int vel ) {
    if (x > n)return 0;

    return vel + Q_5(x + 1 , vel * x);

}

void Q_6() {
    int max , min ;
    scanf("%d" , &n);
    int arr[n];

    scanf("%d" , &arr[0]);
    max = min = arr[0];

    for (int i = 0; i < n - 1; i++)
    {

        scanf("%d" , &arr[i]);
        max = (max < arr[i]) ? arr[i] : max ;
        min = (min > arr[i]) ? arr[i] : min ;

    }

    printf("max = %d \nmin = %d \n" , max , min);

}

int main()
{

    /*
    // Q-1
    int a,b;
    scanf("%d %d" , &a , &b);
    printf("x^y = %f \n" , pow_(a,b));
    */

    /*
    // Q-2
    scanf("%d", &n);
    printf("ans is %d \n" , Q_2(n));
    */

    /*
    // Q-3
    Q_3();
    */

    /*
    // Q-4
    int n ,index;
    scanf("%d %d" , &n , &index);
    printf("Ans is %d\n" , flip(n ,index));

    */
    /*
        // Q-5
        scanf("%d", &n);
        printf("ans is %d\n", Q_5(1, 1));
    */


    //Q-6
    Q_6();

    return 0;
}
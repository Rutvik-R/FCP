// Rutvik Ranpariya

#include <stdio.h>

int main()
{
    // Q-5
    char string1[100], string2[100];
    // printf("Enter A string1  :  ");
    scanf("%[^\n]%*c", string1);
    // printf("Enter A string2  :  ");
    scanf("%[^\n]%*c", string2);
    int ans = 0, ch = 1;
    for (int i = 0; string1[i] != '\0'; i++)
    {

        if (string1[i] == string2[0])
        {
            ch = 1;
            for (int j = 0; string2[j] != '\0'; j++)
            {
                if (string1[i + j] != string2[j])
                {
                    ch = 0;
                    break;
                }
            }
            if (ch)ans++;
        }
    }

    printf("ans is %d \n\n", ans);


    /*

    // Q-6
        char string1[100], string2[100] , string3[200] , ans[200];
        printf("Enter A string1  :  ");
        scanf("%[^\n]%*c", string1);
        printf("Enter A string2  :  ");
        scanf("%[^\n]%*c", string2);
        printf("Enter A string3  :  ");
        scanf("%[^\n]%*c", string3);

        int ptr=0 , ptr2 =0;

        while(string1[ptr2] != '\0'){
            if(string1[ptr2] != string2[0] ){
                ans[ptr] = string1[ptr2];
                ptr++;
                ptr2++;
            }
            else{
                int ch=1 , dumi =ptr2;
                for (int j = 0; string2[j] != '\0'; j++)
                {
                    if (string1[ptr2+j] != string2[j])
                    {
                        ch = 0;
                        break;
                    }
                    dumi++;

                }
                if(ch){
                    ptr2 = dumi;
                    for (int j = 0; string3[j] != '\0' ; j++)
                    {
                        ans[ptr] = string3[j] ;
                        ptr++;
                    }

                }

                else{
                    ans[ptr] = string1[ptr2];
                    ptr++;
                    ptr2++;
                }

            }
        }

        ans[ptr] = '\0';

        printf("ans string is %s \n\n", ans);

    */

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int i, j, num;

    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++)  
            printf(" ");

        int printed = 0;
        num = 53;

        while(printed < n - i) {
            int c = 0;
            for(j = 1; j <= num; j++) {
                if(num % j == 0)
                    c++;
            }
            if(c == 2) {  
                if(printed == 0 && i > 0) {
                    int skip = i;
                    int k;
                    for(k = 0; k < skip; k++) {
                        num++;
                        while(1) {
                            int count = 0, x;
                            for(x = 1; x <= num; x++)
                                if(num % x == 0)
                                    count++;
                            if(count == 2)
                                break;
                            num++;
                        }
                    }
                }
                printf("%d ", num);
                printed++;
            }
            num++;
        }

        printf("\n");
    }

    return 0;
}


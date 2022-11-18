#include<stdio.h>
#include<math.h>

int main(void){
    int number = 0;
    scanf("%d",&number);
    int a = number ;
    int shomare = 0;
    int dahi = 1;
    int count = 0;
    int sefri = 0;
    while (a > 0 ){
        int tavan = pow(10,dahi) ;
        printf("tavan is : %d\n ",tavan);
        shomare = number % tavan ;
        printf("shomare is : %d\n",shomare);
        printf("dahi is : %d\n",dahi);
        int check = 7 * (pow(10,sefri)); 
        int check2 = 8 * (pow(10,sefri)) ;
        if ( shomare >= check && shomare < check2 ){
            count += 1; 
        }
        a /= 10;
        printf("a is :%d\n",a);
        dahi += 1 ;
        printf("dahi is : %d\n",dahi);
        puts("");
        sefri += 1;
    }
    printf("%d",count);
}
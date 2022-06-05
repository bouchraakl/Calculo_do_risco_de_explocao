#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1 , temp2 ;

    printf("Insira a temp 1 :");
    scanf("%f" , &temp1);
    printf("Insira a temp2 :");
    scanf("%f" , &temp2);

    if (temp1<30){
        printf("Sistema sem risco de explosao \n");
        }
        else{
            if(temp1>=30 && temp2<=40){
                printf("sistema em seguranca\n");
            }
            else{
                if (temp1>40 && temp2<=50){
                    printf("sistema com temp alta\n");
                }
                else{
                    if (temp1>50 && temp2<=60){
                        printf("sistema em temp critica\n");
                    }
                }
            }
        }
    return 0;
}

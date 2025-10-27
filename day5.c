#include<stdio.h>

int main(){

int age,health, gender;

printf("enter your age and your health(healthy=1/unhealthy=0): \n");
scanf("%d%d",&age,&health);

printf("your gender in integers(1 0r 2), (M=1/F=2): \n");
scanf("%d",&gender);

printf("your age: %d\n",age);

printf("gender=%d\n",gender);

if(health>0){
    printf("health = healthy\n");}
else{
    if(health<1){
        printf("health = unhealthy\n");
    }
}
    
        if(age<25 && health>0){
            printf("premium=5000\n");
        }
        else{
            if(age<25 && health<1){
                printf("premium un avalible\n");
            }
            else{
                if(age>25 && age<40 && health>0){
                    printf("premium=7000\n");
                }
                else{
                    if(age>25 && age<40 && health<1){
                        printf("premium = 9500\n");
                    }
                    else{
                        if(age>=40 && age<60 && health>0){
                            printf("premium =10000\n");
                        }
                        else{
                            if(age>40 && age<60 && health<1){
                                printf("premium = 13000\n");
                            }
                            else{
                                if(age>=60 && health>0){
                                    printf("premium = 15000");
                                }
                                else{
                                    if(age>=60 && health<1){
                                        printf("your not elagible for premium\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    






return 0;
}

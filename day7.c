#include<stdio.h>

int main(){



    int condition=0,balance=10000,amount=0,wa=0;
    int bonus=0;

    do{
       printf("\npress: 1.deposite money\n");
       printf("       : 2.withdrawl money\n");
       printf("       : 3.check balance\n");
       printf("       : 4.exit\n");
    
        printf("select an option between 1,2,3 and 4 \n");
        scanf("%d",&condition);



        if(condition==1 ){
            printf("enter the amount you want to deposit: \n");
            scanf("%d",&amount);
            balance= balance+ amount;
            printf("current balance: %d\n",balance);
        if(amount>25000){
           bonus=amount /100;
           balance=balance + (bonus);
           printf("bonus of %d has been debited to ur balance\n",bonus); 
        }

         printf("servise charges rs 5 have been deducted from balance\n");
         balance=balance-5;
         printf("updated balance: %d\n",balance);
        }
        
        if(condition==2){
            printf("enter the amount you want to withdraw: \n");
            scanf("%d",&wa);

            if(wa>balance){
                printf("do not have enough balance: \n");
                printf("current balance in your account:%d\n",balance);
            }
            else{
                balance = balance-wa;
                printf("service charges rs5 have been deducted from your balance\n");
                balance=balance-5;
                printf("the amount of money you have withdrawn: %d\n",wa);
                printf("cureent balance=%d\n",balance);
            }
        }
        if(condition==3){
            printf("BALANCE = RS %d\n",balance);
        }}while(condition!=4);

        printf("thank u for using our banking services \n");

        return 0;
     }
    
    
    
            

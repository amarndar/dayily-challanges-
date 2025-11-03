#include<stdio.h>
int main(){

    int nc,x,ni,p,y;
    int ic,q;
    int tots,total=0;
    double grand_total = 0.0,cust_total=0;
    

    printf("\nenter the total no of customers: ");
    scanf("%d",&nc);

    for(x=1;x<=nc;x++){

        printf("\n------main menu---------");
        printf("\n 1.sand witch : 80 ");
        printf("\n 2.burger     : 120");
        printf("\n 3.pizza slice: 150");
        printf("\n 4.coffee     : 60 ");
        printf("\n 5.juice      : 50 ");
        printf("\n--------------------------");

        printf("\n---customer%d---",x);
        printf("\nenter the no of iteams: ");
        scanf("%d",&ni);

        for(y=1;y<=ni;y++){
            printf("\n for iteam no %d \n",y);
            printf("\n enter the iteam code: ");
            scanf("%d",&ic); 
            printf("\nenter the quantity: ");
            scanf("%d",&q);

            if(ic==1){
                tots = 80*q;
                printf("\n sand witch x %d = %d",q,tots);
            }
            else{
                if(ic==2){
                tots = 120*q;
                printf("\n burger x %d = %d",q,tots);
            }
            else{
                if(ic==3){
                tots = 150*q;
                printf("\n pizza slice x %d = %d",q,tots);
            }
            else{
                if(ic==4){
                tots = 60*q;
                printf("\n coffee x %d = %d",q,tots);
            }
            else{
                if(ic==5){
                tots = 50*q;
                printf("\n juice x %d = %d",q,tots);
            }
            }
            }
            }

            }
            total=total+tots;
             
        }   
            printf("\ntotal for customer %d: %d",x,total);

            if(total>=500){
                printf("\n with 10%% discount");
                cust_total= total - (total*0.1);
                printf("\ncustomer %d total: %0.2f",x,cust_total);
            }
            else{
                cust_total = total;
                printf("\ncustomer %d total: %0.2f",x,cust_total);
            }
                 grand_total=grand_total + cust_total;

    }
     

            printf("\n grand total of todays sales : %0.2f",grand_total);
            printf("\n-----------------------------------------\n");
        





    return 0;
}

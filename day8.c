#include<stdio.h>

int main() {

    int nc,i,x,p;
    int price=0,q=0,fb=0;
    float tip=0,avg=0;

    printf("enter the number of customers: \n");
    scanf("%d",&nc);

    
    for(x=1;x<=nc;x++){
        printf("\nFOR CUSTOMER: %d",x);
        printf("\nenter the number of iteams: ");
        scanf("%d",&i);
        printf(" \n");

        for(p=1;p<=i;p++){
            printf("\nenter the price of item : %d\n",p);
            scanf("%d",&price);

            printf("\nenter the quantity: ");
            scanf("%d",&q);

            
            tip = (tip + (price * q ));
            tip = tip + (tip*0.05);

           
        }  
         
        printf("\nfeed back (1--5)\n");
            scanf("%d",&fb);
        
            
            
            

    }  


       printf("the total amount of money earned from customers = %f",tip);
       

           
           

           







    
    return 0;
}

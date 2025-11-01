#include<stdio.h>

int main() {

    int nc,i,x,p;
    int price=0,q=0,fb=0;
     double subtotal = 0.0, cust_gst = 0.0, cust_total = 0.0;
    double tip=0,grand_total = 0.0;

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

            
            subtotal += (double)price * q;
        }
        cust_gst = subtotal * 0.05; 
        cust_total = subtotal + cust_gst;
        grand_total += cust_total;
        
        printf("\n Customer %d BILL \n", x);
        printf("Subtotal : Rs %.2f\n", subtotal);
        printf("gst (5%%) : Rs %.2f\n", cust_gst);
        printf("TOTAL    : Rs %.2f\n", cust_total);
        printf("------------------------\n");
           
        }  
         
        printf("\nfeed back (1--5)\n");
            scanf("%d",&fb);
        
            
            
            

     


       printf("the total amount of money earned from customers = %.2f",grand_total);
       

           
           

           







    
    return 0;
}

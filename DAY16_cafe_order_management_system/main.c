#include<stdio.h>
int main(){

    int c;
    int m[6] = {0,50,30,80,120,60};
    int i,j,x,e,n,k;
    char name[10];
    int bill=0,total = 0,items=0;
    int counts[6]={0};
    const char *item[6] = {"", "coffee", "tea", "sandwich", "burger", "pastry"};

    printf("\n================= CAFE ORDER MANAGEMENT SYSTEM =====================\n");

    printf("enter the no.of customers: \n");
    scanf("%d",&c);

  
     
    for(j=1;j<=c;j++){

        printf("enter your name: \n");
        scanf("%s",&name);

        printf("\n--------------MENUE-------------------\n");

        printf("1.coffee    :50\n");
        printf("2.tea       :30\n");
        printf("3.sandwitch :80\n");
        printf("4.burger    :120\n");
        printf("5.pastry    :60\n");

        printf("\n------------- customer %s (%d) --------------\n",name,j);

        printf("enter the no.of iteams: \n");
        scanf("%d",&n);

        for(i=1;i<=n;i++){

        printf("\nenter the item number and quantity: ");
        scanf("%d%d",&e,&x);

       k = m[e]*x;  bill = bill + k;
       items = items + n;
       counts[e] += x;
    }

       printf("THE TOTAL BILL: %d\n",bill);

       total = total + bill;
   
    }
           
         int most_i= 1;
         int most_c = counts[1];
         for (i = 2; i <= 5; i++) {
         if (counts[i] > most_c) {
            most_c = counts[i];
            most_i = i;
        }
    }

    int least_i = -1;
    for (i = 1; i <= 5; i++) {
        if (counts[i] > 0 && (least_i == -1 || counts[i] < counts[least_i])) {
            least_i = i;
        }
    }

         
        printf("\n====================== cafe SUMMARY =========================\n");
        printf(" TOTAL REVENUE    : %d\n",total);
        printf(" TOTAL ITEAMS SOLD: %d\n",items);
        printf(" MOST ORDERD ITEM : %s\n",item[most_i]);
        printf("LEASt ORDERD ITEM : %s\n",item[least_i]);
        printf("\n--------------------------------------------------------------\n");
        


           
    
    return 0;
}

#include<stdio.h>
int main(){

char product[11][50];
int i,j,k,n,value[11],total=0;
int c,price[11],q[11],big,small;

printf("enter the no.of products: \n");
scanf("%d",&n);

printf("\nthe id of the product will be applied auto_maticaly from (1 to 10)\n");


for(i=1;i<=n;i++){

printf("\nenter the name of the product: ");
scanf("%s",&product[i]);                
printf("\nenter the quantity of the product: ");
scanf("%d",&q[i]);
printf("\nenter the price of the product: ");
scanf("%d",&price[i]);

value[i] = price[i]*q[i];
total = total + value[i];}

big=value[1],small=value[1];

for(k=1;k<=n;k++){

    if(value[k]>big){
        big=value[k];
    }

    if(value[k]<small){
        small=value[k];
    }
}



do{
 printf("\n--------------------------OPTIONS--------------------------\n");
printf("1.the list of all products with their details\n");
printf("2.total inventory value and products with highest and lowest value\n");
printf("3.exit\n");
printf("\n_____________________________________________________________________\n");

printf("\nchoose your options:");
scanf("%d",&c);

if(c==1){

    for(j=1;j<=n;j++){
        printf("\n%d.%s ",j,product[j]);
        printf("QUANTITY: %d ",q[j]);
        printf("PRICE:%d\n",price[j]);
    }
}

if(c==2){
printf("\nTOTAL INVENTORY VALUE: %d",total);
printf("\nHIGHEST VALUE          : %d",big);
printf("\nLOWEST  VALUE          : %d",small);
}




} while(c!=3);
printf("done\n");

    return 0;
}

#include<stdio.h>



int main(){

int q[100][100],p[100][100],i=0,j,n,sv[100];
int tsv=0,k,c,m,tni=0;
int present[100] = {0}; 

do{

  printf("\n--------------------------- MENUE ---------------------------------\n");
  printf("\n1.ADD PRODUCTS");
  printf("\n2.SEARCH PRODUCTS");
  printf("\n3.UPDATE QUANTITY");
  printf("\n4.GENERATE RACK REPORRT");
  printf("\n5.STOCK VALUE");
  printf("\n6.DISPALY ALL PRODUCTS");
  printf("\n7.exit");
  printf("\n________________________________________________________________________\n");

  printf("\noption: ");
  scanf("%d",&c);

  if(c==1){
   printf("\nenter  the no.of iteams : ");
   scanf("%d",&n);
  
  for(j=1;j<=n;j++){
    printf("\n-------------------------------------------------");
    printf("\nenter the id:");
    scanf("%d",&i);
  
  printf("\nfor product [%d] \n",i);
  printf("------------------------------------\n");
  printf("\nenter the quantity: ");
  scanf("%d",&q[i][j]);
  printf("\nenter the price: ");
  scanf("%d",&p[i][j]);
  tni++;
  sv[i] = p[i][j] * q[i][j];
  tsv = tsv + sv[i];
  }
}

if(c==2){
  printf("\nenter the id of the product: ");
  scanf("%d",&i);
  printf("\nId  quantity price stock value\n");
  printf("___________________________________");
  printf("\n%d     %d       %d         %d",i,q[i][i],p[i][i],sv[i]);

}

if(c==3){
  printf("\nenter the id of the product that you want to change:");
  scanf("%d",&i);

  printf("\nenter new quantity: ");
  scanf("%d",&q[i][i]);

  while (q[i][i] < 0) {
    printf("\ninvalid number. quantity must be non-negative\n");
    printf("\nenter new quantity: ");
    scanf("%d",&q[i][i]);
  }

  tsv -= sv[i];                 
  sv[i] = p[i][i] * q[i][i];    
  tsv += sv[i];                 

  printf("\nNEW stock for product[%d]: %d\n", i, q[i][i]);
}

if(c==4){
int max,min;
max=q[1][1],min=q[1][1];
for(j=1;j<=n;j++){
  if(q[j][j]>max){
    max = q[j][j];
    m=j;
  }
  if(q[j][j]<min){
    min = q[j][j];
    k=j;
  }
}
printf("\nthe max stock is the produck(ID  = %d): %d",m,max);
printf("\nthe min stock is the produck(ID  = %d): %d",k,min);
printf("\ntotal no.of iteams across racks:%d \n",tni);
}

if(c==5){
  printf("\nSTOCK VALUE OF ALL PRODUCT IN THE INVENTORY: ");
  for(j=1;j<=n;j++){
    printf("\nfor product of id(%d): %d",j,sv[j]);
  }
   int big,small;
   big=sv[1],small=sv[1];

   for(i=1;i<=n;i++){

  if(sv[i]>big){
    big = sv[i];
  }
  if(sv[i]<small){
    small = sv[i];
  }
}
printf("\n--------------------------------------------");
printf("\nthe maximum amount of stock:%d",big);
   printf("\nthe minimum amount of stock: %d",small);
   printf("\n--------------------------------------------");
   printf("\ntotal stock value of the whole inventory:%d ",tsv);
}
if(c==6){
  printf("\nId | quantity|price|stock|value\n");
  printf("___________________________________");
for(i=1;i<=n;i++){
  printf("\n%d  |   %d     |  %d      |   %d",i,q[i][i],p[i][i],sv[i]);
}
}

}
  while(c!=7);
  return 0;
}

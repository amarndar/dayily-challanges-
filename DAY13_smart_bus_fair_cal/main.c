#include<stdio.h>
int main(){
    
    int age,pass,distance,tr_ti;
    int i,fare,base=0;
    float hf=0,lf=0;
    
    float discount,fi_fa=0,super=0,tfd=0;

    printf("enter the no.of passeners: \n");
    scanf("%d",&pass);

    for(i=1;i<=pass;i++){



      printf("\nenter age: ");
      scanf("%d",&age);

      printf("\nenter distance (in km): ");
      scanf("%d",&distance);

      printf("\nenter travel time(24hr format): ");
      scanf("%d",&tr_ti);
    
      base = distance*10;
      
      
      printf("--------- passenger %d------------",i);
      printf("\n_____________________________________\n");
      
      if(base>20){

        if(age<=12 ){
            printf("\nbase fare:%d",base);
            discount = base*0.5;
            fare = base - discount;
            printf("\n discount (50%%) has been applied: %0.2f",discount);
        }
       
        
        if(age>=60){
             printf("\nbase fare:%d",base);
            discount = base*0.3;
            fare = base - discount;
            printf("\n discount (30%%) has been applied: %0.2f",discount);
        }

        if(age>12 && age<60){
             printf("\nbase fare:%d",base);
            discount = base*0;
            fare = base - discount;
            printf("\n discount (0%%) has been applied: %0.2f",discount);}
             
        if(tr_ti>=8 && tr_ti<=10){
            super = fare*0.2;
            printf("\n20%% super has been applied: %0.2f",super);
            fi_fa=fare + fare*0.2;
            printf("\n final fare: %0.2f",fi_fa);

        }
        if(tr_ti>=17 && tr_ti<=20){
            super = fare*0.2;
            printf("\n20%% super has been applied: %0.2f",super);
            fi_fa=fare + fare*0.2;
            printf("\n final fare: %0.2f",fi_fa);
    }
    if(tr_ti>10 && tr_ti<17){
            
            printf("\n0%% super has been applied: %0.2f",super);
            fi_fa=fare ;
            printf("\n final fare: %0.2f",fi_fa);
    } 
   }
   else{
    if(base<=20){
        printf("\nsince you are paying the minimum fare");
        printf("\nfinal fare: 20");
    }
   }

  

   

tfd=tfd+fi_fa;

}
 if(fi_fa>hf){
    hf = fi_fa;
   }
   if(fi_fa<lf){
    lf = fi_fa;
   }
    
    printf("\n============ DAILY SUMMARY ============");
    printf("total passengers: %d\n",pass);
    printf("\nHighest fare paid: %.2f\n", hf);
    printf("Lowest fare paid : %.2f\n", lf);
    printf("total fair collections of the day : %0.2f\n",tfd);

   

return 0 ;}

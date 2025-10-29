#include<stdio.h>

int main(){

int tds,student,CU;
int ed;
float edd,edd1,edd2,tdc1,tdc,t1,t2;

printf("enter your total data usage: \n");
scanf("%d",&tds);

printf("Are you a student? (1 for yes,0 for no): \n");
scanf("%d",&student);

printf("Are you a corperate user? (1 for yes,0 for no)\n");
scanf("%d",&CU);

ed = tds - 60;
edd = ed * 30; 
edd1 =tdc * 0.15;
edd2= tdc * 0.1;
tdc = 799 + edd;
t1 = (tdc - edd1);
t2 = (tdc - edd2);



printf("data usage: %d\n",tds);

if(tds<=30 && student<1 && CU<1){
    printf("selected plan = Silver\n");
    printf("Base cost: 299\n");}
else{
    if(tds<=30 && student>0){
        printf("selected plan: silver\n");
        printf("base cost: 299\n");
        printf("discount applied: 15%\n");
        printf("final bill=254\n");
    }
    else{
         if(tds<=30 && CU>0){
        printf("selected plan: silver\n");
        printf("base cost: 299\n");
        printf("discount applied: 10%\n");
        printf("final bill=269.1\n");
    }
    else{
        if(tds>30 && tds<=60 && student<1 && CU<1){
        printf("selected plan = gold\n");
        printf("Base cost: 499\n"); 
    }
    else{
         if(tds>30 && tds<=60 && student>0){
        printf("selected plan: gold\n");
        printf("base cost: 499\n");
        printf("discount applied: 15%\n");
        printf("final bill= 424.15\n");
    }
    else{
         if(tds>30 && tds <=60 && CU>0){
        printf("selected plan: gold\n");
        printf("base cost: 499\n");
        printf("discount applied: 10%\n");
        printf("final bill= 449.90\n");
    }
    else{
         if(tds>60 && student<1 && CU<1){
         printf("selected plan = platnium\n");
         printf("Base cost: 799\n");
        }
           else{
             if(tds>60 && student>0){
            printf("selected plan: platnium\n");
            printf("base cost: 799\n");
            printf("extra data used: %d\n",ed);
            printf("discount applied: 15%\n");
            printf("final bill(before 15 discount): %0.2f\n",tdc);
           }
           else{
             if(tds>60 && CU>0){
            printf("selected plan: platnium\n");
            printf("base cost: 799\n");
            printf("extra data used: %d\n",ed);
            printf("discount applied: 10%\n");
            printf("final bill(before 10 discount): %0.2f\n",tdc);
           }
           else{
            if(tds>=100){
                printf("the plan for this much data usage is not found\n");
            }
           }
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
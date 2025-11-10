#include<stdio.h>
int main(){

    int i,y,n,s,c;
    int days,code;
    int g,w,b;
    int bs_fa=0;
    int t,t1,t2,t3,sc;
    float discount=0,gst=0,ft=0,tr=0,lf=9999,hf=0;

    printf("enter the no.of customers: \n");
    scanf("%d",&c);

    for(i=1;i<=c;i++){

    printf("\n--------AVALIBE ROOMS---------\n");
    printf("1.Delux room   : 2500\n");
    printf("2.Super Delux  : 4000\n");
    printf("3.suite room   : 6000\n");
     
    printf("\nselect the room(1,2,3)that you want to stay in: ");
    scanf("%d",&code);

    printf(" enter the no.of days you want to stay: \n");
    scanf("%d",&days);

    printf("\n----------- ADDITIONAL SERVICES ------------\n");
    printf("1.Break fast    : 300 perday\n");
    printf("2.Wi-Fi         : 100 perday\n");
    printf("3.Gym Access    : 200 perday\n");

    printf("\n break fast(y=1,n=0): \n");
    scanf("%d",&b);
    printf(" Wi-Fi       (y=1,n=0): \n");
    scanf("%d",&w);
    printf(" Gym Access  (y=1,n=0): \n");
    scanf("%d",&g);

    if(code==1){
        bs_fa = days*2500;
    }
     if(code==2){
        bs_fa = days*4000;
    }
     if(code==3){
        bs_fa = days*6000;
    }

     if(b==1){
        t1 = days*300;
    }
    else{ 
        if(b==0){
        t1 = 0;
    }
        }
        if(w==1){
        t2 = days*100;
    }
    else{ 
        if(w==0){
        t2 = 0;
    }
        }
        if(g==1){
        t3 = days*200;
    }
    else{ 
        if(g==0){
        t3 = 0;
    }
        }
        
        sc = t1 + t2 + t3;
        t = bs_fa + sc;
        gst = t*0.12;
        if(t>=10000){
            discount = t*0.1;
        }
        else{
            if(t<10000){
                discount = 0;
            }
        }
        
        
        ft = t+gst-discount;
        tr = tr + ft;

     printf("\n---------- CUSTOMER %d-------------\n",i);
     printf("Base fare: %d\n",bs_fa);
     printf("Additional servics: %d\n",sc);
     printf("discount: %0.2f\n",discount);
     printf("GST(12%%): %0.2f\n",gst);
     printf("\nGRAND TOTAL : %0.2f\n",ft);
     printf("_________________________________________________\n");

    

    }

    if(ft>hf){
    hf = ft;
   }
   if(ft<lf){
    lf = ft;
   }
   i=i-1;
    printf("\n============= HOTEL SUMMARY ==================\n");
    printf("Total Rooms Booked: %d\n",i);
    printf("TOTAL REVENUE     : %0.2f\n",tr);
    printf("Highest bill      : %0.2f\n",hf);
    printf("lowest bill       : %0.2f\n",lf);
    printf("===================================================\n");


    return 0;
}

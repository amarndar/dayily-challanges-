#include<stdio.h>

int main(){

    int s,p;
    int x,ele=0,not_ele=0;
    double ap=0,sum=0;
    const int total = 30;



    printf("\nenter the nof students in the class: ");
    scanf("%d",&s);

    for(x=1;x<=s;x++){

         printf("\nenter the attendence of student %d (out of %d): ",x,s);
         scanf("%d",&p);

          ap = (double)p * 100.0 / total;
          sum=sum+ap;

        printf("\nthe attendence percentage for student %d : %0.2f",x,ap);

        if(ap>=75){
            printf(" student %d:--eligible\n",x);  
            ele++;
        }
        else{
            if(ap<75){
                printf(" student %d:--not eligible\n",x);
                not_ele++;
            }
        }
                
    }
     sum = sum/s;

        printf("\nclass summary: \n");
        printf("the total no.of studends: %d\n",s);
        printf("no.of elegibe students: %d\n",ele);
        printf("no.of non_elegibe students: %d\n",not_ele);
        printf("\nthe average attendece of all the studentds: %0.2f\n",sum);
        printf("------------------------------------------------------------\n");
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;

}
#include<stdio.h>

int main() {
    int s1,s2,s3,s4,s5;
    float attendence;
    float tp,contp;


    printf("enter the marks that u got in each subject: ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    printf("enter the attendence percentage of the total sem: ");
    scanf("%f",&attendence);

    tp=((s1+s2+s3+s4+s5)/5);
    contp=tp+5;

    printf("total percentage: %f\n",tp);
    printf("Attendence: %f\n",attendence);

    
    if(tp>=90){
        printf("your grade: A\n");
        printf("remarks: excellent\n");
    }
   
    else{
        if(tp>=80){
            printf("your grade: B\n");
            printf("remark:very good\n ");
        }
        else{
            if(tp>=70){
                printf("your grade: C\n");
                printf("remarks: good\n");
            }
            else{
                if(tp>=60){
                    printf("your grade: D\n");
                    printf("remarks: average\n");
                }
                else{
                    if(tp>=50){
                        printf("your grade: E\n");
                        printf("remarks: pass\n");
                    }
                    else{
                        if(tp<50){
                            printf("your failed: F\n");
                        }
                    }
                }
            }
        }
    }
 if(attendence<75){
    printf("you have failed due to low attendence");
 }
 
 else{
    if(attendence>90 && tp<50){
        printf("total marks due to high attendence: %f\n",contp);
        printf("your grade: D\n");
        printf("remarks: keep trying u will get there nevergive up\n");
    }
 }

 return 0;

}

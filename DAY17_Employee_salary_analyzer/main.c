#include<stdio.h>
int main(){

    char name,rn,section;
    int c,e,i,sa[10],j=0;
    int k,l=0,total=0,big=0,small=99999,above=0,below=0;
    float avg;

    
        printf("\nenter  name: ");
        scanf("%s",&name);

        printf("\nenter registration number: ");
        scanf("%s",&rn);

        printf("\nenter section: ");
        scanf("%S",&section);

        printf("\nenter the no.of employes: ");
        scanf("%d",&e);

        printf("\nenter the salaries of employees: \n");

        for(i=0;i<e;i++){
           j++;
          printf("%d.",j);
          scanf("%d",&sa[i]);
          printf("\n");
         total = total + sa[i];
        }

       do{ printf("\n====================MENUE====================\n");
        printf("1.display all salaries\n");
        printf("2.display total and average salaries\n");
        printf("3.display highest and lowest salaries\n");
        printf("4.count above and below average\n");
        printf("5.display stored salaries: \n");
        printf("6.exit\n");
        printf("\n_______________________________________________\n");

        printf("\nenter your choice: ");
        scanf("%d",&c);

        if(c==1 || c==5){
            for(k=0;k<e;k++){
                l++;
                printf("\n%d.%d\n",l,sa[k]);
            }
        }

        if(c==2){
            printf("TOTAL OF ALL SALARIES: %d\n",total);
            avg = total/e;
            printf("AVERAGE OF ALL THE SALARIES: %0.2f\n",avg);
        }

        if(c==3){

           int big=sa[0],small=sa[0];

            for(k=0;k<e;k++){
                if(sa[k]>big){
                    big=sa[k];
                }
                
                if(sa[k]<small){
                    small=sa[k];
                }
            }
            printf("HIGHEST SALARY : %d\n",big);
            printf("LOWEST SALARY  : %d\n",small);
        }
        if(c==4){

             avg = total/e;
             printf("AVERAGE: %0.2f\n",avg);

            for(k=0;k<e;k++){
                if(sa[k] > avg) above++;
                else if(sa[k] < avg) below++;
                
            }
             printf("ABOVE AVERAGE: %d\n", above);
             printf("BELOW AVERAGE: %d\n", below);
        }

    }while(c!=6);
    printf("\nthank your \n");

    return 0;
}

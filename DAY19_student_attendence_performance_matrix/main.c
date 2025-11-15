#include<stdio.h>
int main(){

int c,i,j,k,l,n,m,number,t,y,s;
int big,small,ab[6]={0},pr[6]={0};
int a[6][6]={0};
int hig,low;


int marks[6][6]={0},tm[6];
float avg[6]={0.0f};
char sn[6][50]={{0}},grade[6][10]={{0}};

for(k=1;k<=5;k++){
     printf("\nenter the name of student(%d): ",k);
     scanf("%s",&sn[k]);
     printf("\n--------------------------------------------------");
}
  for(i=1;i<=5;i++){ tm[i]=0;
    printf("\nenter the marks for student(%s) \n",sn[i]);
    for(j=1;j<=5;j++){
        printf("\nenter the marks for sub(%d) out of 100: ",j);
        scanf("%d",&marks[i][j]);

        tm[i] = tm[i]+marks[i][j];
    }
        avg[i]=tm[i]/5;
  }
   
  big = tm[1],small = tm[1];

 for(n=1;n<=5;n++){
if(tm[n]>big){
  big=tm[n];
}
if(tm[n]<small){
  small=tm[n];
}
  }

  for(l=1;l<=5;l++){
     printf("\nenter the attendence of student(%s) for each subject (1=present,0=absent)\n",sn[l]);
     for(m=1;m<=5;m++){
        printf("\nenter the attendence for sub(%d): ",m);
        scanf("%d",&a[l][m]);
        printf("\n------------------------------------------------------------------------------------------------\n");
        if(a[l][m]==0){
            ab[l]++;
        }
        if(a[l][m]==1){
            pr[l]++;
        }
     }
}
    hig = pr[l],low = pr[l];

    for(n=1;n<=5;n++){

    if(pr[n]>hig){
   hig=pr[n];
   }
   if(pr[n]<low){
   low=pr[n];
   }

  }

  for (s = 1; s <= 5; s++) {
        if (avg[s] >= 90) {
            sprintf(grade[s], "A++");
        } else if (avg[s] >= 80) {
            sprintf(grade[s], "A");
        } else if (avg[s] >= 70) {
            sprintf(grade[s], "B");
        } else if (avg[s] >= 60) {
            sprintf(grade[s], "C");
        } else if (avg[s] >= 50) {
            sprintf(grade[s], "D");
        } else {
            sprintf(grade[s], "F");
        }
    }

  do{

    printf("\n==================menue=================\n");
    printf("\n 1.attendence matrix");
    printf("\n 2.marks report"); 
    printf("\n 3.attendence report");
    printf("\n 4.performance report");
    printf("\n 5.grade report");
    printf("\n 6.exit");
    printf("_______________________________________________\n");

    printf("your choice: \n");
    scanf("%d",&c);

    if(c==1){
      for(t=1;t<=5;t++){
        printf("student %s attendence: \n",sn[t]);
        for(y=1;y<=5;y++){
          printf("sub(%d): %d\n",y,a[t][y]);
          printf("\n-----------------\n");
      }
    }
    }

     if(c==2){
      for(t=1;t<=5;t++){
        printf("student %s marks: \n",sn[t]);
        for(y=1;y<=5;y++){
          printf("sub(%d): %d\n",y,marks[t][y]);
          printf("\n--------------\n");
      }
    }
    }

     if(c==3){
      for(t=1;t<=5;t++){
      printf("\n--------------------------------------------------\n");
      printf("total classes attended by %s : %d\n",sn[t],pr[t]);
      printf("total classes absent   by %s : %d\n",sn[t],ab[t]);
      printf("\n--------------------------------------------------\n");
    }
     printf("highest attendence: %d\n",hig);
     printf("lowest attendence : %d\n",low);
    }

    if(c==4){
      for(t=1;t<=5;t++){
        printf("avg marks of %s : %0.2f\n",sn[t],avg[t]);
    }
    printf("highest performance: %d\n",big);
    printf("lowest performance : %d\n",small);
  }

    if(c==5){
      for(t=1;t<=5;t++){
        printf("\nstudent %s grade: ",sn[t]);
        printf("%s\n",grade[t]);
        printf("\n--------------------------------------------------\n");
    }
    }

  }while(c!=6);
  printf("\nexit\n");

  



  

   

  
  
   

  



    return 0;
}

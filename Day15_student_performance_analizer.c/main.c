 #include<stdio.h>

  int main(){

       int marks[999],i,x;
       float avg;
       int s,j=0,sum=0;
       int max=50 ,min=50;
       int a=0,b=0,c=0,d=0,f=0,e=0,passed=0,failed=0;

       printf("enter the no.of students: \n");
       scanf("%d",&s);

    

       for(i=0;i<s;i++){

        j=j+1;
        printf("\nenter the marks of student %d : ",j);

        scanf("%d",&marks[i]);
        sum+=marks[i];

       } 
    
         avg = sum/s;

         for(x=0;x<s;x++){

         if(marks[x]>=90){
        a++;
            }
    
     else{
        if(marks[x]>=80){
            b++;
        }
        else{
            if(marks[x]>=70){
                c++;
            }
            else{
                if(marks[x]>=60){
                    d++;
                }
                else{
                    if(marks[x]>=50){
                        e++;
                    }
                    else{
                        if(marks[x]<50){
                            f++;
                        }
                    }
                }
            }
        }
    } }
    
         passed = a+b+c+d+e;
         failed = f;

         for(i=0;i<s;i++){
         if(marks[i]>max){
          marks[i] = max;
         }
         if(marks[i]<min){
          marks[i] = min;
        } }
       printf("\n================= RESULT SUMMARY ====================\n");

       printf("\nAVERAGE MARKS :%0.2f\n",avg);
       printf("highest marks :%d\n",max);
       printf("lowest marks  :%d\n",min);

       printf("\nthe students who have passed: %d\n",passed);
       printf("the no.of failed            : %d\n",failed);

      printf("\n----------GRADE DISTRIBUTION ---------------\n");

       printf("\nA: %d\n",a);
       printf("B: %d\n",b);
       printf("C: %d\n",c);
       printf("D: %d\n",d);
       printf("E: %d\n",e);
       printf("F: %d\n",f);
       
    

    

    return 0;
}

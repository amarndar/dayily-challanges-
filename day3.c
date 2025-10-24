#include<stdio.h>
 int main() {

float unit,total;

printf("enter the no.of units being sold: \n");
scanf("%f",&unit);

if(unit<=100){
    total=unit*3;
}
else if(unit<=200){
    total= (100*3)+ ((unit-100)*4.5);
}
else if(unit<=300){
    total=100*3 + 200*4.5 + ((unit-200)*6);
}

else if(unit>300){
    total=100*3 + 200*4.5 + 300*6 +((unit-300)*8);
}

printf("your total comes out to: %0.2f",total );
return 0;

}
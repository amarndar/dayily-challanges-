#include<stdio.h>

int main(){
  float mealcost,tax,tip,total_meal_cost;
  
  float me,friend_1;

  printf("enter the cost of the meal:  ");
  scanf("%f",&mealcost);

  tax=0.05 * mealcost;
  tip=0.1 * mealcost;

  total_meal_cost=mealcost+tax+tip;

 me=total_meal_cost/2;

 friend_1=total_meal_cost/2;
 

  printf("the total bill=%f\n",total_meal_cost);
  printf("each person paying as follows: \n");
  
  printf("my bill: %f\n",me);
  printf("friend1s bill: %f\n",friend_1);
  printf("friend2s bill: 0\n");

  return 0;

}
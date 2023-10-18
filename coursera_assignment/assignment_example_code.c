#include <stdio.h>
#include <stdlib.h>

// Define typedef struct
struct example_struct {
  int savings;
  double clothes_food_budget;
  double increase_rate;
};
// refer the struct with a different name
typedef struct example_struct monthly_expense;


/* 
 * Determines if monthly expense exceed salary
 * Print warnings
 */
int isWithinbudget(double salary, monthly_expense expense) {
  // if expense is within salary range
  if (salary > expense.food_budget + expense.clothes_food_budget) {
        printf("hurray");
  }
  // else, return warnings
  else {
    printf("oh no");
  }
}

/* 
 * A while loop for each month with salary and expense
 */
double forcast_savings(int total_months, double initial_salary, double salary_raise, int intial_savings, monthly_expense expense) {
  while (total_months) {
      printf("At month %2d salary $%.2lf expense $%.2lf savings $%.2lf", total_months, initial_salary, expense.clothes_food_budget, initial_savings);
      initial_savings = initial_savings + expense.savings;
      initial_salary = initial_salary * salary_raise;
      expense.clothes_food_budget = expense.clothes_food_budget * expense.increase_rate;
      total_months -= 1;
    }
  return initial_savings
}

     

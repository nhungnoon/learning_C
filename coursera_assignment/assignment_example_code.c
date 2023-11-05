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


// returns a pointer to the largest element in the array passed in

int * arrayMax(int * array, int n) {
        if (n == 0) {
             return NULL;
        }
        int temp_indice = 0;
        for (int i = 1; i < n; i++) {
                if (array[i] > array[temp_indice]) {
                        temp_indice = i;
                }
        }
        return &array[temp_indice];
}

// rever a given string
void reverse(char * str) {
  if (str == NULL || *str == '\0') {
    return;
  }
  size_t i;
  size_t str_len = strnlen(str, 100);
  char copy_str[100];

  for (i = 0; i < str_len && str[i] != '\0'; i++)
    copy_str[i] = str[str_len-i-1];
  copy_str[str_len] = '\0';
  
  
  for (i = 0; i < str_len && copy_str[i] != '\0'; i++)
    str[i] = copy_str[i];
  str[str_len] = '\0';
}

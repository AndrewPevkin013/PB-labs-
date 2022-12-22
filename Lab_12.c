#include <stdio.h>

int main() {
  int month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int i = 1, st = 0;
  int mon, day, year, n; 

  FILE* output = fopen("answer.txt", "w");

  printf("Day: ");
  scanf("%d", &day);
  printf("Month: ");
  scanf("%d", &mon);
  printf("Year: ");
  scanf("%d", &year);
  printf("Number of days: ");
  scanf("%d", &n);

  st = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
  while (i <= n)
  {
    if (day + 1 > month[mon] + (st == mon == 2))
    {
      if (mon + 1 > 12)
      {
        mon = 1;
        year += 1;
        st = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
      }
      else
      {
        mon += 1;
        year = year;
      }
      day = 1;
    }
    else
      day += 1;

    fprintf(output, "%02d.%02d.%4d\n", day, mon, year);
    i += 1;
  }
  fclose(output);
  return 0;
}

#include <stdio.h>


int search_len(char *str1, char *str2, int k) {
  for (int i = 0; i < 10; i++)
    if (str2[i] == str1[0] || str2[i] == str1[1])
      str2[i] = '$';
  for (int i = 0; i < 10; i++)
    if (str2[i] != '$')
      k++;
  return k - 1;
}


int main() {

  //3адания 1 (2) и 3 (6)
  char str1[] = { "qwerty" };
  char str2[] = { "swerty" };
  char str3[12]{0};
  
  int k = 0, n;
  for (int i = 0; i < 6; i++) {
    str3[i] = str1[i];
  }
  scanf(" %d", &n);
  //Осуществление копирования и сложения первых n символов
  for (int i = 0; i < n; i++) {
    str3[i+6] = str2[i];
  }
  printf("%s \n", str3);
  printf("\n");

  //3аданиу 2 (3)
  char str4[] = { "qwefly" };
  char str5[] = { "swefly" };
  char str6[] = { "qwefly" };

  //Сравнение строк
  for (int i = 0; i < 6; i++)
  {
    k += 1;
    if (str4[i] != str5[i]) {
      printf("Nope \n");
      break;
    }
    else if(k == 6)
      printf("Yup \n");
  }
  k = 0;
  printf("\n");

  for (int i = 0; i < 6; i++)
  {
    k += 1;
    if (str6[i] != str4[i]) {
      printf("Nope \n");
      break;
    }
    else if (k == 6)
      printf("Yup \n");
  }
  k = 0;

  printf("\n");

  //3адание 4 (9)
  char str7[] = { "mathematics" };
  char sym;
  scanf("%c", &sym);
  int j = sizeof(str7);
  //Поиск последнего вхождения элемента
  for (int i = j; i > 0; i--) {
    k += 1;
    if (sym == str7[i])
    {
      printf("The last \"Sym\" on the %d position \n", j - k + 2);
      break;
    }
    else if (k == j)
      printf("Not found\n");
  }
  printf("\n");
  k = 0;

  //3адание 5 (12)
  //Определение длины отрезка одной строки, не содержащей символов второй строки
  char str8[3] = "oe";
  char str9[] = {"poelsupalya"};

  printf("%d", search_len(str8, str9, k));

  return 0;
}

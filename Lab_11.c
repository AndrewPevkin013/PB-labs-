nclude <stdio.h>
#include <math.h>

struct Tr {
  int x1, y1;
  int x2, y2;
  int x3, y3;

};

int sqr(int num) {

  return num * num;
}

float S(struct Tr *tr) {
  return sqrt(sqr(tr->x1 - tr->x2) + sqr(tr->x1 - tr->x3) + sqr(tr->x3 - tr->x2) + sqr(tr->y1 - tr->y2) + sqr(tr->y1 - tr->y3) + sqr(tr->y3 - tr->y2));
}

float P(struct Tr *tran) {
  float a, b, c;
  a = sqrt(abs(sqr(tran->x1 - tran->x2) + sqr(tran->y1 - tran->y2)));
  b = sqrt(abs(sqr(tran->x1 - tran->x3) + sqr(tran->y1 - tran->y3)));
  c = sqrt(abs(sqr(tran->x3 - tran->x2) + sqr(tran->y3 - tran->y2)));
  return a + b + c;
}

int main() {
  struct Tr tran;

  printf("Write: x1 y1, x2 y2, x3 y3\n");
  scanf_s("%d %d", &tran.x1, &tran.y1);
  scanf_s("%d %d", &tran.x2, &tran.y2);
  scanf_s("%d %d", &tran.x3, &tran.y3);

  float s = S(&tran);
  float p = P(&tran);
  printf("%f\n", s);
  printf("%f\n", p);

  return 0;
}

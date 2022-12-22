#include <stdio.h>
#include <math.h>

struct Tr {
  int x1, y1;
  int x2, y2;
  int x3, y3;

};

float S(struct Tr tr) {
  return sqrt((tr.x1 - tr.x2) * (tr.x1 - tr.x2) + (tr.x1 - tr.x3) * (tr.x1 - tr.x3) +
    (tr.x3 - tr.x2) * (tr.x3 - tr.x2) + (tr.y1 - tr.y2) * (tr.y1 - tr.y2) + (tr.y1 - tr.y3) * (tr.y1 - tr.y3) + (tr.y3 - tr.y2) * (tr.y3 - tr.y2));
}

float P(struct Tr tran) {
  float a, b, c;
  a = sqrt(abs((tran.x1 - tran.x2) * (tran.x1 - tran.x2) + (tran.y1 - tran.y2) * (tran.y1 - tran.y2)));
  b = sqrt(abs((tran.x1 - tran.x3) * (tran.x1 - tran.x3) + (tran.y1 - tran.y3) * (tran.y1 - tran.y3)));
  c = sqrt(abs((tran.x3 - tran.x2) * (tran.x3 - tran.x2) + (tran.y3 - tran.y2) * (tran.y3 - tran.y2)));
  return a + b + c;
}

int main() {
  struct Tr tran;

  printf("Write: x1 y1, x2 y2, x3 y3\n");
  scanf_s("%d %d", &tran.x1, &tran.y1);
  scanf_s("%d %d", &tran.x2, &tran.y2);
  scanf_s("%d %d", &tran.x3, &tran.y3);

  float s = S(tran);
  float p = P(tran);
  printf("%f\n", s);
  printf("%f\n", p);

  return 0;
}

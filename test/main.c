#include <stdio.h>

struct point {
int x;
int y;
};

int main() {
  struct point mypoint={3,7};
  struct point *p=&mypoint;
  mypoint->y=98;
  printf("%d",mypoint.y);

    return 0;
}

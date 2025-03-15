#include <stdio.h>

// 構造体（データ型）
struct Fruit {
  char name[128];
  int price;
  int zaiko;
};

struct Student {
  char name[128];
  int age;
  double height;
};

struct Student student[3] = {
  {"Taro", 20, 170.5},
  {"Hanako", 22, 160.5},
  {"Jiro", 21, 180.5}
};

typedef struct {
  char name[128];
  int price;
  int zaiko;
} Fruit2;

int main(void) {
  Fruit2 hoge;

  struct Fruit store = {
    "apple",
    100,
    50
  };
  struct Fruit *p;

  // データ型揃える
  double orange;
  double *p2;

  p = &store;
  printf("%s\n", (*p).name);
  printf("%s\n", p->name);

  return 0;
}
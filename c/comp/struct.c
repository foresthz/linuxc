#include <stdio.h>

struct stu {
  char* name;
  int age;
};

int main()
{
  printf("hello world\n");
  struct stu a;
  a.name="Tom";
  a.age=11;
  printf("age is : %d", a.age);
  return 0;
}

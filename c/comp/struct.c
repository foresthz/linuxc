#include <stdio.h>

struct stu {
  char* name;
  int age;
};

int main()
{
  printf("hello world\n");
  struct stu a, *b;
  
  a.name="Tom";
  a.age=11;
  printf("age is : %d", a.age);
  b=&a;
  (*b).age = 12;
  // 指针对象必须加括号，否则编译报错?
  printf("new age is : %d", (*b).age);
  return 0;
}

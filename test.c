#include <stdio.h>
#include <stdlib.h>
#include "drop_privs.h"



int main(){

  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("drop_privs temp\n");
  int ret1 = drop_privileges(0); 
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("restore privs\n");
  int ret2 = restore_privileges();
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("drop_privs definitive\n");
  int ret3 = drop_privileges(1); 
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("restore privs\n");
  int ret4 = restore_privileges();
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("return values: %d, %d, %d, %d\n", ret1, ret2, ret3, ret4);

  return 0;
}

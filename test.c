#include <stdio.h>
#include <stdlib.h>
#include "drop_privs.h"



int main(){

  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("drop_privs temp\n");
  drop_privileges(0); 
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("restore privs\n");
  restore_privileges();
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("drop_privs definitive\n");
  drop_privileges(1); 
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());
  printf("\n");

  printf("restore privs\n");
  restore_privileges();
  printf("Efective user: %s\n", get_effective_user_name());
  printf("Real user: %s\n", get_user_name());

  return 0;
}

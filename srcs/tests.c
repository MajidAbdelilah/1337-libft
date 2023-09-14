#include <string.h>

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char ft_isalpha_test() {
  int i = -256;
  printf("ft_isalpha_test:\n");
  while (i != 257) {
    if (ft_isalpha(i) == isalpha(i))
      printf("\033[0;32m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isalpha(i) ? "true" : "false", ft_isalpha(i),
             isalpha(i) ? "true" : "false", isalpha(i),
             i % 3 == 0 ? '\n' : '\t');
    else {
      printf(" \033[0;31m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isalpha(i) ? "true" : "false", ft_isalpha(i),
             isalpha(i) ? "true" : "false", isalpha(i),
             i % 3 == 0 ? '\n' : '\t');
      printf(" \033[0;31m\n ft_isalpha_test: failed!\n");
      exit(-1);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isalpha_test: success!\n");
  return 1;
}

char ft_isdigit_test() {
  int i = -256;
  printf("ft_isdigit_test:\n");
  while (i != 257) {
    if (ft_isdigit(i) == isdigit(i))
      printf("\033[0;32m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isdigit(i) ? "true" : "false", ft_isdigit(i),
             isdigit(i) ? "true" : "false", isdigit(i),
             i % 3 == 0 ? '\n' : '\t');
    else {
      printf(" \033[0;31m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isdigit(i) ? "true" : "false", ft_isdigit(i),
             isdigit(i) ? "true" : "false", isdigit(i),
             i % 3 == 0 ? '\n' : '\t');
      printf(" \033[0;31m\n ft_isdigit_test: failed!\n");
      exit(-1);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isdigit_test: success!\n");
  return (1);
}

char ft_isalnum_test() {
  int i = -256;
  printf("ft_isalnum_test:\n");
  while (i != 257) {
    if (ft_isalnum(i) == isalnum(i))
      printf("\033[0;32m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isalnum(i) ? "true" : "false", ft_isalnum(i),
             isalnum(i) ? "true" : "false", isalnum(i),
             i % 3 == 0 ? '\n' : '\t');
    else {
      printf(" \033[0;31m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isalnum(i) ? "true" : "false", ft_isalnum(i),
             isalnum(i) ? "true" : "false", isalnum(i),
             i % 3 == 0 ? '\n' : '\t');
      printf(" \033[0;31m\n ft_isalnum_test: failed!\n");
      exit(-1);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isalnum_test: success!\n");
  return (1);
}

char ft_isascii_test() {
  int i = -256;
  printf("ft_isascii_test:\n");
  while (i != 257) {
    if (ft_isascii(i) == isascii(i))
      printf("\033[0;32m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isascii(i) ? "true" : "false", ft_isascii(i),
             isascii(i) ? "true" : "false", isascii(i),
             i % 3 == 0 ? '\n' : '\t');
    else {
      printf(" \033[0;31m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isascii(i) ? "true" : "false", ft_isascii(i),
             isascii(i) ? "true" : "false", isascii(i),
             i % 3 == 0 ? '\n' : '\t');
      printf(" \033[0;31m\n ft_isascii_test: failed!\n");
			exit(-1);
    }
    i++;
  }
  printf(" \033[0;37m\n ft_isascii_test: success!\n");
  return (1);
}

char ft_isprint_test() {
  int i = -256;
  printf("ft_print_test:\n");
  while (i != 257) {
    if (ft_isprint(i) == isprint(i))
      printf("\033[0;32m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isprint(i) ? "true" : "false", ft_isprint(i),
             isprint(i) ? "true" : "false", isprint(i),
             i % 3 == 0 ? '\n' : '\t');
    else {
      printf(" \033[0;31m\"%c\" (%d) = %s %d, cor = %s %d,%c", i, i,
             ft_isprint(i) ? "true" : "false", ft_isprint(i),
             isprint(i) ? "true" : "false", isprint(i),
             i % 3 == 0 ? '\n' : '\t');
      printf(" \033[0;31m\n ft_isprint_test: failed!\n");
			exit(0);
    }
    i++;
  }
  printf(" \033[0;37m\n ft_isprint_test: success!\n");
  return (1);
}

char ft_strlen_test(){
	printf("ft_strlen_test:\n");
  printf("test 1: 1 byte null terminated buffer on the stack\n");
  char t1[1] = "\0";
  if(ft_strlen(t1) == strlen(t1))
  	printf("\033[0;32m t1: passed, len = %u\n", ft_strlen(t1));
  else
  	printf("\033[0;31m t1: failed, len = %u\n", ft_strlen(t1));
  		
  		
  printf("\033[0;37m test 2: 1 byte null terminated buffer on the heap\n");
  char *t2 = malloc(1);
  t2[0] = 0;
  if(ft_strlen(t2) == strlen(t2))
  	printf("\033[0;32m t2: passed, len = %u\n", ft_strlen(t2));
  else
  	printf("\033[0;31m t2: failed, len = %u\n", ft_strlen(t2));
  
  free(t2);
  
  printf("\033[0;37m test 3: 512 byte null terminated buffer on the stack\n");
  char t3[512] = {1};
  memset(t3, 1, 512);
  t3[511] = 0;
  if(ft_strlen(t3) == strlen(t3))
  	printf("\033[0;32m t3: passed, len = %u\n", ft_strlen(t3));
  else
  	printf("\033[0;31m t3: failed, len = %u\n", ft_strlen(t3));
  
  printf("\033[0;37m test 4: 512 byte null terminated buffer on the heap\n");
  char *t4 = malloc(512);
  memset(t4, 1, 512);
  t4[511] = 0;
  if(ft_strlen(t4) == strlen(t4))
  	printf("\033[0;32m t4: passed, len = %u\n", ft_strlen(t4));
  else
		printf("\033[0;31m t4: failed, len = %u\n", ft_strlen(t4));
  
	free(t4);
  
  printf("\033[0;37m test 5: (unsigned int)-1 byte null terminated buffer on the heap\n");
  char *t5 = malloc((unsigned int)-1);
  memset(t5, 1, ((unsigned int)-1));
  t5[((unsigned int)-1)-1] = 0;
	if(ft_strlen(t5) == strlen(t5))
  	printf("\033[0;32m t5: passed, len = %u\n", ft_strlen(t5));
	else
		printf("\033[0;31m t5: failed, len = %u\n", ft_strlen(t5));
  
	free(t5);
  	
  return (1);
  
}

int main() {
  ft_isalpha_test();
  ft_isdigit_test();
  ft_isalnum_test();
  ft_isascii_test();
  ft_isprint_test();
  ft_strlen_test();
  return 0;
}
#define _XOPEN_SOURCE
#define _DEFAULT_SOURCE
#define _SVID_SOURCE

#include "../includes/libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char ft_isalpha_test() {
  int i = 0;
  printf("ft_isalpha_test:\n");
  while (i != 128) {
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
      exit(0);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isalpha_test: success!\n");
  return 1;
}

char ft_isdigit_test() {
  int i = 0;
  printf("ft_isdigit_test:\n");
  while (i != 128) {
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
      exit(0);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isdigit_test: success!\n");
  return (1);
}

char ft_isalnum_test() {
  int i = 0;
  printf("ft_isalnum_test:\n");
  while (i != 128) {
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
      exit(0);
    }

    i++;
  }
  printf(" \033[0;37m\n ft_isalnum_test: success!\n");
  return (1);
}

char ft_isascii_test() {
  int i = -255;
  printf("ft_isascii_test:\n");
  while (i != 256) {
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
			exit(0);
    }
    i++;
  }
  printf(" \033[0;37m\n ft_isascii_test: success!\n");
  return (1);
}

int main() {
  ft_isalpha_test();
  ft_isdigit_test();
  ft_isalnum_test();
  ft_isascii_test();
  return 0;
}
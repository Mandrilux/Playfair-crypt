#ifndef DATA_H_
#define DATA_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

typedef struct          s_data
{
  char		*read_str;
  char		*str_less_doubl;
  int		flag;
}                       t_data;

		/* check.c */

int		 is_correct_str(char *str);

		/* init.c */

t_data		 *init_data();

		/* display.c */

int		 error_memory();

		/* get_line.c */

char		 *my_strdup(char *src);

		/* main.c */

int		 main();

#endif /* DATA_H_ */

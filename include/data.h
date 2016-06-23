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








char		 *my_strdup(char *src);








char		 *my_strdup(char *src);

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
int		 str_without_duplicate(t_data *data);
int		 is_char_is_here(char *str, int c);

#endif /* DATA_H_ */

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








char		 *my_strdup(char *src);










char		 *my_strdup(char *src);

		/* free.c */

int		 free_end(t_data *data);

		/* check.c */

int		 is_correct_str(char *str);
int		 is_char_is_here(char *str, int c);

		/* init.c */

t_data		 *init_data();

		/* display.c */

int		 error_memory();

		/* get_line.c */

char		 *my_strdup(char *src);

		/* main.c */

int		 main();
int		 add_last_char(t_data *data);
int		 str_without_duplicate(t_data *data);

#endif /* DATA_H_ */

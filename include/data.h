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

}                       t_data;

		/* check.c */

int		 is_correct_str(char *str);

		/* display.c */

int		 error_memory();

		/* main.c */

int		 main();

#endif /* DATA_H_ */

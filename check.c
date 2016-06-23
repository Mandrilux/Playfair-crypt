#include "data.h"

int	is_correct_str(char *str)
{
  int	i = -1;

  while (str[++i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z');
      else if (str[i] >= 'A' && str[i] <= 'Z');
      else
	{
	  printf("Error !! \n");
	  printf("char ['%c'] is invalid\n", str[i]);
	  return (0);
	}
    }
  return (1);
}

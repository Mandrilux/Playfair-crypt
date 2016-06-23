#include "data.h"

int	main()
{
  char *stread = NULL;
  int	flag = 0;
  do
    {
      if ((stread = malloc(sizeof(char) * 26)) == NULL)
	return (error_memory());
      memset(stread, '\0', 26);
      printf("Entrez une chaine de caractere\n");
      printf("Attention 25 caractere maximum\n");
      scanf("%25s", stread);
      flag = is_correct_str(stread);
    }
  while (flag == 0);
  return (EXIT_SUCCESS);
}

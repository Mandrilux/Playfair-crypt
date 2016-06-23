#include "data.h"

int	main()
{
  char		*tmp = NULL;
  t_data	*data;

  if ((data = init_data()) == NULL)
    return (error_memory());
  do
    {
      memset(data->read_str, '\0', 26);
      printf("Entrez une chaine de caractere\n");
      printf("Attention 25 caractere maximum\n");
      tmp = get_next_line(0);
      strncat(data->read_str, tmp, 25);
      free(tmp);
    }
  while (is_correct_str(data->read_str) == 0);
  str_without_duplicate(data);
  add_last_char(data);
  printf("['%s']\n", data->str_less_doubl);
  free_end(data);
  return (EXIT_SUCCESS);
}

int	add_last_char(t_data *data)
{
  char	*tmp;
  int	i = -1;

  if ((tmp = my_strdup("abcdefghijklmnopqrstuvxyz")) == NULL)
    return (-1);
  while (tmp[++i] != '\0')
    {
      if (data->flag <= 25)
	{
	  if (is_char_is_here(data->str_less_doubl, tmp[i]) == 0)
	    {
	      data->str_less_doubl[data->flag] = tmp[i];
	      data->flag += 1;
	    }
	}
    }
  free(tmp);
  return (1);
}

int	str_without_duplicate(t_data *data)
{
  int	i = -1;
  while (data->read_str[++i] != '\0')
    {
      if (data->read_str[i] != 'W' && data->read_str[i] != 'w')
	{
	  if (is_char_is_here(data->str_less_doubl, data->read_str[i]) == 0)
	    {
	      data->str_less_doubl[data->flag] = data->read_str[i];
	      data->flag += 1;
	    }
	}
    }
  return (1);
}

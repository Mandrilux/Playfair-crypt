#include "data.h"

t_data		*init_data()
{
  t_data	*data;

  data = malloc(sizeof(t_data) * 1);
  if (data == NULL)
    return (NULL);
  if ((data->read_str = calloc(26, sizeof(char))) == NULL)
    {
      data->read_str = NULL;
      return (NULL);
    }
  if ((data->str_less_doubl = calloc(26, sizeof(char))) == NULL)
    {
      data->str_less_doubl = NULL;
      return (NULL);
    }
  data->flag = 0;
  return (data);
}

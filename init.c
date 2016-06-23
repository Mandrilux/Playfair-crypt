#include "data.h"

t_data		*init_data()
{
  t_data	*data;

  data = malloc(sizeof(t_data) * 1);
  if (data == NULL)
    return (NULL);
  data->read_str = NULL;
  data->str_less_doubl = NULL;
  return (data);
}

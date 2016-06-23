#include "data.h"

int	free_end(t_data *data)
{
  if (data != NULL)
    {
      if (data->read_str != NULL)
	free(data->read_str);
      if (data->str_less_doubl != NULL)
	free(data->str_less_doubl);
      free(data);
    }
  return (1);
}

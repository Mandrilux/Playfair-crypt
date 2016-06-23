/*
** init.c for  in /home/baptiste/project/crypt_appearance
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Thu Jun  9 10:37:41 2016
** Last update Thu Jun 23 21:32:05 2016 
*/

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

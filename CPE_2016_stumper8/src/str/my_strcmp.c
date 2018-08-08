/*
** my_strcmp.c for my_strcmp in /home/jeremy.elkaim/CPE_2016_stumper8/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun  7 14:35:51 2017 jeremy elkaim
** Last update Wed Jun  7 14:43:44 2017 jeremy elkaim
*/

#include "hangman.h"

int	my_strcmp(const char *str,const char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] == cmp[i])
	return (1);
      i++;
    }
  return (0);
}

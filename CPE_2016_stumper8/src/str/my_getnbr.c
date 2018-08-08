/*
** my_getnbr.c for my_getnbr in /home/jeremy.elkaim/CPE_2016_stumper8/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun  7 14:42:16 2017 jeremy elkaim
** Last update Wed Jun  7 15:41:00 2017 Filliat Etienne
*/

#include "hangman.h"

int	my_getnbr(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (FAIL);
      nb = nb * 10;
      nb = nb + str[i] - '0';
      i++;
    }
  return (nb);
}

/*
** my_strlen.c for my_strlen in /home/jeremy.elkaim/CPE_2016_stumper8/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun  7 14:28:18 2017 jeremy elkaim
** Last update Wed Jun  7 14:44:26 2017 jeremy elkaim
*/

#include "hangman.h"

int	my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

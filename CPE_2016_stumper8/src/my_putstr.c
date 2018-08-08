/*
** my_putstr.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 14:53:48 2017 Filliat Etienne
** Last update Wed Jun  7 16:57:39 2017 Filliat Etienne
*/

#include <unistd.h>
#include "hangman.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(const int fd, char *str)
{
  write(fd, str, my_strlen(str));
}

/*
** my_putnbr.c for my_putnbr in /home/jeremy.elkaim/CPE_2016_stumper8/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Jun  7 14:39:13 2017 jeremy elkaim
** Last update Wed Jun  7 16:16:59 2017 Filliat Etienne
*/

#include "hangman.h"

void	my_putnbr(int nb)
{
  if ((nb / 10) > 0)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + '0');
}

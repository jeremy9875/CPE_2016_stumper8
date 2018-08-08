/*
** my_putchar.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 16:07:29 2017 Filliat Etienne
** Last update Wed Jun  7 16:09:04 2017 Filliat Etienne
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

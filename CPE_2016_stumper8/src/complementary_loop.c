/*
** complementary_loop.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 16:12:15 2017 Filliat Etienne
** Last update Wed Jun  7 16:28:39 2017 Filliat Etienne
*/

#include "hangman.h"

int	bad_letter(char c, int lives)
{
  my_putchar(c);
  my_putstr(STD_OUT, NOT_INWRD);
  lives--;
  return (lives);
}

void	win_or_lose(char *st_word, int lives)
{
  my_putstr(STD_OUT, st_word);
  my_putchar('\n');
  my_putstr(STD_OUT, TRY);
  my_putnbr(lives);
  if (lives > 0)
    my_putstr(STD_OUT, WIN);
  else
    my_putstr(STD_OUT, LOST);
}

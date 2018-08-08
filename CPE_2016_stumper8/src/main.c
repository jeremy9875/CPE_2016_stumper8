/*
** main.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 12:14:43 2017 Filliat Etienne
** Last update Wed Jun  7 17:16:02 2017 Filliat Etienne
*/

#include <unistd.h>
#include "hangman.h"

int	parser(char **av)
{
  int	lives;
  char	*word;

  lives = 10;
  if ((word = get_word(av[1])) == NULL)
    {
      my_putstr(STD_ERR, MAL_ERR);
      return (ERROR);
    }
  if (av[2])
    {
      if ((lives = my_getnbr(av[2])) == FAIL)
	{
	  my_putstr(STD_ERR, INV_LIVES);
	  return (ERROR);
	}
    }
  return (gameloop(lives, word));
}

int	main(int ac, char **av)
{
  if (ac < 2 || ac > 3)
    {
      my_putstr(STD_ERR, INV_PAR);
      return (ERROR);
    }
  return (parser(av));
}

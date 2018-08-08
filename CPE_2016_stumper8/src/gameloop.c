/*
** gameloop.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 15:46:36 2017 Filliat Etienne
** Last update Wed Jun  7 17:40:03 2017 Filliat Etienne
*/

#include <stdlib.h>
#include <unistd.h>
#include "hangman.h"

static char	*get_star_word(char *word)
{
  int		i;
  char		*st_word;

  i = 0;
  if ((st_word = malloc(sizeof(char) * (my_strlen(word) + 1))) == NULL)
    return (NULL);
  st_word = my_memset(st_word, '\0', my_strlen(word));
  while (word[i] != '\0')
    {
      st_word[i] = '*';
      i++;
    }
  return (st_word);
}

static int	check_stars(char *st_word)
{
  int		i;

  i = 0;
  while (st_word[i] != '\0')
    {
      if (st_word[i] == '*')
	return (ERR);
      i++;
    }
  return (SUCCESS);
}

static void	aff_all(char *st_word, int lives)
{
  my_putstr(STD_OUT, st_word);
  my_putchar('\n');
  my_putstr(STD_OUT, TRY);
  my_putnbr(lives);
  my_putstr(STD_OUT, "\n\n");
  my_putstr(STD_OUT, INP_LETTER);
}

static char	*check_letter(char *word, char *st_word,
			      int *status, char c)
{
  int		i;

  i = 0;
  while (word[i] != '\0')
    {
      if (word[i] == c)
	{
	  st_word[i] = c;
	  *status = 1;
	}
      i++;
    }
  return (st_word);
}

int	gameloop(int lives, char *word)
{
  char	buffer[BUFF_SIZE];
  char	*st_word;
  int	status;

  status = 0;
  if ((st_word = get_star_word(word)) == NULL)
    return (ERROR);
  while (check_stars(st_word) == 1 && lives > 0)
    {
      aff_all(st_word, lives);
      if (read(0, buffer, 2) == -1)
	return (ERROR);
      st_word = check_letter(word, st_word, &status, buffer[0]);
      if (status == 0)
	lives = bad_letter(buffer[0], lives);
      status = 0;
    }
  win_or_lose(st_word, lives);
  if (st_word)
    free(st_word);
  if (word)
    free(word);
  return (SUCCESS);
}

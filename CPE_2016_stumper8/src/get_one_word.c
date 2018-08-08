/*
** get_one_word.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 14:36:52 2017 Filliat Etienne
** Last update Wed Jun  7 17:29:52 2017 Filliat Etienne
*/

#include <stdlib.h>
#include "hangman.h"

static int	count_words(char *dico)
{
  int		count;
  int		i;

  i = 0;
  count = 0;
  while (dico[i] != '\0')
    {
      if (dico[i] == '\n')
	count++;
      i++;
    }
  return (count);
}

static int	my_strlenmod(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\n' && str[i])
    i++;
  return (i);
}

static char	*my_strcpy_to_n(char *word, char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\n')
    {
      word[i] = str[i];
      i++;
    }
  return (word);
}

static char	*take_word(int nb, char *dico)
{
  int		i;
  char		*word;

  i = 0;
  while (nb > 0 && dico[i])
    {
      if (dico[i] == '\n')
	nb--;
      i++;
    }
  if ((word = malloc(sizeof(char) * my_strlenmod(&dico[i]) + 1)) == NULL)
    return (NULL);
  word = my_memset(word, '\0', my_strlenmod(&dico[i]));
  word = my_strcpy_to_n(word, &dico[i]);
  return (word);
}

char	*get_one_word(char *dico)
{
  char	*word;
  int	nb_word;
  int	nb;

  nb = count_words(dico);
  if (nb == 0)
    return (NULL);
  nb_word = rand() % nb;
  if ((word = take_word(nb_word, dico)) == NULL)
    return (NULL);
  return (word);
}

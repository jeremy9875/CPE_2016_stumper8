/*
** get_word.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 14:18:14 2017 Filliat Etienne
** Last update Wed Jun  7 16:54:31 2017 Filliat Etienne
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "hangman.h"

char	*my_memset(char *str, const char c, const int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      str[i] = c;
      i++;
    }
  str[i] = '\0';
  return (str);
}

static char	*new_dico(char *dico, char *buffer)
{
  char		*new_dico;

  if ((new_dico = malloc(sizeof(char) * (my_strlen(dico)
					 + my_strlen(buffer) + 1))) == NULL)
    return (NULL);
  new_dico = my_memset(new_dico, '\0', (my_strlen(dico)
					+ my_strlen(buffer)));
  new_dico = my_strcpy(dico, new_dico);
  new_dico = my_strnextcpy(buffer, new_dico);
  free(buffer);
  free(dico);
  return (new_dico);
}

static char	*get_dico(const char *pathname)
{
  char		*dico;
  char		*buffer;
  int		fd;

  if ((fd = open(pathname, O_RDONLY)) == -1)
    return (NULL);
  if ((buffer = malloc(sizeof(char) * READ_SIZE)) == NULL)
    return (NULL);
  if ((dico = malloc(sizeof(char) * READ_SIZE)) == NULL)
    return (NULL);
  buffer = my_memset(buffer, '\0', READ_SIZE - 1);
  dico = my_memset(dico, '\0', READ_SIZE - 1);
  while (read(fd, buffer, READ_SIZE - 1) != 0)
    {
      if ((dico = new_dico(dico, buffer)) == NULL)
	return (NULL);
      if ((buffer = malloc(sizeof(char) * READ_SIZE)) == NULL)
	return (NULL);
      buffer = my_memset(buffer, '\0', READ_SIZE - 1);
    }
  if ((dico = new_dico(dico, buffer)) == NULL)
    return (NULL);
  return (dico);
}

char	*get_word(const char *pathname)
{
  char	*word;
  char	*dico;

  srand(getpid());
  if ((dico = get_dico(pathname)) == NULL)
    return (NULL);
  if ((word = get_one_word(dico)) == NULL)
    return (NULL);
  free(dico);
  return (word);
}

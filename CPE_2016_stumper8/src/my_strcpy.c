/*
** my_strcpy.c for hangman in /home/Spiki/Colles/CPE_2016_stumper8/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 14:30:11 2017 Filliat Etienne
** Last update Wed Jun  7 15:53:14 2017 jeremy elkaim
*/

char	*my_strcpy(char *src, char *dest)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}

char	*my_strnextcpy(char *src, char *dest)
{
  int	i;
  int	x;

  i = 0;
  x = 0;
  while (dest[x] != '\0')
    x++;
  while (src[i] != '\0')
    {
      dest[x] = src[i];
      i++;
      x++;
    }
  return (dest);
}

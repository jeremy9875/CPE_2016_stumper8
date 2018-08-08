/*
** hangman.h for hangman in /home/Spiki/Colles/CPE_2016_stumper8
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed Jun  7 14:55:48 2017 Filliat Etienne
** Last update Wed Jun  7 17:14:15 2017 Filliat Etienne
*/

#ifndef HANGMAN_H_
# define HANGMAN_H_

# define ERROR		84
# define ERR		1
# define SUCCESS	0
# define READ_SIZE	11
# define LOST		"\n\nYou lost!\n"
# define WIN		"\n\nCongratulations!\n"
# define INP_LETTER	"Your letter: "
# define MAL_ERR	"Malloc err or invalid file\n"
# define INV_PAR	"Invalid parameters\n"
# define INV_LIVES	"Invladid numbers of lifes\n"
# define TRY		"Tries: "
# define NOT_INWRD	": is not in this word\n"
# define FAIL		-1
# define STD_OUT	1
# define STD_ERR	2
# define BUFF_SIZE	4096

char	*get_word(const char *);
void	my_putstr(const int, char *);
void	my_putchar(char);
void	my_putnbr(int);
char	*my_memset(char *, char, int);
char	*my_strcpy(char *, char *);
char	*my_strnextcpy(char *, char *);
int	my_strlen(char *);
char	*get_one_word(char *);
int	my_getnbr(char *);
int	gameloop(int, char *);
int	bad_letter(char, int);
void	win_or_lose(char *, int);

#endif /* !HANGMAN_H_ */

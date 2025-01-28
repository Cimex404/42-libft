/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraf <jgraf@student.42heilbonn.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:52 by jgraf             #+#    #+#             */
/*   Updated: 2024/10/25 11:26:33 by jgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

//	List structure
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;


//	Boolean functions
bool	ft_isalpha(int c);
bool	ft_isdigit(int c);
bool	ft_isalnum(int c);
bool	ft_isascii(int c);
bool	ft_isprint(int c);


//	Conversion functions
int		ft_atoi(const char *str);
char	*ft_itoa(int n);


//	List functions
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


//	Memory functions
void	*ft_bzero(void *dst, int n);
void	*ft_calloc(int n, int size);
void	*ft_memset(void *str, int c, int n);
void	*ft_memchr(const void *str, int c, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memmove(void *dest, const void *src, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);


//	String functions
int		ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_strlcpy(char *dest, const char *src, int len);
int		ft_strlcat(char *dest, const char *src, int len);
char	*ft_strchr(const char *str, unsigned char c);
char	*ft_strrchr(const char *str, unsigned char c);
char	*ft_strnstr(const char *s1, const char *s2, int n);
char	*ft_strdup(const char *src);
char	*ft_substr(const char *s, int start, int len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));


//	Other functions
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif

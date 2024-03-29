/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:43:03 by afeuerst          #+#    #+#             */
/*   Updated: 2016/11/24 15:26:56 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

typedef struct		s_data
{
	char			data;
	int				key;
	void			*next;
	void			*first;
}					t_data;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void				ft_lstadd(t_list **alst, t_list *new);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_append(t_data **object, int key, char data);

int					ft_remove(t_data *object, int key);

int					ft_remove_data(t_data *object, char data);

char				ft_get(t_data *object, int key);

t_data				*ft_get_object(t_data *object, int key);

t_data				*ft_init(void);

int					ft_count(t_data *object);

size_t				ft_int_size(int n);

int					ft_puis(int base, int puissance);

void				ft_strrev(char *str);

char				*ft_strstr(const char *s1, const char *s2);

char				*ft_strnstr(const char *s1, const char *s2, size_t n);

char				*ft_strdup(const char *s1);

size_t				ft_strlen(const char *s);

char				*ft_strcpy(char *dst, const char *src);

char				*ft_strncpy(char *dst, const char *src, size_t n);

char				*ft_strcat(char *s1, char *s2);

char				*ft_strncat(char *s1, char *s2, size_t n);

size_t				ft_strlcat(char *s1, char *s2, size_t size);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

void				ft_putnbr_fd(int n, int fd);

void				ft_putendl_fd(char const *s, int fd);

void				ft_putstr_fd(char const *s, int fd);

void				ft_putnbr(int n);

void				ft_putendl(char const *s);

void				ft_putstr(char const *s);

void				ft_putchar(char c);

void				ft_putchar_fd(char c, int fd);

char				*ft_itoa(int n);

char				**ft_strsplit(char const *s, char c);

char				*ft_strtrim(char const *s);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

int					ft_strnequ(char const *s1, char const *s2, size_t n);

int					ft_strequ(char const *s1, char const *s2);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char				*ft_strmap(char const *s, char (*f)(char));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				ft_striter(char *s, void (*f)(char *));

void				ft_strclr(char *s);

void				ft_strdel(char **as);

char				*ft_strnew(size_t size);

void				ft_memdel(void **ap);

void				*ft_memset(void *b, int c, size_t len);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memalloc(size_t size);

void				*ft_memmove(void *dst, const void *src, size_t len);

void				ft_bzero(void *s, size_t n);

void				*ft_memcpy(void *s1, const void *s2, size_t n);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_strcmp(const char *s1, const char *s2);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

#endif

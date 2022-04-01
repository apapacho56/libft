/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparedes <aparedes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 21:30:24 by jrameau           #+#    #+#             */
/*   Updated: 2022/03/31 08:55:42 by aparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <strings.h>
# include <ctype.h>

// Primera Parte
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t			     ft_strlcpy(char * restrict dst,
						const char * restrict src, size_t dstsize);
size_t				ft_strlcat(char *buffer, const char *dst, size_t dstsize);
int					ft_atoi(const char *str);

void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

// Segunda Parte

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);


#endif
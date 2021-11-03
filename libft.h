/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adriouic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:56:58 by adriouic          #+#    #+#             */
/*   Updated: 2021/11/03 16:43:06 by adriouic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isprint(unsigned char c);
int		ft_strlen(char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
int		ft_toupper(unsigned char c);
int		ft_tolower(unsigned char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *str1, const void *str2, unsigned int n);
char	*ft_strnstr(const char *haysck, const char *needle, unsigned int len);
int		ft_atoi(const char *str);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
char	*ft_strdup(const char *s1);
void	*ft_calloc(unsigned int count, unsigned int size);
#endif 

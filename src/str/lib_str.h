/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadad <mahadad@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 08:55:38 by awillems          #+#    #+#             */
/*   Updated: 2022/06/21 13:45:53 by mahadad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_STR_H
# define LIB_STR_H

# include <stddef.h>

//==================================================//

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
int		ft_split_len(char **splited);
int		charsetstr_strict(const char *str, char *set)

//==================================================//

#endif
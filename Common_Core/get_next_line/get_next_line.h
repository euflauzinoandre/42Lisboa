/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:27:00 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/08/27 16:59:19 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h> 

char	*get_next_line(int fd);
char	*read_file(int fd, char *str);
char	*ft_get_line(char *str);
char	*ft_get_rest(char *str);
char	*find_newline(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif //BUFFER_SIZE
#endif //GET_NEXT_LINE_H

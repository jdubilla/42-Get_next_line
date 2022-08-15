/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:49:58 by jdubilla          #+#    #+#             */
/*   Updated: 2021/12/06 21:58:52 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strchr(char *s, char c);
int		ft_lenline(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *str, char *buff);

#endif

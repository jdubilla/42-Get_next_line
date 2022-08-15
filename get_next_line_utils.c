/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:03:14 by jdubilla          #+#    #+#             */
/*   Updated: 2021/12/07 20:36:58 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lenline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *str, char *buff)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!buff)
		return (NULL);
	if (!str)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
	}
	res = malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buff) + 1));
	while (str[j])
		res[i++] = str[j++];
	j = 0;
	while (buff[j])
		res[i++] = buff[j++];
	res[i++] = '\0';
	free(str);
	return (res);
}

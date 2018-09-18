/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmkhize <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:33:40 by bmkhize           #+#    #+#             */
/*   Updated: 2018/06/05 14:11:38 by bmkhize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i] && s)
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
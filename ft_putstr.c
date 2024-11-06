/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:24:54 by oilyine-          #+#    #+#             */
/*   Updated: 2024/11/05 11:27:54 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stddef.h>

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
	{
		write(s[i]);
		i++;
	}
	return (i);
}
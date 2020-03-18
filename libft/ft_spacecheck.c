/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spacecheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 02:45:14 by anurgali          #+#    #+#             */
/*   Updated: 2019/03/16 02:45:31 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_spacecheck(char c)
{
	if ((c == ' ') || (c == ',') || (c == '\n') || (c == '\t'))
		return (1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurgali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 05:10:28 by anurgali          #+#    #+#             */
/*   Updated: 2019/10/16 19:57:34 by anurgali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swap_float(float *x1, float *x2)
{
	float	c;

	c = *x1;
	*x1 = *x2;
	*x2 = c;
}

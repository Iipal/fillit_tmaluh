/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:56:53 by tmaluh            #+#    #+#             */
/*   Updated: 2018/10/28 17:07:45 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_pow(int nb, int exp)
{
	if (exp <= 0)
		return (1);
	else
		return (nb * (ft_pow(nb, exp - 1)));
}

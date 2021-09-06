/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadec_uppercase_int.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  jlucas-f <jlucas-f@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:43:30 by  jlucas-f         #+#    #+#             */
/*   Updated: 2021/09/01 10:23:30 by  jlucas-f        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf_hexadec_uppercase_int(int x)
{
	return (printf("%X", x));
}
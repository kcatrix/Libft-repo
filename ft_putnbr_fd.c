/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:12:51 by kcatrix           #+#    #+#             */
/*   Updated: 2021/10/28 14:36:36 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	if ((nb < 0) && (nb != -2147483648))
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb;
		c += '0';
		write(fd, &c, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}

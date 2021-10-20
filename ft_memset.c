/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:51:32 by kevyn             #+#    #+#             */
/*   Updated: 2021/10/20 14:30:17 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    int i;
    char *k;
    i = 0;
    k = (char *) b;
    if (b == NULL)
        return (NULL);
    while (len != 0)
    {
        k[i] = (char) c;
        i++;
        len--;
    }
    return (k);
}
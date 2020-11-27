/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: xxu <xxu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 13:15:25 by xxu           #+#    #+#                 */
/*   Updated: 2020/11/27 11:25:41 by Xiaojing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void *str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Xiaojing <Xiaojing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 10:03:43 by Xiaojing      #+#    #+#                 */
/*   Updated: 2020/11/27 11:26:03 by Xiaojing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdlib.h>

static	int		ft_len(int n)
{
	int	len;

	if (n <= 0)
	{
		n = -n;
		len = 1;
	}
	else
		len = 0;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[len - 1] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (str);
}

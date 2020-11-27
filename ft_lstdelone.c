/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: Xiaojing <Xiaojing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 17:13:31 by Xiaojing      #+#    #+#                 */
/*   Updated: 2020/11/27 11:27:41 by Xiaojing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}

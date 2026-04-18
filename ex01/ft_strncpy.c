/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 13:40:45 by casampai          #+#    #+#             */
/*   Updated: 2026/04/18 16:03:39 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*ptr_src;
	char			*ptr_dest;
	unsigned int	i;

	ptr_src = src;
	ptr_dest = dest;
	i = 0;
	while (*ptr_src && i < n)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		i++;
	}
	while (i < n)
	{
		*ptr_dest = '\0';
		ptr_dest++;
		i++;
	}
	return (dest);
}

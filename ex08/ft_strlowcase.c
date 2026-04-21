/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:25:04 by casampai          #+#    #+#             */
/*   Updated: 2026/04/21 18:11:10 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr_str;

	ptr_str = str;
	while (*ptr_str)
	{
		if ((*ptr_str >= 65 && *ptr_str <= 90))
			*ptr_str += 32;
		ptr_str++;
	}
	return (str);
}

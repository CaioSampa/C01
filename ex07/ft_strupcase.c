/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:04:16 by casampai          #+#    #+#             */
/*   Updated: 2026/04/21 18:12:10 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr_str;

	ptr_str = str;
	while (*ptr_str)
	{
		if ((*ptr_str >= 97 && *ptr_str <= 122))
			*ptr_str -= 32;
		ptr_str++;
	}
	return (str);
}

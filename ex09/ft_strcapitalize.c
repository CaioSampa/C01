/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:27:42 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 19:01:08 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	initial_letter;
	char	*ptr_str;

	ptr_str = str;
	initial_letter = 1;
	while (*ptr_str)
	{
		if ((*ptr_str >= 65 && *ptr_str <= 90) || (*ptr_str >= 97 && *ptr_str <= 122) || (*ptr_str >= 48 && *ptr_str <= 57))
		{
			if(!initial_letter && (*ptr_str >= 65 && *str <= 90) && !(*ptr_str >= 97 && *ptr_str <= 122))
				*ptr_str += 32;
			
			if (initial_letter && (*ptr_str >= 97 && *ptr_str <= 122)) 
				*ptr_str -= 32;
			
			initial_letter = 0;
		} else
			initial_letter = 1;
		ptr_str++;
	}
	return (str);
}

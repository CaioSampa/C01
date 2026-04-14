/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:51:52 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 18:00:56 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	type_return;

	type_return = 0;
	while (*str)
	{
		if ((*str >= 97 && *str <= 122))
			type_return = 1;
		else
			return (0);
		str++;
	}
	return (type_return);
}

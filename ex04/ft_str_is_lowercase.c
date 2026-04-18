/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:51:52 by casampai          #+#    #+#             */
/*   Updated: 2026/04/18 15:48:18 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	type_return;

	type_return = 0;
	if (!*str)
		return (1);
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

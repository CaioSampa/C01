/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:54:16 by casampai          #+#    #+#             */
/*   Updated: 2026/04/18 15:48:23 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	type_return;

	type_return = 0;
	if (!*str)
		return (1);
	while (*str)
	{
		if ((*str >= 65 && *str <= 90))
			type_return = 1;
		else
			return (0);
		str++;
	}
	return (type_return);
}

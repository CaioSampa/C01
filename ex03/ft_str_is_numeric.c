/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:49:01 by casampai          #+#    #+#             */
/*   Updated: 2026/04/14 17:51:09 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	type_return;

	type_return = 0;
	while (*str)
	{
		if ((*str >= 48 && *str <= 57))
			type_return = 1;
		else
			return (0);
		str++;
	}
	return (type_return);
}

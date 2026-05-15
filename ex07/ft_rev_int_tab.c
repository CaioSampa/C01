/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 04:02:00 by casampai          #+#    #+#             */
/*   Updated: 2026/04/10 17:41:07 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	tmp;

	count = -1;
	tmp = 0;
	while (size-- > ++count)
	{
		tmp = tab[count];
		tab[count] = tab[size];
		tab[size] = tmp;
	}
}

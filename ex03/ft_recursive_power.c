/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:52:08 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/25 14:04:44 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_power(int nb, int power)
{
	int results;
    if (power == 0) return 1;
    if (power % 2 == 0)
	{
		results = ft_recursive_power(nb, power/2);
		return results * results;
	}
    else return nb * ft_recursive_power(nb, power - 1);
}


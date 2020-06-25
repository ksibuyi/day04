/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:53:38 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/25 12:33:16 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb < 0 && nb == '\0')
		return 0;
	else if(nb == 0)
	{
		return 1;
	}
	else
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
}	


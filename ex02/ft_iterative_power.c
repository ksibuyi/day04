/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:40:27 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/25 12:59:29 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int results;
	results = 1;
	if(power < 0)
		return 0;
	else if(power == 0)
		return results;
    else
	{
     	while(power != 0)
    	{
	    	results *= nb;
		   --power;
    	}
	    return results;
	}
}

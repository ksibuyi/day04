/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksibuyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:03:01 by ksibuyi           #+#    #+#             */
/*   Updated: 2020/06/24 15:24:20 by ksibuyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_factorial(int nb)
{
	int j;
	int i;

	j = 1;
	i = 1;
    
	if( nb < 0 || nb == '\0')
	{
		return 0;
	}
	else
	{	
	    while( i <= nb)
	    {
		    j = j * i;
		    i++;
	    }
		return j;

	
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:12:09 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 00:27:16 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	count;
	int	index;

	count = 0;
	index = 0;
	while ((str[index]) != '\0')
	{
		++count;
		++index;
	}
	return (count);
}

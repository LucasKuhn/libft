/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalex-ku <lalex-ku@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:40:27 by lalex-ku          #+#    #+#             */
/*   Updated: 2022/03/07 16:43:42 by lalex-ku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf("-->%s\n", arr[i]);
		i++;
	}
}

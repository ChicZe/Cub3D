/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromito <nromito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:13:30 by ciusca            #+#    #+#             */
/*   Updated: 2024/07/17 16:38:37 by nromito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_matrix(char **mat)
{
	int	i;

	i = -1;
	while (mat[++i])
	{
		printf("[%s]\n", mat[i]);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:02:02 by rtissera          #+#    #+#             */
/*   Updated: 2024/04/15 14:30:05 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		parsingator(argv[1]);
	}
	else
	{
		return (ft_error("Bad arguments number"));
	}
	return (0);
}

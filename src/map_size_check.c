/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_size_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmati <asmati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:45:00 by asmati            #+#    #+#             */
/*   Updated: 2025/10/17 19:03:44 by asmati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_size(char **map)
{
	int	width;
	int	height;

	if (!map || !map[0])
		return (1);
	width = get_map_width(map) * TILE_SIZE;
	height = get_map_height(map) * TILE_SIZE;
	if (width > MAX_WIDTH || height > MAX_HEIGHT)
	{
		ft_printf("Error: Map is too big (max %dx%d pixels)\n", MAX_WIDTH,
			MAX_HEIGHT);
		return (1);
	}
	return (0);
}

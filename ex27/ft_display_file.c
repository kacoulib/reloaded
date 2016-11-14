/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kacoulib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:51:14 by kacoulib          #+#    #+#             */
/*   Updated: 2016/11/14 17:09:38 by kacoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE	10

void	ft_putstr(char *c, int output)
{
	int i;

	i = 0;
	while (c[i])
	{
		write(output, &c[i], 1);
		i++;
	}
}

int		main(int ac, char *av[])
{
	char	fd;
	int		i;
	char	buff[BUFF_SIZE + 1];

	if (ac == 1)
		ft_putstr("File name missing.\n", 2);
	if (ac > 2)
		ft_putstr("Too many arguments.\n", 2);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd)
		{
			while ((i = read(fd, buff, BUFF_SIZE)))
			{
				buff[i] = '\0';
				ft_putstr(buff, 1);
			}
			close(fd);
		}
	}
	return (0);
}

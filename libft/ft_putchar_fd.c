/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-sch <rvan-sch@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 21:16:15 by rvan-sch      #+#    #+#                 */
/*   Updated: 2019/11/22 21:16:18 by rvan-sch      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

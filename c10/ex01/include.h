/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <charles.cabergs@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:07:19 by cacharle          #+#    #+#             */
/*   Updated: 2019/07/17 08:47:08 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# define BUF_SIZE 64

/*
** io.c
*/

int		read_in_buf(int fildes, char buf[BUF_SIZE]);
int		write_buf(char buf[BUF_SIZE], int size);
int		read_write_fildes(int fildes);
void	read_stdin(void);
int		print_file(char *filename);

/*
** helper.c
*/

void	handle_error(char *program_name, char *arg);
void	ft_putstr_err(char *str);

#endif

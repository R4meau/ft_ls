/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:33:27 by jrameau           #+#    #+#             */
/*   Updated: 2017/04/11 19:31:22 by jrameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ls.h>

int main(int ac, char **av)
{
  t_flags flags;
  int     i;
  t_dirs *dirs;

  flags = 0;
  (void)ac;
  i = flag_handler(av + 1, &flags);
  dirs = dir_handler(av + i, flags);
  if (flags & REVERSE_FLAG)
    reverse_dirs(&dirs);
  ft_display(dirs, flags);
  memory_handler(&dirs, DIRS_MEM);
  exit(0);
}

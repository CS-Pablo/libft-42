/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:59:13 by csauron           #+#    #+#             */
/*   Updated: 2024/09/08 18:17:30 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c);
void    ft_print_alphabet();
void    ft_print_reverse_alphabet();
void    ft_print_numbers();
void    ft_is_negative(int n);
void    ft_prnt_rslt(char x, char y, char z);
void    ft_print_comb();
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void    ft_combn(int n, char c,char *tab);
void    ft_print(char *tab, char c);
void	ft_print_combn(int n);
void    ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void    ft_ultimate_ft(int *********nbr);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int     ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);
void	ft_print_int_tab(int *tab, int size);

#endif
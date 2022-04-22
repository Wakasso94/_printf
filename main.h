#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void _putchar(char c, int fd);
char *ft_itoa(int n);

int	ft_print_ptr(unsigned long long ptr);
void ft_put_ptr(uintptr_t num);
int	ft_ptr_len(uintptr_t num);

int	ft_formats(va_list args, const char format);
int	ft_printchar(int c);
int	ft_printstr(char *str);

int	ft_printnbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_printpercent(void);

char *ft_uitoa(unsigned int n);
int	ft_num_len(unsigned	int num);
void ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned	int num);

void ft_putstr(char *str);
int	_printf(const char *format, ...);

#endif

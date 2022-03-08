#ifndef LIBPCTO_H
# define LIBPCTO_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h>

void print_int(int n);
void print_float(float n);
void print_char(char c);
void print_str(char *s);
void print_newline(void);

int		read_int(void);
float	read_float(void);
char	read_char(void);
char	*read_str(void);

int	get_year(void);
int	get_month(void);
int	get_month_day(void);
int	get_hour(void);
int	get_minute(void);
int	get_second(void);

#endif

#ifndef LIBPCTO_H
# define LIBPCTO_H

# include <unistd.h>
# include <stdio.h>

void print_int(int n);
void print_float(float n);
void print_char(char c);
void print_str(char *s);
void print_newline(void);

int		read_int(void);
float	read_float(void);
char	read_char(void);
char	*read_str(void);

#endif

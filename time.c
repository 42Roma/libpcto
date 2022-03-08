#include "libpcto.h"

static time_t		time_raw = -1;
static struct tm	*time_struct = NULL;

void	set_time(void)
{
	if (time_raw >= 0)
		return ;
	time_raw = time(NULL);
	time_struct = localtime(&time_raw);
	if (!time_struct)
	{
		printf("An error occoured while using a time function\n");
		exit(1);
	}
}

int	get_year(void)
{
	set_time();
	return time_struct->tm_year + 1900;
}

int	get_month(void)
{
	set_time();
	return time_struct->tm_mon;
}

int	get_month_day(void)
{
	set_time();
	return time_struct->tm_mday;
}

int	get_hour(void)
{
	set_time();
	return time_struct->tm_hour;
}

int	get_minute(void)
{
	set_time();
	return time_struct->tm_min;
}

int	get_second(void)
{
	set_time();
	return time_struct->tm_sec;
}

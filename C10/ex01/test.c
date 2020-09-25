#include "ft_cat.h"

int main(){
	char s[270];
	int i;

	for(i = 0; i<270; i+=2){
		s[i] = 'a';
		s[i + 1] = '/';
	}
	s[i] = 0;

	if (basename(s) == NULL) //|| ft_strlen(s) > 255)
	{
		errno = ENAMETOOLONG;
		ft_print_error_msg(s, strerror(errno));
	}
	else
		ft_print_error_msg(s, basename(s));

/*	int fd = open("includes", O_RDONLY);
	char c[255];
	if (fd < 0){
		ft_print_error_msg("includes", strerror(errno));
	}
	if (read(fd, c, 255) < 1)
		ft_print_error_msg("includes", strerror(errno));
	close(fd);*/
	return 0;
}

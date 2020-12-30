#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	int ret1;
	int ret2;

	ft_printf("[conversion:%%c]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*c", INT_MAX, 'a');
	ret2 = ft_printf("%*c", INT_MAX, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*c", INT_MAX + 1, 'a');
	ret2 = ft_printf("%*c", INT_MAX + 1, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*c", INT_MAX + 2, 'a');
	ret2 = ft_printf("%*c", INT_MAX + 2, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*c", INT_MIN, 'a');
	ret2 = ft_printf("%*c", INT_MIN, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*c", INT_MIN - 1, 'a');
	ret2 = ft_printf("%*c", INT_MIN - 1, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*c", INT_MIN + 1, 'a');
	ret2 = ft_printf("%*c", INT_MIN + 1, 'a');
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%s]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*s", INT_MAX, "test");
	ret2 = ft_printf("%*s", INT_MAX, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*s", INT_MAX + 1, "test");
	ret2 = ft_printf("%*s", INT_MAX + 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*s", INT_MAX + 2, "test");
	ret2 = ft_printf("%*s", INT_MAX + 2, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*s", INT_MIN, "test");
	ret2 = ft_printf("%*s", INT_MIN, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*s", INT_MIN - 1, "test");
	ret2 = ft_printf("%*s", INT_MIN - 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*s", INT_MIN + 1, "test");
	ret2 = ft_printf("%*s", INT_MIN + 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%p]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*p", INT_MAX, "test");
	ret2 = ft_printf("%*p", INT_MAX, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*p", INT_MAX + 1, "test");
	ret2 = ft_printf("%*p", INT_MAX + 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*p", INT_MAX + 2, "test");
	ret2 = ft_printf("%*p", INT_MAX + 2, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*p", INT_MIN, "test");
	ret2 = ft_printf("%*p", INT_MIN, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*p", INT_MIN - 1, "test");
	ret2 = ft_printf("%*p", INT_MIN - 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*p", INT_MIN + 1, "test");
	ret2 = ft_printf("%*p", INT_MIN + 1, "test");
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%d]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*d", INT_MAX, 666);
	ret2 = ft_printf("%*d", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*d", INT_MAX + 1, 666);
	ret2 = ft_printf("%*d", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*d", INT_MAX + 2, 666);
	ret2 = ft_printf("%*d", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*d", INT_MIN, 666);
	ret2 = ft_printf("%*d", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*d", INT_MIN - 1, 666);
	ret2 = ft_printf("%*d", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*d", INT_MIN + 1, 666);
	ret2 = ft_printf("%*d", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%i]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*i", INT_MAX, 666);
	ret2 = ft_printf("%*i", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*i", INT_MAX + 1, 666);
	ret2 = ft_printf("%*i", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*i", INT_MAX + 2, 666);
	ret2 = ft_printf("%*i", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*i", INT_MIN, 666);
	ret2 = ft_printf("%*i", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*i", INT_MIN - 1, 666);
	ret2 = ft_printf("%*i", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*i", INT_MIN + 1, 666);
	ret2 = ft_printf("%*i", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%u]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*u", INT_MAX, 666);
	ret2 = ft_printf("%*u", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*u", INT_MAX + 1, 666);
	ret2 = ft_printf("%*u", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*u", INT_MAX + 2, 666);
	ret2 = ft_printf("%*u", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*u", INT_MIN, 666);
	ret2 = ft_printf("%*u", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*u", INT_MIN - 1, 666);
	ret2 = ft_printf("%*u", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*u", INT_MIN + 1, 666);
	ret2 = ft_printf("%*u", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%x]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*x", INT_MAX, 666);
	ret2 = ft_printf("%*x", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*x", INT_MAX + 1, 666);
	ret2 = ft_printf("%*x", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*x", INT_MAX + 2, 666);
	ret2 = ft_printf("%*x", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*x", INT_MIN, 666);
	ret2 = ft_printf("%*x", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*x", INT_MIN - 1, 666);
	ret2 = ft_printf("%*x", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*x", INT_MIN + 1, 666);
	ret2 = ft_printf("%*x", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%X]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*X", INT_MAX, 666);
	ret2 = ft_printf("%*X", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*X", INT_MAX + 1, 666);
	ret2 = ft_printf("%*X", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*X", INT_MAX + 2, 666);
	ret2 = ft_printf("%*X", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*X", INT_MIN, 666);
	ret2 = ft_printf("%*X", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*X", INT_MIN - 1, 666);
	ret2 = ft_printf("%*X", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*X", INT_MIN + 1, 666);
	ret2 = ft_printf("%*X", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%%%]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*%", INT_MAX);
	ret2 = ft_printf("%*%", INT_MAX);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*%", INT_MAX + 1);
	ret2 = ft_printf("%*%", INT_MAX + 1);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*%", INT_MAX + 2);
	ret2 = ft_printf("%*%", INT_MAX + 2);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*%", INT_MIN);
	ret2 = ft_printf("%*%", INT_MIN);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*%", INT_MIN - 1);
	ret2 = ft_printf("%*%", INT_MIN - 1);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*%", INT_MIN + 1);
	ret2 = ft_printf("%*%", INT_MIN + 1);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");




	ft_printf("[conversion:%%w]\n ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");

	ret1 = printf("%*w", INT_MAX, 666);
	ret2 = ft_printf("%*w", INT_MAX, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*w", INT_MAX + 1, 666);
	ret2 = ft_printf("%*w", INT_MAX + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*w", INT_MAX + 2, 666);
	ret2 = ft_printf("%*w", INT_MAX + 2, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*w", INT_MIN, 666);
	ret2 = ft_printf("%*w", INT_MIN, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*w", INT_MIN - 1, 666);
	ret2 = ft_printf("%*w", INT_MIN - 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ret1 = printf("%*w", INT_MIN + 1, 666);
	ret2 = ft_printf("%*w", INT_MIN + 1, 666);
	ft_printf("[   printf_ret:%d]\n[ft_printf_ret:%d]\n-----\n", ret1, ret2);

	ft_printf(" ~=~=~=~=~=~=~=~=~=~=~=~==~=~ \n");


}

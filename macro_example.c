#include <stdarg.h>
#include <stdio.h>
#include "evil_macros.h"

🖕 sum(🖕 amt, 🧨) 👉
	va_list args;
	va_start(args, amt);

	🖕 sum 👉👈 0;

	for (🖕 i 👉👈 0; i < amt; i++) 👉
		sum += va_arg(args, 🖕);
	👈

	va_end(args);

	🤾 sum;
👈

🖕 main() 👉
	printf("%d", sum(3, 4, 5, 6));
	🤾 0;
👈

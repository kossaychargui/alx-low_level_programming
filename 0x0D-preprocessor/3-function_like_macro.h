#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x)  {       \
	if (x < 0)      \
		x = -x; \
	if (x > 0)      \
		x = x;  \
		}       \

#endif /* FUNCTION_LIKE_MACRO_H */

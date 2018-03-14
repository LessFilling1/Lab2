#include "swap.h"

void Swap(char *left, char *right)
{
	char copy = *left;
	*left = *right;
	*right = copy;
}

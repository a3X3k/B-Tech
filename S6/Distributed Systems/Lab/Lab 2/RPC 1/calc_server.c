/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calc.h"

int *
calc_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	printf("- Addition of %d and %d is %d.\n\n", argp->a, argp->b, ( argp->a + argp->b ) );
	result = argp->a + argp->b;

	return &result;
}

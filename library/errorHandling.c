/*
 * errorHandling.c
 *
 *  Created on: 22 dic 2018
 *      Author: ugo
 */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "errorHandling.h"


void report_error(const char *msg, const char *file, int line_no, int use_perror)
{
	fprintf(stderr,"[%s:%d] ",file,line_no);

	if(use_perror != 0)
	{
		perror(msg);
	}
	else
	{
		fprintf(stderr, "%s\n",msg);
	}
}

void report_error_q(const char *msg, const char *file, int line_no, int use_perror)
{
	report_error(msg, file, line_no, use_perror);
	exit(EXIT_FAILURE);
}

# makefile for misId
# (c) Tody 2012, T-ware Inc.
# Author: Tody

CC=gcc

misId:
	$(CC) misId.c soapC.c soapClient.c stdsoap2.c -o misId
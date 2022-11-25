# -*- Makefile -*-

CC = gcc
CFLAGS += -Wall -Wextra -Werror
LINKERFLAG = -lm
SOURCES = my_printf.c my_printf.h print_functions.c
OBJECTS = $(SOURCES: .c=.o)
TARGET = my_printf

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean fclean re

clean: 
	@rm -f *.o 

fclean: 
	@rm $(TARGET0)
	$(clean) 

re: $(fclean) 
	$(MAKE)
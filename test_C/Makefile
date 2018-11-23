##PROJECT
NAME = exec_test 
CC = gcc
CFLAGS = -Wall -Wextra -Werror

##DIRECTORIES
SRC_PATH = srcs/
OBJ_PATH = objs/
INC_PATH = includes/

##FILES
SRC_NAME = test.c \
	   size.c \
	   print.c
OBJ_NAME = $(SRC_NAME:.c=.o)

##VARIABLES
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH))
LOAD = "\033[32m████\033[0m\c"
NB_FILE := $(words $(wildcard srcs/*.c)) 

.PHONY: all, clean, fclean, re

##RULES
all: $(NAME)
	while [[${NB_FILE} -gt 0]];\
	do echo ${LOAD};\
		((${NB_FILE} = ${NB_FILE} - 1)); \
	done
	@echo " $(NB_FILE)fichier compilés"

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $^
	@echo " [$(NAME)] %.o\t\t\033[1;32m[Creating...]\033[0m"
	@echo " [$(NAME)] $(NAME)\t\033[1;32m[Creating...]\033[0m"
	@echo " \t\t\t\t\033[1;32m[Done]\033[0m\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo " [$(NAME)] %.o\t\t\033[1;34m[Removing...]\033[0m"
	@echo " \t\t\t\t\033[1;34m[Done]\033[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@echo " [$(NAME)] $(NAME)\t\033[1;34m[Removing...]\033[0m"
	@echo " \t\t\t\t\033[1;34m[Done]\033[0m\n"

re: fclean all

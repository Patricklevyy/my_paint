##
## EPITECH PROJECT, 2023
## B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
## File description:
## Makefile
##

SRC := $(shell find . -name "*.c")

OBJ := $(patsubst %.c,%.o,$(SRC))

NAME = my_paint

CFLAGS = -g3 -Wall -Wextra

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -lm

ECHO         =         /bin/echo -e
DEFAULT      =         "\033[00m"
BOLD         =         "\e[1m"
RED          =         "\e[31m"
GREEN        =         "\e[32m"
LIGHT_BLUE   =         "\e[94m"
WHITE        =         "\e[1;37m"

all: ${NAME}

${NAME}: ${OBJ}
		echo
		$(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
		"SRC files successfully built. "$(DEFAULT)
		gcc ${OBJ} -o ${NAME} ${CFLAGS} ${CSFML}\
		&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
		|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)

clean:
	rm -rf $(OBJ)
	$(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Clean SRC "$(DEFAULT)

fclean: clean
	rm -f ${NAME}
	rm -f *.o
	($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Fclean SRC "$(DEFAULT))

re: fclean all

.PHONY: all clean fclean re

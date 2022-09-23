SRCS			=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJS			= 	${SRCS:.cpp=.o}
DEPS			= 	${SRCS:.cpp=.d}
NAME			= 	brainz
CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -MMD -MP -std=c++98

all:		$(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} 

-include: $(DEPS)

$(NAME):	${OBJS} $(DEPS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			${RM} ${OBJS} $(DEPS)

fclean:		clean
			${RM} ${NAME}

re:			fclean
			make all


.PHONY:		all clean fclean re
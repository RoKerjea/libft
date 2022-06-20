# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rokerjea <rokerjea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 17:56:16 by rokerjea          #+#    #+#              #
#    Updated: 2022/06/20 13:13:19 by rokerjea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is a minimal set of ANSI/VT100 color codes
_END=$'\033[0m
_BOLD=$'\033[1m
_UNDER=$'\033[4m
_REV=$'\033[7m

# Colors
_GREY=$'\033[30m
_RED=$'\033[31m
_GREEN=$'\033[32m
_YELLOW=$'\033[33m
_BLUE=$'\033[34m
_PURPLE=$'\033[35m
_CYAN=$'\033[36m
_WHITE=$'\033[37m

SRCS= ${addprefix libsrc/, \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c\
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c}
	
SRC_BONUS= ft_lstsize.c ft_lstnew.c ft_lstadd_front.c ft_lstlast.c
SRC_BONUS:= $(SRC_BONUS) ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c
HEAD	= libft.h
RM		= rm -rf
NAME	= libft.a
CC 		= gcc
OBJECTS = $(subst /,/build/,${SRCS:.c=.o})
BONUS_OBJ = $(subst /,/build/,${SRCS:.c=.o})
CFLAGS	= -Wall -Werror -Wextra

all:		${NAME}

${NAME}:	${HEAD} ${OBJECTS}
	@echo "${_UNDER}${_RED}Creating library${_END}"
	@echo "${_BOLD}${_GREEN}ar rc ${NAME} ${OBJECTS}${_END}"
	@ar rc ${NAME} ${OBJECTS}

#-include ${DEPS}

bonus: $(NAME) $(BONUS_OBJ)
	ar rc ${NAME} ${BONUS_OBJ}

${OBJECTS}: $(subst .o,.c,$(subst /build/,/,$@))
	@if [ ! -d "./$(dir $@)" ]; then\
		echo "${_BOLD}${_UNDER}${_BLUE}"mkdir -p $(dir $@)"${_END}";\
		mkdir -p $(dir $@);\
	fi
	@echo "${_BOLD}${_BLUE}"$(CC) -c $(subst .o,.c,$(subst /build/,/,$@)) -o $@"${_END}"
	@$(CC) -c $(subst .o,.c,$(subst /build/,/,$@)) -o $@

clean:
	@echo "${_UNDER}${_RED}Deleting Objects and Dependencies${_END}"
	@echo "${_BOLD}${_YELLOW}"${RM} ${OBJECTS} ${BONUS_OBJ}"${_END}"
	@${RM} ${OBJECTS} ${BONUS_OBJ}
	@echo "${_BOLD}${_YELLOW}"${RM} libsrc/build"${_END}"
	@${RM} libsrc/build

fclean:	clean
	@echo "${_UNDER}${_RED}Deleting library${_END}"
	@echo "${_BOLD}${_RED}"${RM} ${NAME}"${_END}"
	@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

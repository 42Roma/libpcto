CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(LIB_DIR)

AR		=	ar
ARFLAGS	=	rcs

LIB		=	libpcto
LIB_DIR	=	../$(LIB)
LIB_FLS	=	print.c read.c
LIB_SRC	=	$(addprefix $(LIB_DIR)/, $(LIB_FLS))
LIB_OBJ	=	$(LIB_SRC:%.c=%.o)
LIB_A	=	$(LIB_DIR)/$(LIB).a

default:
	@echo "Error: specify an executable to make"

%: %.c $(LIB_A)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB_A): $(LIB_OBJ)
	$(AR) $(ARFLAGS) $@ $^

fclean:
	$(RM) $(LIB_A) $(LIB_OBJ)

.PHONY: fclean

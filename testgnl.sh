make -C libft -j 8
gcc -Wall -Wextra -Werror main.c get_next_line.c libft/libft.a
echo "\033[1;35mTEST :\n\033[0m"
./a.out test.c test2.c backslashn fatline truc withoutn 

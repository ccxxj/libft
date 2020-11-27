# libft
this is libft project to create my own C library
PART 1
Re-code the following functions. These function do not need any external functions:
memset
bzero
memcpy
memccpy
memmove
memchr
memcmp
strlen
strlcpy
strlcat
strchr
strrchr
strnstr
strncmp
atoi
isalpha
isdigit
isalnum
isascii
isprint
toupper
tolower
Re-code the following functions, using the function “malloc”:
calloc
strdup

PART 2
Code a set of functions that are either not included in the libc, or included in a different form.
substr
strjoin
strtrim
split
itoa
strmapi
putchar_fd
putstr_fd
putendl_fd
putnbr_fd

BONUS PART
Having functions to manipulate memory and strings is very useful, but you’ll soon discover that having functions to manipulate lists is even more useful.
ft_lstnew: Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
ft_lstadd_front: Adds the element ’new’ at the beginning of the list.
ft_lstsize: Counts the number of elements in a list.
ft_lstlast: Returns the last element of the list.
ft_lstadd_back: Adds the element ’new’ at the end of the list.
ft_lstdelone: Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
ft_lstclear: Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
ft_lstiter: Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
ft_lstmap: Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

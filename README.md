# Libft

My first own C library. Developed as a part of syllabus of 42 Silicon Valley.
List of all functions are stored in [*function_list.txt*](https://github.com/ytanne/libft/blob/master/function_list.txt).

# Installation

Clone the repository to a directory.
```
git clone https://github.com/ytanne/libft.git libft
```
Run make to get library.
```
cd libft && make && make clean
```
Voila, you get the libft.a that has all listed functions. 

# Uninstallation

To clean up the mess after the make run the following.
```
make fclean 
```
Optional
```
cd .. && rm -rf libft
```

# Functions Descriptions

| Function | Description |
| -------- | ----------- |
| ft_memset | Fill a byte string with a byte value |
| ft_bzero | Write zeroes to a byte string |
| ft_memcpy | Copy memory area |
| ft_memccpy | Copy string until character found |
| ft_memmove | Copy byte string |
| ft_memchr | Locate byte in byte string |
| ft_memcmp | Compare byte string |
| ft_strlen | Find length of string |
| ft_strdup | Save a copy of a string |
| ft_strcpy | Copy strings |
| ft_strncpy | Copy strings |
| ft_strcat | Concatenate strings |
| ft_strncat | Concatenate strings |
| ft_strlcat | Size-bounded string copying and concatenation |
| ft_strchr | Locate character in string |
| ft_strrchr | Locate character in string |
| ft_strstr | Locate substring in a string |
| ft_strnstr | Locate substring in a string |
| ft_strcmp | Compare strings |
| ft_strncmp | Compare strings |
| ft_atoi | Converts ASCII string to integer |
| ft_isalpha | Alphabetic character test |
| ft_isdigit | Decimal-digital character test |
| ft_isalnum | Alphanumeric character test |
| ft_isascii | Test for ASCII character |
| ft_isprint | Printing character test (space character inclusive) |
| ft_toupper | Lower case to upper case letter conversion |
| ft_tolower | Upper case to lower case letter conversion |
| ft_memalloc | Memory allocation |
| ft_memdel | Memory deallocation |
| ft_strnew | Allocates a "fresh" string ending with '\0' |
| ft_strdel | Deallocates a string |
| ft_strclr | Sets every character of string to '\0' |
| ft_striter | Applies a function to every character |
| ft_striteri | Applies a function to every character with its index |
| ft_strmap | Applies a function to every character and produce "fresh" string |
| ft_strmapi | Applies a function to every character with index 'i' and produce "fresh" string |
| ft_strequ | Lexicographical comparison between string |
| ft_strnequ | Lexicographical comparison between strings until n-th byte |
| ft_strsub | Allocates and returns "fresh" substring of length 'len' |
| ft_strjoin | Allocates and returns string resulted from concatenation of two strings |
| ft_strtrim | Removes whitespaces at the beginning and end of string | 
| ft_strsplit | Splits string using character 'c' as a delimeter |
| ft_itoa | Converts integer to string |
| ft_putchar | Outputs character to the standard output |
| ft_putstr | Outputs string to the standard output |
| ft_putendl | Outputs string to the standard output followed by newline |
| ft_putnbr | Outputs integer to the standard output |
| ft_putchar_fd | Outputs character to the file descriptor |
| ft_putstr_fd | Outputs string to the file descriptor |
| ft_putendl_fd | Outputs string to the file descriptor followed by newline |
| ft_putnbr_fd | Outputs the integer n to the file descriptor |
| ft_lstnew | Allocates and returns "fresh" link |
| ft_lstdelone | Deallocates link's content and address |
| ft_lstdel | Deallocates pointed link's and following link's contents and addresses |
| ft_lstadd | Add new element at the beginning of the list |
| ft_lstiter | Iterates and applies function to every element of list |
| ft_lstmap | Does the same as the previous function, but stores the result of function to new list |
| ft_btree_new_node | Creates an element of binary tree |
| ft_btree_apply_in | Traverses through binary tree in inorder and applies function to each element |
| ft_btree_apply_pr | Traverses through binary tree in preorder and applies function to each element |
| ft_btree_apply_sf | Traverses through binary tree in postorder and applies function to each element |
| ft_print_bits | Prints bits |

 
# Comments
**Didn't check for norm and moulinette yet**

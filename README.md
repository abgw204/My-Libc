# Libft - Standard C Library Recreation

This library reimplements several functions from the standard C library, along with helper functions for handling strings, memory, and linked lists. It was developed as part of the 42 school curriculum to improve proficiency in C programming.

## 🧠 Conversion Functions

- **atoi**: Converts a string to an integer.
- **itoa**: Converts an integer to a string.

## 🔡 Character Functions

- **isalnum**: Checks if a character is alphanumeric.
- **isalpha**: Checks if a character is a letter.
- **isascii**: Checks if a character is part of the ASCII table.
- **isdigit**: Checks if a character is a digit.
- **isprint**: Checks if a character is printable.
- **tolower**: Converts a character to lowercase.
- **toupper**: Converts a character to uppercase.

## 🧵 String Functions

- **strlen**: Returns the length of a string.
- **strchr**: Returns a pointer to the first occurrence of a character.
- **strrchr**: Returns a pointer to the last occurrence of a character.
- **strncmp**: Compares up to `n` characters of two strings.
- **strnstr**: Searches for a substring within another, limited by `n` characters.
- **strdup**: Duplicates a string into newly allocated memory.
- **strlcpy**: Copies strings safely to buffers.
- **strlcat**: Concatenates strings safely to buffers.
- **strjoin**: Joins two strings into a new one.
- **substr**: Extracts a substring from a string.
- **strtrim**: Removes characters from the beginning and end of a string.
- **split**: Splits a string into an array of substrings based on a delimiter.
- **strmapi**: Applies a function to each character of a string (with index), returning a new string.
- **striteri**: Applies a function to each character of a string (with index), modifying it in place.

## 💾 Memory Functions

- **memset**: Fills a memory block with a specific byte.
- **bzero**: Zeros out a block of memory.
- **memcpy**: Copies bytes from one memory area to another.
- **memmove**: Safely copies memory, even if areas overlap.
- **memchr**: Locates a byte in a block of memory.
- **memcmp**: Compares two blocks of memory.
- **calloc**: Allocates memory initialized to zero.

## 🖨️ Output Functions

- **putchar_fd**: Writes a character to a file descriptor.
- **putstr_fd**: Writes a string to a file descriptor.
- **putendl_fd**: Writes a string followed by a newline.
- **putnbr_fd**: Writes an integer.

## 🔗 Linked List Functions

- **lstnew**: Creates a new node.
- **lstadd_front**: Adds a node to the beginning of the list.
- **lstadd_back**: Adds a node to the end of the list.
- **lstsize**: Returns the size of the list.
- **lstlast**: Returns the last node of the list.
- **lstdelone**: Frees a single node.
- **lstclear**: Frees the entire list.
- **lstiter**: Iterates over the list, applying a function to each node.

---

### 🚀 Usage

Clone the repository and use `make` to generate `.a` file and compile your project with it. This library serves as a solid base for building more advanced C projects with full control and understanding.

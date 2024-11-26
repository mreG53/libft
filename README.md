![image](https://github.com/user-attachments/assets/37b6258e-bb00-45c5-bd1f-03f92fa0cbd1)

# Libft - The First Project of Ecole 42 

This is "libft," the first project of Ecole 42. It consists of 43 functions derived from C libraries and BSD libraries. These functions can be built using a Makefile.

## Setup

To install and run the project, clone the GitHub repository to your computer using `git clone`. Then, navigate into the project directory and run `make`.

If you want to use a different build method, you can modify the **Makefile** by adding the following lines. First, create a **main.c** file and include the libft library in it. You can test the functions within this **main.c** file. To build and run the program, simply type **make main** in the terminal.

```Makefile
main: $(NAME) main.c
        $(CC) $(CFLAGS) main.c libft.a -o main
        ./main
```

Example main.c

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char a[] = "Hello, World";
    printf("%zu", ft_strlen(a));

    return (0);
}
```

Good luck!

# LIBFT_42

<!-- Badges (replace URLs if you host CI or want different badges) -->
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](#)
[![42 School](https://img.shields.io/badge/42-School-orange.svg)](#)

---

## Introduction
`LIBFT_42` is a custom C library built for the 42 curriculum. It reimplements common C standard library functions and provides useful utilities that can be reused across projects.

## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)

## Features
- Reimplementation of many standard C functions (strings, memory, chars).
- Utility functions like `ft_split`, `ft_itoa`, and others.
- (Optional) Linked list helpers: `ft_lstnew`, `ft_lstadd_back`, etc.
- `Makefile` with standard targets (`all`, `clean`, `fclean`, `re`, `bonus`).
- Produces a static library `libft.a` for easy linking.

## Installation
```bash
git clone https://github.com/idbella-med/LIBFT_42.git
cd LIBFT_42
make
# optional: make bonus
```
After make you should have libft.a in the project root.

## Usage:

Example main.c:
```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello, LIBFT_42!");
    if (!s) return 1;
    ft_putendl_fd(s, 1);
    free(s);
    return 0;
}
```

```bash
gcc main.c ./libft.a -o example
./example
```

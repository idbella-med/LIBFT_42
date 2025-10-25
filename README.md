# LIBFT_42

<!-- Badges (replace URLs if you host CI or want different badges) -->
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/license-MIT-blue.svg)](#)
[![42 School](https://img.shields.io/badge/42-School-orange.svg)](#)

---

![LIBFT Logo](assets/logo.png) <!-- add a small repo logo at assets/logo.png -->

## Introduction
`LIBFT_42` is a custom C library built for the 42 curriculum. It reimplements common C standard library functions and provides useful utilities that can be reused across projects.

## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Structure](#structure)
- [Functions (high level)](#functions-high-level)
- [Examples](#examples)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [License](#license)

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
After make you should have libft.a in the project root.

Usage

Include the header in your project:

#include "libft.h"


Compile and link:

gcc -Wall -Wextra -Werror main.c ./libft.a

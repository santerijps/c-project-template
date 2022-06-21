# C Project Structure Template

This repository can be used as a template for C projects. The project structure looks like this:

```txt
root
---- bin
-------- main.exe
---- src
-------- include
------------ some_file.h
-------- main.c
-------- some_file.c
---- .gitignore
---- Makefile
---- README.md
```

The `Makefile` creates the `bin` directory if it doesn't exist. The included files must be linked when using the compiler. Check the `Makefile` for reference.

**Note:** This template assumes you're using `gcc` or `tcc`.

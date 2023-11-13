# Dynamic Libraries and Environment Variables

## Dynamic Libraries

Dynamic libraries, often referred to as shared libraries, are compiled code modules that can be loaded into a program at runtime. They provide a way to share code among multiple programs, reducing overall disk space usage and facilitating updates. Here's a brief overview of key concepts related to dynamic libraries:

### How does it work?

Dynamic linking allows a program to call functions from a library without having the library's code present at compile time. The linking occurs at runtime when the program and the library are loaded into memory.

### Creating a Dynamic Library

To create a dynamic library, you typically compile your code with position-independent code (PIC) and create a shared object file (e.g., `.so` on Unix-like systems).

```bash
gcc -shared -fPIC -o mylibrary.so mylibrary.c
```

### Using a Dynamic Library

To use a dynamic library in your program, you need to link it during compilation and make sure it can be found during runtime.

```bash
gcc -o myprogram myprogram.c -L/path/to/library -lmylibrary
```

## $LD_LIBRARY_PATH Environment Variable

`$LD_LIBRARY_PATH` is an environment variable that specifies a list of directories where the system should look for dynamic libraries before searching the default locations. It's a crucial setting for managing library paths.

### How to use it

```bash
export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
./myprogram
```

This ensures that `myprogram` finds the necessary libraries in the specified path.

## Static vs. Shared Libraries

### Differences

- **Static Libraries:**
  - Compiled into the executable at compile time.
  - Increases the executable size.
  - No external dependencies at runtime.

- **Dynamic Libraries:**
  - Linked at runtime.
  - Smaller executable size.
  - External dependencies resolved during runtime.

## Basic Tools: nm, ldd, ldconfig

### nm

`nm` displays symbol information from object files, including libraries. It's useful for inspecting the symbols in a binary or library.

```bash
nm mylibrary.so
```

### ldd

`ldd` shows the shared libraries that a program depends on.

```bash
ldd myprogram
```

### ldconfig

`ldconfig` updates the shared library cache, which is used by the system to locate dynamically linked libraries.

```bash
sudo ldconfig
```

These basic tools are essential for debugging and understanding the dependencies of your programs.

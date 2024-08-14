In C, **storage classes** define the scope, visibility, and lifetime of variables and functions.
 They control how and where variables and functions are stored and accessed in memory. There are four primary storage classes in C:

### 1. `auto`

- **Default Storage Class**: If no storage class is specified, variables inside functions are `auto` by default.
- **Scope**: Local to the block in which it is declared.
- **Lifetime**: Exists only while the function or block in which it is declared is executing.
- **Initialization**: Not initialized by default (contains garbage values).

**Example**:
```c
#include <stdio.h>

void function() {
    auto int x = 10;  // 'auto' is the default storage class
    printf("%d\n", x);
}
```

### 2. `static`

- **Scope**: Local to the block in which it is declared, but retains its value between function calls.
- **Lifetime**: Throughout the execution of the program.
- **Initialization**: Initialized to zero by default if not explicitly initialized.
- **Visibility**: Local to the file if used in global scope, meaning it cannot be accessed from other files.

**Example**:
```c
#include <stdio.h>

void function() {
    static int count = 0;  // Retains its value between function calls
    count++;
    printf("%d\n", count);
}

int main() {
    function();  // Prints 1
    function();  // Prints 2
    function();  // Prints 3
    return 0;
}
```

### 3. `extern`

- **Scope**: Global; can be accessed across multiple files.
- **Lifetime**: Throughout the execution of the program.
- **Initialization**: Variables must be declared `extern` in one file and defined in another.
- **Visibility**: Makes variables or functions visible across multiple files.

**Example**:
```c
// file1.c
#include <stdio.h>

int globalVar = 100;  // Definition of the global variable

void printVar() {
    printf("%d\n", globalVar);
}

// file2.c
extern int globalVar;  // Declaration of the global variable

int main() {
    printVar();  // Accesses globalVar defined in file1.c
    return 0;
}
```

### 4. `register`

- **Scope**: Local to the block in which it is declared.
- **Lifetime**: Exists only while the function or block is executing.
- **Initialization**: Not initialized by default (contains garbage values).
- **Purpose**: Suggests that the variable be stored in a CPU register for faster access.
However, this is only a suggestion to the compiler, which may or may not honor it.

**Example**:
```c
#include <stdio.h>

void function() {
    register int i;  // Suggests storing 'i' in a register for faster access
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
}

int main() {
    function();
    return 0;
}
```

### Summary

- **`auto`**: Default storage class for local variables; temporary duration and local scope.
- **`static`**: Local variables retain their value between function calls; global variables are restricted to the file scope.
- **`extern`**: Allows variables and functions to be shared between different files.
- **`register`**: Suggests storing a variable in a CPU register for faster access (implementation-dependent).

Understanding these storage classes helps manage the visibility, lifetime, and scope of variables and functions, which is crucial for effective memory management and program organization.

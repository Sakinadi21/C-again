/*In C, an `enum` (short for "enumeration") is a user-defined data type that consists of a set of named integer constants.
 It is used to create a variable that can hold a set of predefined constant values. Enumerations improve code readability by providing meaningful names for integer values.

### Syntax

```c
enum enum_name {
    CONSTANT1,
    CONSTANT2,
    CONSTANT3,
    // ...
};
```

*/
#include <stdio.h>

// Define an enum for days of the week
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    // Declare a variable of enum type
    enum Weekday today;

    // Assign a value to the variable
    today = WEDNESDAY;

    // Print the value of the variable
    printf("Today is day number %d of the week.\n", today);

    return 0;
}
/*
### Explanation

1. **Enum Definition**:
   - `enum Weekday { ... }` defines a new type called `Weekday` with named constants: `MONDAY`, `TUESDAY`, `WEDNESDAY`, etc.
   - By default, `MONDAY` is assigned the value 0, `TUESDAY` 1, `WEDNESDAY` 2, and so on.

2. **Using Enum**:
   - `enum Weekday today;` declares a variable `today` of type `enum Weekday`.
   - `today = WEDNESDAY;` assigns the `WEDNESDAY` value to the `today` variable.

3. **Printing Enum Value**:
   - `printf("Today is day number %d of the week.\n", today);` prints the integer value corresponding to the `WEDNESDAY` constant.

### Enum Values and Type

- **Default Values**: If you don't explicitly assign values to the enumeration constants,
they start from 0 and increment by 1 for each subsequent constant.

- **Custom Values**: You can assign specific values to enumeration constants:

  ```c
  enum Weekday {
      MONDAY = 1,
      TUESDAY = 2,
      WEDNESDAY = 4,
      THURSDAY = 8,
      FRIDAY = 16,
      SATURDAY = 32,
      SUNDAY = 64
  };
  ```

- **Type**: Enums are typically represented as `int` in C. However, the exact size can vary depending on the compiler and platform.

### Enumeration Scoping

1. **Scoped Enumerations (C++11 and later)**:
   - In C++ (not C), you can define scoped enumerations using the `enum class` keyword to provide better type safety and avoid name conflicts.

   ```cpp
   enum class Weekday {
       MONDAY,
       TUESDAY,
       WEDNESDAY,
       THURSDAY,
       FRIDAY,
       SATURDAY,
       SUNDAY
   };

   Weekday today = Weekday::WEDNESDAY;
   ```

2. **No Scoped Enums in C**:
   - In standard C, enums are not scoped. All enumerator names are in the same scope and can potentially cause name conflicts if not carefully managed.

### Summary

- **Definition**: `enum` defines a set of named integer constants.
- **Default Behavior**: Constants are assigned integer values starting from 0.
- **Custom Values**: You can manually assign specific integer values to enumeration constants.
- **Usage**: Enums improve code readability and maintainability by replacing magic numbers with meaningful names.
- **Scoped Enums**: In C++, `enum class` provides scoped enumerations with better type safety.

Enums are a powerful feature for defining and using sets of related constants,
improving code clarity and reducing the likelihood of errors related to magic numbers.
*/

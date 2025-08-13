# Pointers In C++

## Aim:

To study and implement C++ Pointers basics.

## Theory:

A pointer in C++ is a variable that stores the memory address of another variable. Pointers are powerful tools that allow direct memory access and manipulation, making them useful for dynamic memory allocation, arrays, functions, and data structures like linked lists.

### 1. Pointer Declaration-

#### int *ptr;

- This declares ptr as a pointer to an integer. The asterisk * indicates that ptr is not a normal integer variable but a pointer.

### 2. Pointer Initialization-

#### int a = 10;

#### int *ptr = &a;

- Here, &a is the address of variable a, and ptr stores this address. So, ptr "points to" a.

### 3. Dereferencing Pointers-

#### cout << *ptr;

- The *ptr expression accesses the value stored at the memory location pointed to by ptr. This is called dereferencing.

### 4. Pointer arithmetic-

- Pointers can be incremented or decremented. When incremented, a pointer points to the next memory location of its type.

#### ptr++;

### 5. Null Pointer-

#### int *ptr = nullptr;

- A null pointer is a pointer that does not point to any memory location. It is used for safety to avoid accidental memory access.

### 6. Pointer to Pointer-

#### int a = 5;

#### int *p = &a;

#### int **pp = &p;

- pp is a pointer to pointer — it stores the address of pointer p.








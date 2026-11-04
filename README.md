<div align="center">

<img src="assets/c-logo.svg" alt="C Language Logo" width="140" />

# 🚀 C Programming

**Learn. Code. Compile. Repeat.**

A collection of C programs, exercises and mini-projects — from "Hello, World!" to pointers, memory management and data structures.

![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Compiler](https://img.shields.io/badge/compiler-GCC-orange?style=for-the-badge&logo=gnu&logoColor=white)
![Standard](https://img.shields.io/badge/standard-C11-blue?style=for-the-badge)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)
![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen?style=for-the-badge)

[Topics](#-topics-covered) •
[Structure](#-project-structure) •
[Getting Started](#-getting-started) •
[Roadmap](#-learning-roadmap) •
[References](#-references--resources) •
[Contributing](#-contributing)

</div>

---

## 📖 About

This repository is my journey of learning **C programming**. Every program is written to be simple, well-commented and easy to understand, so that beginners can learn from it too.

C was created by **Dennis Ritchie** at Bell Labs in the early 1970s. It is the foundation of operating systems, embedded systems, compilers and many of today's languages, so learning C makes everything else easier.

## ✨ Features

- ✅ Beginner-friendly, well-commented code
- ✅ Topic-wise organised programs
- ✅ Practice problems with solutions
- ✅ Data structures and algorithms in C
- ✅ Easy to compile and run on Linux, macOS and Windows

## 📚 Topics Covered

| # | Topic | What you'll find |
|---|-------|------------------|
| 1 | **Basics** | Variables, data types, operators, input/output |
| 2 | **Control Flow** | `if-else`, `switch`, `for`, `while`, `do-while` |
| 3 | **Functions** | Function basics, recursion, scope |
| 4 | **Arrays & Strings** | 1D/2D arrays, string functions |
| 5 | **Pointers** | Pointer arithmetic, pointers & arrays, pointer to pointer |
| 6 | **Structures & Unions** | `struct`, `union`, `enum`, `typedef` |
| 7 | **Dynamic Memory** | `malloc`, `calloc`, `realloc`, `free` |
| 8 | **File Handling** | `fopen`, `fread`, `fwrite`, `fprintf`, `fscanf` |
| 9 | **Data Structures** | Linked list, stack, queue, trees |
| 10 | **Algorithms** | Searching and sorting |

> 📝 Apne repo ke hisaab se is table ko edit kar lena.

## 🗂 Project Structure

```
c-programming/
├── assets/              # Logo and images
│   └── c-logo.svg
├── basics/              # Hello World, variables, operators
├── control-flow/        # Conditionals and loops
├── functions/           # Functions and recursion
├── arrays-strings/      # Arrays and string handling
├── pointers/            # Pointer programs
├── structures/          # Structs and unions
├── dynamic-memory/      # malloc / calloc / realloc / free
├── file-handling/       # Reading and writing files
├── data-structures/     # Linked list, stack, queue, trees
├── algorithms/          # Sorting and searching
├── LICENSE
└── README.md
```

## ⚙️ Getting Started

### Prerequisites

You need a C compiler. The most popular one is **GCC**.

| OS | Installation |
|----|--------------|
| 🐧 Linux | `sudo apt install build-essential` |
| 🍎 macOS | `xcode-select --install` |
| 🪟 Windows | Install [MinGW-w64](https://www.mingw-w64.org/) or use [WSL](https://learn.microsoft.com/windows/wsl/install) |

Check the installation:

```bash
gcc --version
```

### Clone the repository

```bash
git clone https://github.com/<your-username>/<your-repo-name>.git
cd <your-repo-name>
```

## ▶️ Compile & Run

```bash
# Compile
gcc filename.c -o filename

# Run (Linux / macOS)
./filename

# Run (Windows)
filename.exe
```

**Recommended flags** (show warnings, use the C11 standard):

```bash
gcc -Wall -Wextra -std=c11 filename.c -o filename
```

If your program uses `math.h`, link the math library:

```bash
gcc filename.c -o filename -lm
```

## 💻 Example

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

**Output**

```
Hello, World!
```

## 🗺 Learning Roadmap

```
Basics → Control Flow → Functions → Arrays & Strings → Pointers
      → Structures → Dynamic Memory → File Handling
      → Data Structures → Algorithms → Projects 🎯
```

## 🔗 References & Resources

### 📘 Official Documentation

- [ISO C Standard (WG14)](https://www.open-std.org/jtc1/sc22/wg14/) — the official C standards committee
- [cppreference — C Language](https://en.cppreference.com/w/c) — the best quick reference for C
- [GNU C Manual](https://www.gnu.org/software/gnu-c-manual/) — free C manual by GNU
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/) — compiler options and extensions

### 🎓 Tutorials & Courses

- [Learn-C.org](https://www.learn-c.org/) — interactive tutorials in the browser
- [Beej's Guide to C](https://beej.us/guide/bgc/) — free, friendly and detailed guide
- [CS50 by Harvard](https://cs50.harvard.edu/x/) — free course, starts with C
- [GeeksforGeeks — C Programming](https://www.geeksforgeeks.org/c-programming-language/)
- [TutorialsPoint — C Programming](https://www.tutorialspoint.com/cprogramming/index.htm)

### 📚 Books

- **The C Programming Language** — Brian W. Kernighan & Dennis M. Ritchie (K&R)
- **C Programming: A Modern Approach** — K. N. King
- **Let Us C** — Yashavant Kanetkar (popular among Indian students)
- **Head First C** — David Griffiths & Dawn Griffiths

### 🧪 Practice

- [HackerRank — C](https://www.hackerrank.com/domains/c)
- [Exercism — C Track](https://exercism.org/tracks/c)
- [LeetCode](https://leetcode.com/)

## 🤝 Contributing

Contributions, suggestions and bug fixes are always welcome!

1. 🍴 Fork the repository
2. 🌿 Create a branch: `git checkout -b feature/my-change`
3. 💾 Commit: `git commit -m "Add my change"`
4. 📤 Push: `git push origin feature/my-change`
5. 🔁 Open a Pull Request

## 📄 License

Distributed under the **MIT License**. See [`LICENSE`](LICENSE) for more information.

## 👤 Author

**Mukesh Lalwani**

[![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/your-username)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/your-username)

---

<div align="center">

⭐ **Agar ye repo helpful laga, to ek star zaroor dena!** ⭐

Made with ❤️ and a lot of `printf("debugging");`

</div>
# Brainfuck Interpreter 🧠

> A C++ interpreter for the esoteric Brainfuck programming language

[![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B)](https://isocpp.org/)
[![Apache License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://choosealicense.com/licenses/apache-2.0/)

## 📖 Overview

This project implements a C++ interpreter for the Brainfuck programming language. Despite its minimalistic design with only eight commands, Brainfuck is Turing complete, capable of computing any computable function given sufficient time and memory.

## 🔍 Table of Contents

- [Language Commands](#-language-commands)
- [Features](#-features)
- [Prerequisites](#-prerequisites)
- [Installation](#-installation)
- [Usage](#-usage)
- [License](#-license)
- [Acknowledgments](#-acknowledgments)

## 🔤 Language Commands

Brainfuck uses these eight simple commands:

| Command | Description |
|---------|-------------|
| `>` | Move pointer right |
| `<` | Move pointer left |
| `+` | Increment byte at pointer |
| `-` | Decrement byte at pointer |
| `.` | Output byte at pointer |
| `,` | Input byte and store at pointer |
| `[` | Jump forward to matching `]` if byte is zero |
| `]` | Jump back to matching `[` if byte is nonzero |

## ✨ Features

- **Robust Interpreter:** Efficiently executes Brainfuck code
- **Error Detection:** 
  - Unmatched bracket detection
  - Runtime error handling

## 🔧 Prerequisites

- Modern C++ Compiler (GCC/Clang)
- Git

## 🚀 Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/PascalND/Interperter-f-r-Brainfuck.git
   ```

2. **Open the project**
   - Open the solution file in Visual Studio or your preferred IDE
   - Build the solution to ensure all dependencies are properly set up

## 💻 Usage

### Running the Interpreter

1. Open the solution in your preferred IDE
2. Locate the source code where you need to input your Brainfuck code
3. Insert your Brainfuck program into the designated area in the source code
4. Build and run the solution

### Example Program

Here's a simple "Hello, World!" program in Brainfuck:
```brainfuck
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>
---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
```

## 📄 License

This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE) file for details.

## 👏 Acknowledgments

- The original Brainfuck language design by Urban Müller
- The vibrant esoteric programming languages community
- [Brainfuck on Wikipedia](https://en.wikipedia.org/wiki/Brainfuck) for language specifications

---

*Built with 💻 and ❤️ by PascalND*

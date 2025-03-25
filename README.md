# 📌 Compiler Design Programs
This repository contains **Compiler Design** programs written in **C** and **Flex (Lexical Analyzer)**.

---

## 📜 List of Programs
1️⃣ **Check if a word is a valid C keyword** (`keyword.c`)  
2️⃣ **Check if a string is a valid integer constant** (`integer_constant.c`)  
3️⃣ **Check if a string is a valid identifier** (`identifier.c`)  
4️⃣ **Tokenize a given string** (`tokenizer.c`)  
5️⃣ **Count the number of lines in a C program** (`count_lines.c`)  
6️⃣ **Lexical analysis of an input file using Flex (Lex)** (`lexical.l`)  

---

## 🛠️ Installation (Windows)

### 1️⃣ Install Required Software
#### Install **GCC** (MinGW) for compiling C programs:  
- Download & install [MinGW-w64](https://winlibs.com/)  
- Add `C:\MinGW\bin` (or relevant path) to the **System PATH**  

#### Install **Flex & Bison** for Lexical Analysis:
- Download & install [GnuWin Flex & Bison](http://gnuwin32.sourceforge.net/packages/flex.htm)  
- Add `C:\Program Files\GnuWin32\bin` to the **System PATH**  

---

## 🚀 Running the Programs

### 1️⃣ Compile and Run C Programs
```sh
gcc filename.c -o output.exe
output.exe
```
Example for `keyword.c`:  
```sh
gcc keyword.c -o keyword.exe
keyword.exe
```

---

### 2️⃣ Compile and Run Lexical Analyzer (Flex)
```sh
flex lexical.l
gcc lex.yy.c -o lexer.exe
lexer.exe < input.txt
```

---

## 📂 Files Included

| File Name          | Description |
|--------------------|-------------|
| `keyword.c`       | Checks if an input string is a C keyword |
| `integer_constant.c` | Validates if the input is an integer constant |
| `identifier.c`    | Checks if an input is a valid identifier |
| `tokenizer.c`     | Splits a string into tokens |
| `count_lines.c`   | Counts the number of lines in a C program file |
| `lexical.l`       | Lexical analyzer using Flex |
| `input.txt`       | Sample input for lexical analysis |

---

## 📌 Author
🔗 **GitHub:** [darsaliq00](https://github.com/darsaliq00)


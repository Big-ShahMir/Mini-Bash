# Tiny Shell (tsh)

## Overview

Tiny Shell (tsh) is a minimal shell implementation designed to support basic shell functionality, including executing built-in commands, handling user input, and managing processes. This project is an educational exercise to understand how shells work at the system level.

---

## Features

- **Prompt Display**: Displays a custom prompt (`tsh> `) to take user commands.
- **Built-in Commands**:
  - `cd <directory>`: Change the current working directory.
  - `exit`: Exit the shell.
  - `help`: Display information about the shell.
- **Process Execution**: Supports running external programs.
- **Background Processes**: Supports running processes in the background using `&`.
- **Signal Handling**: Gracefully handles `SIGINT` (Ctrl+C) and other signals.
- **Error Handling**: Handles invalid commands and arguments gracefully.

---

## Directory Structure

```plaintext
.
├── Makefile        # Build instructions for the Tiny Shell
├── tsh.c           # Source code for Tiny Shell
├── README.md       # Project documentation
└── examples/       # Example scripts to test the shell
```

## Build and Usage Instructions

### Prerequisites

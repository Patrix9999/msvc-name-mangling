# Introduction

This project explores the **MSVC name mangling** with practical examples (to better understand the notation of mangles names for msvc compiler).

All of the test cases were done under **Visual Studio 2022** with **MSVC v143**.

# Details

Test cases were created with usage of `__FUNCDNAME__` macro, by creating function of given type.

The detailed exploration of unconfirmed behaviour was done with `undname.exe` tool in **Developer Command Prompt for VS 2022**.
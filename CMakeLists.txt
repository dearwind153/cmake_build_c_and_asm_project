# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(asm_example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#下面两句非常重要，如果需要生成调试，第三句也是必须的
SET(CMAKE_ASM_NASM_SOURCE_FILE_EXTENSIONS asm)  # 设置NASM的文件扩展名为asm
ENABLE_LANGUAGE(ASM_NASM)  # 让CMacke启用NASM的汇编
SET(CMAKE_ASM_NASM_FLAGS "-g") # 让NASM生成调试信息

set(CMAKE_ASM_NASM_OBJECT_FORMAT elf64)

add_executable(asm_example main.cpp add.asm)

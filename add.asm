; add.asm

section .text
global add
global sub

add:
    mov rax, rdi
    add rax, rsi
    ret

sub:
    mov rax, rdi
    sub rax, rsi
    ret

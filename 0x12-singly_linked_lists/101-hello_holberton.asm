section .data
    message db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    mov rsi, message
    xor eax, eax
    call printf

    mov eax, 0
    leave
    ret


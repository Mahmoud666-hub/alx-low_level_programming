section .data
txt db 'Hello, Holberton', 10

section .text
global main
extern printf

main:
mov rdi, txt
mov rax, 0
call printf
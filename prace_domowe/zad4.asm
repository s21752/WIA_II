org     100h

mov ah, 02h
mov dl, 43h
int 0x21

mov ax, 0x4C00
int 0x21

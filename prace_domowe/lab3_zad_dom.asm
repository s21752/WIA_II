; zadanie z wyświetleniem imienia na środku ekranu
org     100h

mov ah, 02h
mov dh, 0Ch
mov dl, 23h
mov bh, 0
int 10h

mov ax, cs
mov ds, ax
mov dx, tekst
mov ah, 9
int 21h

mov ax, 0x4C00
int 0x21

tekst db "Cezary$"

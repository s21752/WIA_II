; zadanie z wyswietleniem w 3 liniach kolejno imienia, nazwiska i ulubionego koloru
org     100h

mov dx, imie
mov ah, 9
int 0x21

mov dx, nazwisko
mov ah, 9
int 0x21

mov dx, kolor
mov ah, 9
int 0x21

mov ax, 0x4C00
int 0x21

imie db "Cezary",10,"$"
nazwisko db "Graban",10,"$"
kolor db "zielony$"

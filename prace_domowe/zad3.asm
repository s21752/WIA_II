; zadanko z nasłuchiwaniem na naciścięnie klawisza i momentalne wyświetlenie który klawisz był wciśnięty
org     100h

mov ah, 01h
int 0x21

mov ax, 0x4C00
int 0x21

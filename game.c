#include <gb/gb.h>
#include <stdio.h>
#include "face.c"

void main() {
    
    set_sprite_data(0, 2, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 76);
    SHOW_SPRITES;
}

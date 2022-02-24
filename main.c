#include <gb/gb.h>
#include "jpchar.c"

void main(){
	SPRITES_8x8;
	set_sprite_data(0, 105, jpchar);
		set_sprite_tile(0, 9);
	move_sprite(0, 8, 16);
        set_sprite_tile(1, 45);
	move_sprite(1, 16, 16);
        set_sprite_tile(2, 21);
	move_sprite(2, 24, 16);
        set_sprite_tile(3, 16);
	move_sprite(3, 32, 16);
        set_sprite_tile(4, 25);
	move_sprite(4, 40, 16);
		set_sprite_tile(5, 91);
	move_sprite(5, 48, 16);
		set_sprite_tile(6, 104);
	move_sprite(6, 56, 16);
		set_sprite_tile(7, 88);
	move_sprite(7, 64, 16);
		set_sprite_tile(8, 69);
	move_sprite(8, 72, 16);
		set_sprite_tile(9, 102);
	move_sprite(9, 80, 16);
	SHOW_SPRITES;
}
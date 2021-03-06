/* 
 * Pac - an ncurses wannabe pacman clone
 *
 * Copyright (C) 2002 Stig Brautaset
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  
 */

#ifndef CREATURE_GHOST_H
#define CREATURE_GHOST_H 1

/* 
 * Define the macro 'myrand' to save us the function call overhead.
 */
#include <stdlib.h>
#define myrand(X) (int)((double)rand()/((double)RAND_MAX + 1) * X)

#define NUM_GHOSTS 4

enum dir_t ghost_initial_direction(int cnt);
void ghost_move(struct env *board, struct creature *ct, int cnt);

#endif 

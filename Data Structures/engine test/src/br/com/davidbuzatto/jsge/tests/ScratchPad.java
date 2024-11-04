/*
 * Copyright (C) 2024 Prof. Dr. David Buzatto
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
package br.com.davidbuzatto.jsge.tests;

import br.com.davidbuzatto.jsge.core.engine.EngineFrame;
import br.com.davidbuzatto.jsge.geom.Rectangle;

/**
 * Classe de testes.
 *
 * @author Prof. Dr. David Buzatto
 */
public class ScratchPad extends EngineFrame {

    /**
     * Cria o teste.
     */
    public ScratchPad() {
        super(800, 450, "Scratch Pad", 60, true);
    }
    Rectangle wall;
    Rectangle player;

    double SPEED = 300;

    @Override
    public void create() {
        wall = new Rectangle(100, 100, 400, 300);
        player = new Rectangle(150, 150, 50, 50);
    }

    @Override
    public void update() {
        double velocity = SPEED * getFrameTime();
        if (isKeyDown(KEY_RIGHT)) {
            player.x += velocity;
        }
        if (isKeyDown(KEY_LEFT)) {
            player.x -= velocity;

        }
        if (isKeyDown(KEY_UP)) {
            player.y -= velocity;
        }
        if (isKeyDown(KEY_DOWN)) {
            player.y += velocity;

        }
        
        if (player.x + player.width >= wall.x + wall.width) {
            player.x = wall.x + wall.width - player.width;
        }
        if (player.x <= wall.x) {
            player.x = wall.x;

        }
        if (player.y <= wall.y ) {
            player.y = wall.y ;
        }
        if (player.y + player.height >= wall.y + wall.height) {
            player.y = wall.y + wall.height - player.height;

        }
    }

    @Override
    public void draw() {
        player.draw(this, RED);
        wall.draw(this, BLACK);
    }

    
        
       
    

    


}

/****************************************************************************
 * Copyright (C) 2016,2017 Maschell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#include "ContentAbout.h"

ContentAbout::ContentAbout(): ContentTemplate(){
    headLine.setText("Acerca de");
    headLine.setFontSize(50);
    headLine.setAlignment(ALIGN_TOP_CENTER);
    headLine.setPosition(0,-110);
    headLine.setColor(glm::vec4(0.3f,0.3f,0.3f,1.0f));
    append(&headLine);

    //Copy paste from dimok's code. Thanks <3
    GuiText *text = NULL;

    f32 positionY = 210.0f;
    f32 positionX = 40.0f;
    f32 positionX2 = 250.0f;
    f32 positionX3 = 80.0f;

    s32 fontSize = 24;
    glm::vec4 textColor = glm::vec4(0.3f,0.3f,0.3f,1.0f);

    text = new GuiText("C�digo:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);

    text = new GuiText("Maschell", fontSize, textColor);
    text->setPosition(positionX2, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Ayuda c�digo:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);

    text = new GuiText("QuarkTheAwesome y Skidau", fontSize, textColor);
    text->setPosition(positionX2, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Dise�o:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);

    text = new GuiText("DarkIrata (https://twitter.com/DarkIrata)", fontSize, textColor);
    text->setPosition(positionX2, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Traducci�n:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    
	text = new GuiText("Victormr21", fontSize, textColor);
    text->setPosition(positionX2, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
	positionY -= 50;
	
	text = new GuiText("Gr�ficos usados:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Github, icono Wii U GamePad de flaticon (flaticon.com)", fontSize, textColor);
    text->setPosition(positionX3, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Icono Twitter de freepik (flaticon.com)", fontSize, textColor);
    text->setPosition(positionX3, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Icono WiiU Pro Controller de flaticon (freepik.com)", fontSize, textColor);
    text->setPosition(positionX3, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 50;

    text = new GuiText("M�sica:", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Local Forecast - Slower Kevin MacLeod (incompetech.com)", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Licensed under Creative Commons: By Attribution 3.0 License", fontSize, textColor);
    text->setPosition(positionX -20, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("http://creativecommons.org/licenses/by/3.0/", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 50;

    text = new GuiText("Muchas gracias a los que contribuyen en la scene de WiiU", fontSize, textColor);
    text->setPosition(positionX -23, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Gracias a FIX94 por el c�digo/idea inicial", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 40;

    text = new GuiText("Gracias especialmente a Dimok", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Das g�ttliche Design vom gottesgleichem Gott Darkirata", fontSize, glm::vec4(0.9f,0.9f,0.9f,0.1f));
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    aboutText.push_back(text);
    append(text);
    positionY -= 35;

}

ContentAbout::~ContentAbout(){
    remove(&bgImageColor);
    remove(&headLine);
    for(u32 i = 0; i < aboutText.size(); ++i){
        remove(aboutText[i]);
        delete aboutText[i];
    }
}

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
#include "ContentHelp.h"

ContentHelp::ContentHelp(): ContentTemplate(){
    headLine.setText("Ayuda");
    headLine.setFontSize(60);
    headLine.setAlignment(ALIGN_TOP_CENTER);
    headLine.setPosition(0,-110);
    headLine.setColor(glm::vec4(0.3f,0.3f,0.3f,1.0f));
    append(&headLine);

     //Copy paste from dimok's code. Thanks <3
    GuiText *text = NULL;

    f32 positionY = 200.0f;
    f32 positionX = 40.0f;
    //f32 positionX2 = 250.0f;
    //f32 positionX3 = 80.0f;

    s32 fontSize = 35;
    s32 fontSize2 = 24;
    glm::vec4 textColor = glm::vec4(0.3f,0.3f,0.3f,1.0f);

    text = new GuiText("¡Mi mando no funciona!", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("Asegúrate de que tienes un config en \"sd:/wiiu/controller\"", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 50;
	
	
	text = new GuiText("¿Dónde puedo conseguir los archivos?", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Puedes crearlos por tí mismo o descargarlos desde ", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;


    text = new GuiText("https://github.com/Maschell/controller_patcher_configs", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 50;

    text = new GuiText("¡No sé como crear uno!", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("¡Estás de suerte! Hay una wiki sobre como hacerlos:", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("https://github.com/Maschell/controller_patcher/wiki", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 50;
    text = new GuiText("¡XYZ no funciona!", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("Si encuentras un fallo, por favor abre un problema en Github", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 50;

    text = new GuiText("¿Puedes añadir la característica XYZ? ¡Por favor!", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("Puede. Depende de la demanda. No puedo prometer nada.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 20;
    text = new GuiText("Abre un problema e intentaré hacerlo lo mejor que pueda.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;
}

ContentHelp::~ContentHelp(){
    remove(&bgImageColor);
    remove(&headLine);

     for(u32 i = 0; i < helpText.size(); ++i){
        remove(helpText[i]);
        delete helpText[i];
    }
}

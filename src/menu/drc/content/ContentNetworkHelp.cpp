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
#include "ContentNetworkHelp.h"

ContentNetworkHelp::ContentNetworkHelp(): ContentTemplate(){
    headLine.setText("Network Client");
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

    text = new GuiText("¿Qué es el Network Client?", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("te permite usar tu mando conectado a tu ordenador con", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;


    text = new GuiText("HID to VPAD. Así por ejemplo XInput- y HID-Bluetooth-Devices", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("pueden usarse. Esto conecta tu consola con tu network local.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

     text = new GuiText("¿Cómo lo uso?", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Introduce la IP (esquina superior derecha) de tu WiiU y pulsa connect.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("Si todo funciono bien, usa el mando como cualquier otro", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("conectado por USB. Puedes encontrar una guía detallada aquí:", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("http://gbatemp.net/threads/hid-to-vpad.424127/", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;



    text = new GuiText("¿Hay algún lag?", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("Con una conexión por Ethernet, no deberías de notarlo.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("Wi-Fi a veces da algunos problemas o lag, pero depende de la", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;

    text = new GuiText("calidad de tu señal. Si es posible, conecta todo por Ethernet.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    text = new GuiText("¿Dónde puedo conseguirlo?", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("Es de código abierto y puedes encontrarlo aquí:", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 25;
    text = new GuiText("https://github.com/QuarkTheAwesome/HIDtoVPADNetworkClient", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;

    /*
    text = new GuiText("Is controller XYZ supported", fontSize, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);

    positionY -= 35;
    text = new GuiText("In theory all XInput and HID devices should work this way. If the client", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;
    text = new GuiText("is recognizing your Controller, you only need a config file on the SD-Card", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 25;
    text = new GuiText("in your console, like a normal controller connected via USB.", fontSize2, textColor);
    text->setPosition(positionX, positionY);
    text->setAlignment(ALIGN_LEFT | ALIGN_MIDDLE);
    helpText.push_back(text);
    append(text);
    positionY -= 35;*/
}

ContentNetworkHelp::~ContentNetworkHelp(){
    remove(&bgImageColor);
    remove(&headLine);

     for(u32 i = 0; i < helpText.size(); ++i){
        remove(helpText[i]);
        delete helpText[i];
    }
}

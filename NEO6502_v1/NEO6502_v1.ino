/*
This software is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This software is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA


 Name:		NEO6502.ino
 Author:	Rien
*/

#include "NEO6502.h"
#include "bios.h"
#include "mon.h"
#include "demo.h"

NEO6502 myNEO6502;

void setup() {
  Serial.begin(115200);
  sleep_ms(2500);
  Serial.println("NEO6502 memulator");

  myNEO6502.init();
  myNEO6502.setUCASE(true);

  Serial.println("Loading ROMs:");
  myNEO6502.addROM("BIOS", bios_bin);
  myNEO6502.addROM("SUPERMON64", supermon64_bin);
  myNEO6502.addROM("DEMO", demo_bin);
}

void loop() {
  myNEO6502.run();
}
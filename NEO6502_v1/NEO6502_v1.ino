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
 Author:	Rien Matthijsse
*/
#include "NEO6502.h"

#include "version.h"

#define CONFIG_BASIC 0  // boots into EhBasic
#define CONFIG_CDEMO 1  // boots into Supermon64

NEO6502 myNEO6502;

/// <summary>
/// setup NEO6502 config
/// </summary>
void setup() {
  Serial.begin(115200);
  sleep_ms(2500);
  Serial.printf("NEO6502 memulator %s\n", cVERSION);

  myNEO6502.init();

  myNEO6502.setSysConfig(CONFIG_CDEMO);

  myNEO6502.run();
}

/// <summary>
/// 
/// </summary>
void loop() {

}

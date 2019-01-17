// Copyright 2018 University College School

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "main.h"

enum Ports { back_left__drive = 1, back_right_drive };

controller_id_e_t     MAIN_CONTROLLER = CONTROLLER_MASTER;
controller_analog_e_t FWD_CHANNEL     = ANALOG_LEFT_Y;
controller_analog_e_t TRN_CHANNEL     = ANALOG_RIGHT_X;


#endif
/* Derivate of elmo's firmware >>kb-elmo<mail@elmo.space>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// defining layer_names 
#define _BL 0
#define _FL 1
#define _FFL 2

// --- /
// -- / definition of  encoder map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) }
};
#endif
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Buran
   *  ┌────┬────┬────┬────┬────┐┌────┐┌────┬────┬────┬────┬────┐
   *  │ Q  │ W  │  E  │ R  │ T ││    ││ Y  │ U  │ I  │ O  │ P  │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ A  │ S  │ D  │ F  │ G  ││    ││ H  │L(2J│ K  │ L  │ ;  │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ Z  │ X  │ C  │ V  │ B  ││    ││ N  │ M  │ ,  │ .  │ /  │  
   *  └────┴────┴────┴────┴────┘└────┘└────┴────┴────┴────┴────┘
   *  ┌────┬────┬─────┐┌──────┐ ┌────┐ ┌──────┐┌─────┬────┬────┐
   *  │ctrl│MO1 │ GUI ││LT1Spc│ │MCR │ │ Bksp ││Ralt │Mo1 │ctrl│                                 
   *  └────┴────┴─────┘└──────┘ └────┘ └──────┘└─────┴────┴────┘
   */
   [_BL] = LAYOUT(
            
        KC_Q,    	KC_W,    	KC_E,    	KC_R,    	KC_T,  		KC_NO,    	KC_Y,    	KC_U,    	KC_I,    	KC_O,    	KC_P,    
        KC_A,    	KC_S,    	KC_D,    	KC_F,    	KC_G, 		KC_NO,    	KC_H,    	KC_J,    	KC_K,    	LT(_FFL,KC_L),  KC_SCOLON,
	    KC_Z,    	KC_X,    	KC_C,    	KC_V,    	KC_B, 		KC_NO,    	KC_N,    	KC_M,    	KC_COMMA,    	KC_DOT,    	KC_SLASH,
        KC_LCTRL,      	MO(_FL),    	KC_LGUI, 	LT(_BL,KC_SPACE),   		KC_NO,    			KC_BSPACE, 	KC_RALT,    	MO(1),	 	KC_LSHIFT
	
    ),
/* Buran
   *  ┌────┬────┬────┬────┬────┐┌────┐┌────┬────┬────┬────┬────┐
   *  │ 0  │ 1  │ 2  │ 3  │ 4  ││    ││ 5  │ 6  │ 7  │ 8  │ 9  │ 
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ESC │ [  │ ]  │ \  │ '  ││    ││LEFT│DOWN│ UP │RGHT│    │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │SHFT│    │ `  │ -  │ =  ││    ││ `  │    │ @  │ '  │ /  │  
   *  └────┴────┴────┴────┴────┘└────┘└────┴────┴────┴────┴────┘
   *  ┌────┬────┬─────┐┌──────┐ ┌────┐ ┌──────┐┌─────┬────┬────┐
   *  │lalt│    │     ││      │ │    │ │ del  ││     │    │    │                                 
   *  └────┴────┴─────┘└──────┘ └────┘ └──────┘└─────┴────┴────┘
  */
   [_FL] = LAYOUT(
            
        KC_1,    	KC_2,    	KC_3,    	KC_4,    	KC_5,  			KC_NO,    	KC_6,    	KC_7,    	KC_8,    	KC_9,    	KC_0,    
        KC_ESC,    	KC_LBRC,    	KC_RBRC,    	KC_BSLS,    	KC_QUOT, 		KC_NO,    	KC_LEFT,    	KC_DOWN,    	KC_UP,    	KC_RIGHT,    	KC_NO,
	    KC_LSFT,    	KC_NO,    	KC_QUOT,    	KC_MINS,    	KC_EQL, 		KC_NO,    	KC_QUOT,    	KC_NO,    	LSFT(KC_2),    	KC_GRV,    	KC_SLASH,
        KC_LALT,      	KC_NO,    	KC_NO, 		KC_NO,   				KC_NO,    			KC_DEL, 	KC_NO,    	KC_NO, 	KC_NO
	
    ),
 /*Buran
   *  ┌────┬────┬────┬────┬────┐┌────┐┌────┬────┬────┬────┬────┐
   *  │ F1 │ F2 │ F3 │ F4 │    ││    ││    │    │    │    │    │ 
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ F5 │ F6 │ F7 │ F8 │    ││    ││    │    │    │    │    │
   *  ├────┼────┼────┼────┼────┤├────┤├────┼────┼────┼────┼────┤
   *  │ F9 │F10 │F11 │F12 │    ││    ││    │    │    │    │    │  
   *  └────┴────┴────┴────┴────┘└────┘└────┴────┴────┴────┴────┘
   *  ┌────┬────┬─────┐┌──────┐ ┌────┐ ┌──────┐┌─────┬────┬────┐
   *  │VOLU│VOLD│MUTE ││BRIGHT│ │    │ │      ││     │    │    │                                 
   *  └────┴────┴─────┘└──────┘ └────┘ └──────┘└─────┴────┴────┘
   */
   [_FFL] = LAYOUT(
            
        KC_F1,    	KC_F2,    	KC_F3,    	KC_F4,    	KC_NO,  	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    
        KC_F5,    	KC_F6,    	KC_F7,    	KC_F8,    	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,
	    KC_F9,    	KC_F10,    	KC_F11,    	KC_F12,    	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,
        KC_NO,      KC_NO,    	KC_NO, 		KC_NO,   			    KC_NO,    		        KC_NO, 		KC_NO,    	KC_NO, 		KC_NO
	
    ),
    [3] = LAYOUT(

        KC_F1,    	KC_F2,    	KC_F3,    	KC_F4,    	KC_NO,  	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,
        KC_F5,    	KC_F6,    	KC_F7,    	KC_F8,    	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,
        KC_F9,    	KC_F10,    	KC_F11,    	KC_F12,    	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,
        KC_NO,      KC_NO,    	KC_NO, 		KC_NO,   			    KC_NO,    		        KC_NO, 		KC_NO,    	KC_NO, 		KC_NO

        ),

};


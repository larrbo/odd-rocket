#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

//if you want, add this to song_list.h, under qmk/quantum/audio
//#define CONTRA_START \
//W__NOTE(_D3), \
//W__NOTE(_F4), \
//W__NOTE(_E4), \
//W__NOTE(_C4), \
//WD_NOTE(_D4),  \
//H__NOTE( _G4), \
//WD_NOTE(_A4), 

#ifdef AUDIO_ENABLE

//    #define STARTUP_SONG SONG(CONTRA_START)

// a good default one; depending on your pro micro, your memory might be limited...
    #define STARTUP_SONG SONG(IMPERIAL_MARCH)

    #define AUDIO_CLICKY
#endif

#define ONESHOT_TIMEOUT 2000
#define AUTO_SHIFT_TIMEOUT 200

#endif
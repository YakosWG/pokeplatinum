#include <nitro.h>
#include <string.h>

#include "overlay080/ov80_021D2AF4.h"
#include "overlay080/struct_ov80_021D1478_sub1.h"
#include "overlay080/struct_ov80_021D259C.h"
#include "overlay080/struct_ov80_021D2A08.h"
#include "overlay080/struct_ov80_021D2AF4.h"
#include "overlay080/struct_ov80_021D2C1C.h"
#include "overlay080/struct_ov80_021D2C5C.h"

#include "bg_window.h"
#include "font.h"
#include "heap.h"
#include "map_header_util.h"
#include "map_matrix.h"
#include "message.h"
#include "render_window.h"
#include "screen_fade.h"
#include "sound_playback.h"
#include "sprite.h"
#include "sprite_system.h"
#include "strbuf.h"
#include "sys_task.h"
#include "sys_task_manager.h"
#include "system.h"
#include "text.h"
#include "touch_screen.h"

typedef struct {
    int unk_00;
    int unk_04;
    u16 unk_08;
    u8 unk_0A;
    u8 unk_0B;
    Sprite *unk_0C;
} UnkStruct_ov80_021D1744;

typedef struct {
    int unk_00;
    SysTask *unk_04;
    u16 unk_08;
    u8 unk_0A;
    u8 unk_0B;
    UnkStruct_ov80_021D1744 unk_0C[5];
} UnkStruct_ov80_021D2570;

typedef struct {
    int unk_00;
    int unk_04;
    int unk_08;
    int unk_0C;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15_0 : 4;
    u8 unk_15_4 : 4;
    u16 unk_16;
    int unk_18;
    int unk_1C;
    int unk_20;
    int unk_24;
    Window unk_28[5];
    Window *unk_78;
    UnkStruct_ov80_021D1478_sub1 unk_7C;
    UnkStruct_ov80_021D1478_sub1 unk_8C;
    UnkStruct_ov80_021D2C1C *unk_9C;
    UnkStruct_ov80_021D2AF4 *unk_A0;
    UnkStruct_ov80_021D2570 unk_A4;
    Sprite *unk_100;
    Sprite *unk_104;
    Sprite *unk_108;
    SysTask *unk_10C;
} UnkStruct_ov80_021D1478;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    int unk_04;
} UnkStruct_ov80_021D1A58;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
} UnkStruct_ov80_021D1FB0;

int ov80_021D1458(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D14A8(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D163C(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1678(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D16D0(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D16F8(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1744(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1478(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1758(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1550(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D159C(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D15C8(UnkStruct_ov80_021D2A08 *param0);
int ov80_021D1610(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1D24(UnkStruct_ov80_021D2A08 *param0, UnkStruct_ov80_021D2AF4 *param1, int param2);
static void ov80_021D1D38(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1D6C(UnkStruct_ov80_021D2A08 *param0, Window *param1);
static void ov80_021D1DF8(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1F14(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1F30(UnkStruct_ov80_021D2A08 *param0, u8 param1, u8 param2);
static void ov80_021D20DC(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D225C(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D2398(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D259C(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D26AC(SysTask *param0, void *param1);
static void ov80_021D2700(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D18F8(UnkStruct_ov80_021D2A08 *param0, int param1);
static void ov80_021D1A58(UnkStruct_ov80_021D2A08 *param0, int param1, int param2, int param3);
static void ov80_021D1AB0(UnkStruct_ov80_021D2A08 *param0, Window *param1, int param2, int param3, int param4);
static void ov80_021D1B5C(UnkStruct_ov80_021D2A08 *param0, Window *param1, UnkStruct_ov80_021D2AF4 *param2);
static void ov80_021D19E4(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1A30(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D1C24(UnkStruct_ov80_021D2A08 *param0);
static void ov80_021D24BC(UnkStruct_ov80_021D2A08 *param0, int param1, int param2);
static void ov80_021D273C(UnkStruct_ov80_021D2A08 *param0, int param1);
static void ov80_021D2774(SysTask *param0, void *param1);
static void ov80_021D28EC(SysTask *param0, void *param1);
static int ov80_021D29BC(UnkStruct_ov80_021D2A08 *param0);

int ov80_021D1458(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0;

    param0->unk_34 = Heap_AllocFromHeap(param0->heapID, sizeof(UnkStruct_ov80_021D1478));
    v0 = (UnkStruct_ov80_021D1478 *)param0->unk_34;

    memset(v0, 0, sizeof(UnkStruct_ov80_021D1478));

    return 1;
}

int ov80_021D1478(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    ov80_021D225C(param0);

    if (param0->unk_00 != 2) {
        ov80_021D2700(param0);
    }

    ov80_021D2C1C(v0->unk_9C);
    ov80_021D1F14(param0);
    Heap_Free(v0);

    return 1;
}

int ov80_021D14A8(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    switch (v0->unk_00) {
    case 0:
        v0->unk_18 = param0->unk_18;
        v0->unk_1C = param0->unk_1C;
        v0->unk_20 = -1;
        v0->unk_8C.unk_00 = (v0->unk_18 * 16 + 8) - 128 + 16;
        v0->unk_8C.unk_04 = (v0->unk_1C * 16) - 96;

        ov80_021D24BC(param0, v0->unk_8C.unk_00, v0->unk_8C.unk_04);
        ov80_021D1DF8(param0);

        if (param0->unk_00 != 2) {
            ov80_021D259C(param0);
        }
        break;
    case 1:
        ov80_021D20DC(param0);
        ov80_021D2398(param0);
        v0->unk_9C = ov80_021D2AF4(param0->unk_D8, param0->unk_DC, param0->unk_2C->unk_124, 20, param0->heapID);
        ov80_021D1A30(param0);
        ov80_021D19E4(param0);
        v0->unk_00 = 0;
        return 1;
    }

    v0->unk_00++;
    return 0;
}

int ov80_021D1550(UnkStruct_ov80_021D2A08 *param0)
{
    param0->unk_14 = 0;

    StartScreenFade(FADE_MAIN_THEN_SUB, FADE_TYPE_UNK_17, FADE_TYPE_UNK_37, COLOR_BLACK, 6, 1, param0->heapID);
    Sound_PlayEffect(SEQ_SE_DP_MEKURU);
    ResetScreenMasterBrightness(DS_SCREEN_MAIN);
    ResetScreenMasterBrightness(DS_SCREEN_SUB);

    G2_SetBlendAlpha(GX_BLEND_PLANEMASK_BG2, GX_BLEND_PLANEMASK_BG3, 28, 4);
    return 0;
}

int ov80_021D159C(UnkStruct_ov80_021D2A08 *param0)
{
    param0->unk_14 = 0;
    StartScreenFade(FADE_SUB_THEN_MAIN, FADE_TYPE_UNK_16, FADE_TYPE_UNK_36, COLOR_BLACK, 6, 1, param0->heapID);
    Sound_PlayEffect(SEQ_SE_DP_MEKURU2);
    return 0;
}

int ov80_021D15C8(UnkStruct_ov80_021D2A08 *param0)
{
    param0->unk_14 = 0;

    StartScreenFade(FADE_MAIN_ONLY, FADE_TYPE_UNK_17, FADE_TYPE_UNK_17, COLOR_BLACK, 6, 1, param0->heapID);
    Sound_PlayEffect(SEQ_SE_DP_MEKURU);
    ResetScreenMasterBrightness(DS_SCREEN_MAIN);

    G2_SetBlendAlpha(GX_BLEND_PLANEMASK_BG2, GX_BLEND_PLANEMASK_BG3, 28, 4);
    return 0;
}

int ov80_021D1610(UnkStruct_ov80_021D2A08 *param0)
{
    param0->unk_14 = 0;

    StartScreenFade(FADE_MAIN_ONLY, FADE_TYPE_UNK_16, FADE_TYPE_UNK_16, COLOR_BLACK, 6, 1, param0->heapID);
    Sound_PlayEffect(SEQ_SE_DP_MEKURU2);

    return 0;
}

int ov80_021D163C(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if ((v0->unk_14 <= 1) && gSystem.pressedKeys & PAD_BUTTON_B) {
        Sound_PlayEffect(SEQ_SE_DP_DECIDE);
        return 1;
    }

    if (v0->unk_14 > 1) {
        return 0;
    }

    ov80_021D18F8(param0, gSystem.heldKeys);

    return 0;
}

int ov80_021D1678(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if (v0->unk_14 <= 1) {
        if (gSystem.pressedKeys & PAD_BUTTON_A) {
            if (ov80_021D29BC(param0)) {
                Sound_PlayEffect(SEQ_SE_DP_DECIDE);
                return 1;
            }

            return 0;
        } else if (gSystem.pressedKeys & PAD_BUTTON_B) {
            Sound_PlayEffect(SEQ_SE_DP_DECIDE);
            return 1;
        }
    }

    if (v0->unk_14 > 1) {
        return 0;
    }

    ov80_021D18F8(param0, gSystem.heldKeys);
    return 0;
}

int ov80_021D16D0(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if (gSystem.pressedKeys & (PAD_BUTTON_B)) {
        Sound_PlayEffect(SEQ_SE_DP_DECIDE);
        return 1;
    }

    ov80_021D18F8(param0, gSystem.heldKeys);
    return 0;
}

int ov80_021D16F8(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if (v0->unk_12 & 0x1) {
        if (v0->unk_15_0 >= 2) {
            ov80_021D19E4(param0);
            v0->unk_12 = 0x0;
            v0->unk_16 = 0;
            v0->unk_15_0 = 0;
        }
    } else if ((v0->unk_10 == 1) && (v0->unk_16 == 1)) {
        ov80_021D1D24(param0, NULL, v0->unk_20);
    }

    ov80_021D1C24(param0);
    return 0;
}

int ov80_021D1744(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    UnkStruct_ov80_021D1744 *v1;
    int v2;

    for (v2 = 0; v2 < v0->unk_A4.unk_00; v2++) {
        v1 = &(v0->unk_A4.unk_0C[v2]);
    }

    ov80_021D2D28(v0->unk_9C, param0->unk_00);
    return 0;
}

int ov80_021D1758(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    Window *v1;
    UnkStruct_ov80_021D2AF4 *v2 = param0->unk_94;
    int v3 = param0->unk_90;
    u32 v4;
    u32 v5;
    u16 v6[22];

    if (!param0->unk_8C) {
        return 0;
    }

    param0->unk_8C = 0;

    if (v2 == NULL) {
        ov80_021D1B5C(param0, &(v0->unk_28[3]), NULL);
        ov80_021D1D38(param0);
        return 0;
    }

    ov80_021D1B5C(param0, &(v0->unk_28[3]), v2);
    Strbuf_Clear(param0->unk_88);
    ov80_021D1A58(param0, v3, v0->unk_18, v0->unk_1C);
    LoadSignpostContentGraphics(param0->unk_28, 4, (((((1023 - (21 * 4)) - (28 * 4)) - (28 * 14)) - (10 * 2)) - 100), (15 - 1), v2->unk_04, v2->unk_06, param0->heapID);

    if ((v2->unk_04 == 0) || (v2->unk_04 == 1)) {
        v1 = &v0->unk_28[1];
    } else {
        v1 = &v0->unk_28[2];
    }

    v0->unk_78 = v1;
    v0->unk_15_4 = v2->unk_04;

    Window_DrawSignpost(v1, 1, (((((1023 - (21 * 4)) - (28 * 4)) - (28 * 14)) - (10 * 2)) - 100), (15 - 1), v2->unk_04);
    Window_FillTilemap(v1, 15);
    Text_AddPrinterWithParams(v1, FONT_MESSAGE, param0->unk_88, 0, 0, TEXT_SPEED_NO_TRANSFER, NULL);
    Window_CopyToVRAM(v1);
    Window_CopyToVRAM(&v0->unk_28[3]);

    return 0;
}

static int ov80_021D1848(UnkStruct_ov80_021D2A08 *param0, int param1)
{
    int v0;
    u16 v1;
    static const TouchScreenRect v2[] = {
        { 0, 191, 0, 255 },
        { 10 * 8, (10 + 7) * 8, 13 * 8, (13 + 6) * 8 },
        { 0xff, 0, 0, 0 }
    };

    v0 = TouchScreen_CheckRectanglePressed(&(v2[1 - param1]));

    if ((v0 == 0xffffffff) || (param1 == 1)) {
        return v0;
    }

    v1 = 0x12;

    if (Bg_DoesPixelAtXYMatchVal(param0->unk_28, 5, gSystem.touchX, gSystem.touchY, &v1) == 0) {
        return v0;
    }

    return 0xffffffff;
}

static BOOL ov80_021D18A0(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if (param0->unk_2C->unk_139 == 2) {
        return 0;
    }

    if (TouchScreen_Touched()) {
        if ((v0->unk_14 == 0) && (ov80_021D1848(param0, v0->unk_10) != 0xffffffff)) {
            ov80_021D273C(param0, v0->unk_10);
            v0->unk_14 = 3;
            return 1;
        }
    } else if ((v0->unk_14 == 3) || (v0->unk_14 == 1)) {
        v0->unk_14--;
    }

    return 0;
}

static void ov80_021D18F8(UnkStruct_ov80_021D2A08 *param0, int param1)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    if (v0->unk_11) {
        if (!(param1 & (PAD_KEY_UP | PAD_KEY_DOWN | PAD_KEY_RIGHT | PAD_KEY_LEFT))) {
            if (v0->unk_15_0 == 1) {
                ++v0->unk_15_0;
            }
        }

        return;
    }

    if (ov80_021D18A0(param0)) {
        return;
    }

    if (!(param1 & (PAD_KEY_UP | PAD_KEY_DOWN | PAD_KEY_RIGHT | PAD_KEY_LEFT))) {
        if (v0->unk_15_0 == 1) {
            ++v0->unk_15_0;
        }

        return;
    }

    if (param1 & PAD_KEY_UP) {
        if (v0->unk_1C >= 7) {
            v0->unk_1C -= 1;
            v0->unk_11 |= 0x8;
        }
    }

    if (param1 & PAD_KEY_DOWN) {
        if (v0->unk_1C <= 27) {
            v0->unk_1C += 1;
            v0->unk_11 |= 0x4;
        }
    }

    if (param1 & PAD_KEY_RIGHT) {
        if (v0->unk_18 <= 27) {
            v0->unk_18 += 1;
            v0->unk_11 |= 0x1;
        }
    }

    if (param1 & PAD_KEY_LEFT) {
        if (v0->unk_18 >= 2) {
            v0->unk_18 -= 1;
            v0->unk_11 |= 0x2;
        }
    }

    v0->unk_13 = 3;
    v0->unk_11 |= 0x80;

    if (v0->unk_12 != 0) {
        v0->unk_16++;
    } else {
        v0->unk_16 = 0;
    }

    v0->unk_12 = 0;
    v0->unk_15_0 = 1;

    return;
}

static void ov80_021D19E4(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    ov80_021D1AB0(param0, &(v0->unk_28[0]), v0->unk_20, v0->unk_18, v0->unk_1C);
    ov80_021D2CC0(v0->unk_9C, v0->unk_20, v0->unk_18, v0->unk_1C);

    if (v0->unk_10 == 1) {
        ov80_021D1D24(param0, v0->unk_A0, v0->unk_20);
        Bg_ScheduleTilemapTransfer(param0->unk_28, 4);
        Bg_ScheduleTilemapTransfer(param0->unk_28, 5);
    }
}

static void ov80_021D1A30(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    v0->unk_24 = v0->unk_20;
    v0->unk_20 = MainMapMatrixData_GetMapHeaderIDAtCoords((const MainMapMatrixData *)param0->unk_30, v0->unk_18, v0->unk_1C);
    v0->unk_A0 = ov80_021D2E24(param0->unk_40, v0->unk_18, v0->unk_1C, param0->unk_02);
}

static void ov80_021D1A58(UnkStruct_ov80_021D2A08 *param0, int param1, int param2, int param3)
{
    int v0;
    static const UnkStruct_ov80_021D1A58 v1[] = {
        { 11, 19, 207 },
        { 11, 20, 207 },
        { 11, 21, 207 },
        { 11, 22, 207 },
        { 12, 12, 207 },
        { 12, 13, 207 },
        { 12, 14, 207 },
        { 12, 15, 207 },
        { 12, 16, 207 },
        { 12, 17, 207 },
        { 12, 18, 207 },
        { 12, 19, 207 },
        { 20, 12, 560 },
    };

    if (param1 != 0) {
        MapHeader_LoadName(param1, param0->heapID, param0->unk_88);
        return;
    }

    for (v0 = 0; v0 < NELEMS(v1); v0++) {
        if ((v1[v0].unk_00 != param2) || (v1[v0].unk_02 != param3)) {
            continue;
        }

        MapHeader_LoadName(v1[v0].unk_04, param0->heapID, param0->unk_88);
        return;
    }

    MapHeader_LoadName(0, param0->heapID, param0->unk_88);
    return;
}

static void ov80_021D1AB0(UnkStruct_ov80_021D2A08 *param0, Window *param1, int param2, int param3, int param4)
{
    u32 v0;
    TextColor v1;
    UnkStruct_ov80_021D1478 *v2 = param0->unk_34;

    Strbuf_Clear(param0->unk_88);
    Window_FillTilemap(param1, 0);

    v1 = TEXT_COLOR(1, 2, 0);

    if (v2->unk_A0 != NULL) {
        ov80_021D1A58(param0, param2, param3, param4);

        if (param0->unk_00 == 1) {
            v0 = (15 * 8 + 2);
        } else {
            v0 = (29 - 3) * 8 - Font_CalcStrbufWidth(FONT_SYSTEM, param0->unk_88, 0);
            v0 /= 2;
        }

        Text_AddPrinterWithParamsAndColor(param1, FONT_SYSTEM, param0->unk_88, v0, 6, TEXT_SPEED_NO_TRANSFER, v1, NULL);
    }

    if (param0->unk_00 == 1) {
        Strbuf *v3 = MessageLoader_GetNewStrbuf(param0->unk_84, 0);

        Text_AddPrinterWithParamsAndColor(param1, FONT_SYSTEM, v3, 0, 6, TEXT_SPEED_NO_TRANSFER, v1, NULL);
        Strbuf_Free(v3);
    }

    Window_CopyToVRAM(param1);
}

static void ov80_021D1B5C(UnkStruct_ov80_021D2A08 *param0, Window *param1, UnkStruct_ov80_021D2AF4 *param2)
{
    u32 v0;
    TextColor v1;
    Strbuf *v2;
    Strbuf *v3;

    if (param2 == NULL) {
        Window_FillTilemap(param1, 0);
        Window_CopyToVRAM(param1);
        Window_ClearAndCopyToVRAM(param1);
        return;
    }

    v1 = TEXT_COLOR(1, 2, 0);
    Window_FillTilemap(param1, 0);

    if ((param2->unk_08 != 0xFFFF) && ((param0->unk_2C->unk_5C[param2->unk_16].val1_0 == 0) || param0->unk_2C->unk_5C[param2->unk_16].val1_2)) {
        v2 = MessageLoader_GetNewStrbuf(param0->unk_84, param2->unk_08);
        Text_AddPrinterWithParamsAndColor(param1, FONT_SYSTEM, v2, param2->unk_0C, param2->unk_0E, TEXT_SPEED_NO_TRANSFER, v1, NULL);
        Strbuf_Free(v2);
    }

    if ((param2->unk_0A != 0xFFFF) && ((param0->unk_2C->unk_5C[param2->unk_16].val1_4 == 0) || param0->unk_2C->unk_5C[param2->unk_16].val1_6)) {
        v3 = MessageLoader_GetNewStrbuf(param0->unk_84, param2->unk_0A);
        Text_AddPrinterWithParamsAndColor(param1, FONT_SYSTEM, v3, param2->unk_10, param2->unk_12, TEXT_SPEED_NO_TRANSFER, v1, NULL);
        Strbuf_Free(v3);
    }
}

static void ov80_021D1C24(UnkStruct_ov80_021D2A08 *param0)
{
    int v0 = 5;
    UnkStruct_ov80_021D1478 *v1 = param0->unk_34;

    if (!v1->unk_13) {
        return;
    }

    if (v1->unk_13-- == 3) {
        Sprite_SetPositionXY(v1->unk_104, v1->unk_18 * 7 + (48 - 23), v1->unk_1C * 7 + (6 - 40));
        Sprite_UpdateAnim(v1->unk_104, FX32_ONE);

        ov80_021D1A30(param0);
        ov80_021D1AB0(param0, &(v1->unk_28[0]), MainMapMatrixData_GetMapHeaderIDAtCoords((const MainMapMatrixData *)param0->unk_30, v1->unk_18, v1->unk_1C), v1->unk_18, v1->unk_1C);
        v0 += 1;
    }

    if (v1->unk_11 & 0x8) {
        v1->unk_8C.unk_04 -= v0;
    }

    if (v1->unk_11 & 0x4) {
        v1->unk_8C.unk_04 += v0;
    }

    if (v1->unk_11 & 0x1) {
        v1->unk_8C.unk_00 += v0;
    }

    if (v1->unk_11 & 0x2) {
        v1->unk_8C.unk_00 -= v0;
    }

    ov80_021D24BC(param0, v1->unk_8C.unk_00, v1->unk_8C.unk_04);

    if (v1->unk_13 > 0) {
        return;
    }

    v1->unk_12 = 0x1;
    v1->unk_11 = 0;

    if (v1->unk_24 != v1->unk_20) {
        ov80_021D2CC0(v1->unk_9C, -1, 0, 0);
    }
}

static void ov80_021D1D24(UnkStruct_ov80_021D2A08 *param0, UnkStruct_ov80_021D2AF4 *param1, int param2)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    u32 v1;
    u32 v2;
    Strbuf *v3;

    param0->unk_90 = param2;
    param0->unk_94 = param1;
    param0->unk_8C = 1;

    return;
}

static void ov80_021D1D38(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    Window *v1 = v0->unk_78;
    v0->unk_78 = NULL;

    if (v1 == NULL) {
        return;
    }

    Window_FillTilemap(v1, 0);
    Window_ClearAndCopyToVRAM(v1);
    Window_EraseSignpost(v1, v0->unk_15_4, 0);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 4);
}

static void ov80_021D1D6C(UnkStruct_ov80_021D2A08 *param0, Window *param1)
{
    u32 v0;
    TextColor v1;
    Strbuf *v2;

    Bg_CopyRectToTilemapRect(param0->unk_28, 5, 10, 0, 12, 2, param0->unk_CC->rawData, 0, 7, param0->unk_CC->screenWidth / 8, param0->unk_CC->screenHeight / 8);

    v2 = MessageLoader_GetNewStrbuf(param0->unk_84, 1);
    v0 = (10 * 8) - Font_CalcStrbufWidth(FONT_SYSTEM, v2, 0);
    v0 /= 2;
    v1 = TEXT_COLOR(1, 2, 0);

    Window_FillTilemap(param1, 0);
    Text_AddPrinterWithParamsAndColor(param1, FONT_SYSTEM, v2, v0, 0, TEXT_SPEED_NO_TRANSFER, v1, NULL);
    Window_CopyToVRAM(param1);
    Strbuf_Free(v2);
}

static void ov80_021D1DF8(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    Window_Add(param0->unk_28, &v0->unk_28[0], 1, 3, 21, 29, 3, 15, 1023 - 29 * 3);
    Window_Add(param0->unk_28, &v0->unk_28[1], 4, 9, 3, 21, 4, (15 - 1), (1023 - (21 * 4)));
    Window_Add(param0->unk_28, &v0->unk_28[2], 4, 2, 3, 28, 4, (15 - 1), ((1023 - (21 * 4)) - (28 * 4)));
    Window_Add(param0->unk_28, &v0->unk_28[3], 4, 1, 8, 28, 14, (15 - 1), (((1023 - (21 * 4)) - (28 * 4)) - (28 * 14)));
    Window_Add(param0->unk_28, &v0->unk_28[4], 4, 11, 0, 10, 2, 15, ((((1023 - (21 * 4)) - (28 * 4)) - (28 * 14)) - (10 * 2)));
    Window_FillTilemap(&(v0->unk_28[0]), 0);
    Window_FillTilemap(&(v0->unk_28[1]), 0);
    Window_FillTilemap(&(v0->unk_28[2]), 0);
    Window_FillTilemap(&(v0->unk_28[3]), 0);
    Window_FillTilemap(&(v0->unk_28[4]), 0);
    Window_CopyToVRAM(&v0->unk_28[0]);
    Window_ClearAndCopyToVRAM(&v0->unk_28[1]);
    Window_ClearAndCopyToVRAM(&v0->unk_28[2]);
    Window_ClearAndCopyToVRAM(&v0->unk_28[3]);
    Window_ClearAndCopyToVRAM(&v0->unk_28[4]);
}

static void ov80_021D1F14(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    u16 v1;

    for (v1 = 0; v1 < 5; v1++) {
        Window_Remove(&v0->unk_28[v1]);
    }
}

static void ov80_021D1F30(UnkStruct_ov80_021D2A08 *param0, u8 param1, u8 param2)
{
    if (param2) {
        Bg_CopyToTilemapRect(param0->unk_28, 5, 0, 0, 32, 24, param0->unk_D0->rawData, 0, 0, param0->unk_D0->screenWidth / 8, param0->unk_D0->screenHeight / 8);
    }

    Bg_CopyRectToTilemapRect(param0->unk_28, 5, 13, 10, 6, 7, param0->unk_CC->rawData, param1 * 6 + 0, 0, param0->unk_CC->screenWidth / 8, param0->unk_CC->screenHeight / 8);
}

static void ov80_021D1FB0(UnkStruct_ov80_021D2A08 *param0, int param1)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    static const UnkStruct_ov80_021D1FB0 v1[] = {
        { 5, 0, 3, 1, 2, 3 },
        { 5, 3, 3, 2, 2, 2 },
        { 8, 0, 3, 16, 4, 4 },
        { 8, 4, 3, 16, 4, 4 },
        { 0, 0, 6, 1, 2, 3 },
        { 0, 3, 6, 2, 2, 2 },
        { 0, 0, 8, 16, 4, 4 },
        { 0, 4, 8, 16, 4, 4 },
        { 0, 0, 0, 0, 0, 0 },
        { 4, 5, 22, 13, 3, 3 },
        { 0, 0, 0, 0, 0, 0 },
        { 8, 8, 48, 42, 5, 6 },
        { 2, 0, 26, 0, 3, 3 },
        { 2, 3, 27, 0, 2, 9 },
        { 4, 0, 57, 12, 4, 4 },
        { 4, 4, 57, 12, 4, 19 },
    };
    UnkStruct_ov80_021D1FB0 *v2, *v3, *v4, *v5;

    v2 = (UnkStruct_ov80_021D1FB0 *)&(v1[param1 * 4 + 0]);
    v3 = (UnkStruct_ov80_021D1FB0 *)&(v1[param1 * 4 + 1]);
    v4 = (UnkStruct_ov80_021D1FB0 *)&(v1[param1 * 4 + 2]);
    v5 = (UnkStruct_ov80_021D1FB0 *)&(v1[param1 * 4 + 3]);

    Bg_CopyToTilemapRect(param0->unk_28, 2, v3->unk_02, v3->unk_03, v3->unk_04, v3->unk_05, param0->unk_C0->rawData, v3->unk_00, v3->unk_01, ((param0->unk_C0)->screenWidth / 8), ((param0->unk_C0)->screenHeight / 8));
    Bg_CopyRectToTilemapRect(param0->unk_28, 6, v5->unk_02, v5->unk_03, v5->unk_04, v5->unk_05, param0->unk_D4->rawData, v5->unk_00, v5->unk_01, ((param0->unk_D4)->screenWidth / 8), ((param0->unk_D4)->screenHeight / 8));

    if (param1 == 2) {
        return;
    }

    Bg_CopyToTilemapRect(param0->unk_28, 3, v2->unk_02, v2->unk_03, v2->unk_04, v2->unk_05, param0->unk_C0->rawData, v2->unk_00, v2->unk_01, ((param0->unk_C0)->screenWidth / 8), ((param0->unk_C0)->screenHeight / 8));
    Bg_CopyRectToTilemapRect(param0->unk_28, 7, v4->unk_02, v4->unk_03, v4->unk_04, v4->unk_05, param0->unk_D4->rawData, v4->unk_00, v4->unk_01, ((param0->unk_D4)->screenWidth / 8), ((param0->unk_D4)->screenHeight / 8));
}

static void ov80_021D20DC(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    int v1 = 0;

    Bg_CopyToTilemapRect(param0->unk_28, 2, 0, 0, 32, 24, param0->unk_B8->rawData, 0, 0, ((param0->unk_B8)->screenWidth / 8), ((param0->unk_B8)->screenHeight / 8));
    Bg_CopyToTilemapRect(param0->unk_28, 3, 0, 0, 32, 24, param0->unk_BC->rawData, 0, 0, ((param0->unk_BC)->screenWidth / 8), ((param0->unk_BC)->screenHeight / 8));

    if (param0->unk_00 != 1) {
        v1 = 3;
        Bg_CopyToTilemapRect(param0->unk_28, 3, 16, 21, 2, 3, param0->unk_BC->rawData, 0, 21, ((param0->unk_BC)->screenWidth / 8), ((param0->unk_BC)->screenHeight / 8));
    }

    ov80_021D1F30(param0, 0, 1);

    Bg_CopyRectToTilemapRect(param0->unk_28, 6, 0, 0, 64, 64, param0->unk_C8->rawData, 0, 0, param0->unk_C8->screenWidth / 8, param0->unk_C8->screenHeight / 8);
    Bg_CopyRectToTilemapRect(param0->unk_28, 7, 0, 0, 64, 64, param0->unk_C4->rawData, 0, 0, param0->unk_C4->screenWidth / 8, param0->unk_C4->screenHeight / 8);

    if (param0->unk_02 & 0x1) {
        ov80_021D1FB0(param0, 0);
    }

    if (param0->unk_02 & 0x2) {
        ov80_021D1FB0(param0, 1);
    }

    if (param0->unk_02 & 0x4) {
        ov80_021D1FB0(param0, 2);
    }

    if (param0->unk_02 & 0x8) {
        ov80_021D1FB0(param0, 3);
    }

    Bg_ScheduleTilemapTransfer(param0->unk_28, 2);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 3);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 5);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 6);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 7);
}

static void ov80_021D225C(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    Bg_SetOffset(param0->unk_28, BG_LAYER_SUB_2, 3, 0);
    Bg_SetOffset(param0->unk_28, BG_LAYER_SUB_3, 3, 0);
    Bg_SetOffset(param0->unk_28, BG_LAYER_SUB_2, 0, 0);
    Bg_SetOffset(param0->unk_28, BG_LAYER_SUB_3, 0, 0);

    Bg_FillTilemapRect(param0->unk_28, 0, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 1, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 2, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 3, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 4, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 5, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 6, 0x0, 0, 0, 32, 32, 17);
    Bg_FillTilemapRect(param0->unk_28, 7, 0x0, 0, 0, 32, 32, 17);

    Bg_ScheduleTilemapTransfer(param0->unk_28, 0);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 1);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 2);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 3);

    Bg_ScheduleTilemapTransfer(param0->unk_28, 4);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 5);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 6);
    Bg_ScheduleTilemapTransfer(param0->unk_28, 7);
}

static const SpriteTemplateFromResourceHeader Unk_ov80_021D30E8[] = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        NNS_G2D_VRAM_TYPE_2DSUB,
        0,
        0,
        0,
        0,
    },
    {
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        0,
        0,
        0,
        0,
    },
    {
        2,
        0,
        0,
        0,
        0,
        1,
        1,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        0,
        0,
        0,
        0,
    },
};

static void ov80_021D2398(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    SpriteTemplateFromResourceHeader v1 = Unk_ov80_021D30E8[2];

    v0->unk_100 = SpriteSystem_NewSpriteFromResourceHeader(param0->unk_D8, param0->unk_DC, &Unk_ov80_021D30E8[0]);

    Sprite_SetDrawFlag(v0->unk_100, FALSE);
    Sprite_SetAnimSpeed(v0->unk_100, FX32_ONE);
    Sprite_SetPositionXY(v0->unk_100, 128, 108);

    v0->unk_104 = SpriteSystem_NewSpriteFromResourceHeader(param0->unk_D8, param0->unk_DC, &Unk_ov80_021D30E8[1]);

    Sprite_SetDrawFlag(v0->unk_104, TRUE);
    Sprite_SetAnimSpeed(v0->unk_104, FX32_CONST(2));
    Sprite_SetAnimateFlag(v0->unk_104, 1);
    Sprite_SetPositionXY(v0->unk_104, v0->unk_18 * 7 + (48 - 23), v0->unk_1C * 7 + (6 - 40));

    if (param0->unk_2C->unk_0C == 0) {
        v1.plttIdx = 1;
    } else {
        v1.plttIdx = 0;
    }

    v0->unk_108 = SpriteSystem_NewSpriteFromResourceHeader(param0->unk_D8, param0->unk_DC, &v1);

    Sprite_SetDrawFlag(v0->unk_108, TRUE);
    Sprite_SetAnimFrame(v0->unk_108, param0->unk_2C->unk_0C);
    Sprite_SetPositionXY(v0->unk_108, v0->unk_18 * 7 + (48 - 23), v0->unk_1C * 7 + (6 - 40));
}

static void ov80_021D24BC(UnkStruct_ov80_021D2A08 *param0, int param1, int param2)
{
    if (param1 < 8) {
        Bg_ScheduleScroll(param0->unk_28, 6, 0, 8);
        Bg_ScheduleScroll(param0->unk_28, 7, 0, 8);
    } else if (param1 > 248) {
        Bg_ScheduleScroll(param0->unk_28, 6, 0, 248);
        Bg_ScheduleScroll(param0->unk_28, 7, 0, 248);
    } else {
        Bg_ScheduleScroll(param0->unk_28, 6, 0, param1);
        Bg_ScheduleScroll(param0->unk_28, 7, 0, param1);
    }

    if (param2 < (72 + 8)) {
        Bg_ScheduleScroll(param0->unk_28, 6, 3, (72 + 8));
        Bg_ScheduleScroll(param0->unk_28, 7, 3, (72 + 8));
    } else if (param2 > 304) {
        Bg_ScheduleScroll(param0->unk_28, 6, 3, 304);
        Bg_ScheduleScroll(param0->unk_28, 7, 3, 304);
    } else {
        Bg_ScheduleScroll(param0->unk_28, 6, 3, param2);
        Bg_ScheduleScroll(param0->unk_28, 7, 3, param2);
    }
}

static int ov80_021D2570(UnkStruct_ov80_021D2570 *param0, int param1, int param2)
{
    int v0 = 0;

    for (v0 = 0; v0 < param0->unk_00; v0++) {
        if ((param0->unk_0C[v0].unk_00 == param1) && (param0->unk_0C[v0].unk_04 == param2)) {
            return v0;
        }
    }

    return -1;
}

static void ov80_021D259C(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    UnkStruct_ov80_021D259C *v1;
    UnkStruct_ov80_021D1744 *v2;
    int v3 = 0, v4, v5;
    static const u16 v6[4] = { 0, 2, 3, 1 };
    static const SpriteTemplateFromResourceHeader Unk_ov80_021D30E8 = {
        3, 0, 0, 0, 0, 2, 2, NNS_G2D_VRAM_TYPE_2DMAIN, 0, 0, 0, 0
    };

    MI_CpuClear8(&(v0->unk_A4), sizeof(UnkStruct_ov80_021D2570));

    for (v3 = 0; v3 < 5; v3++) {
        v1 = &(param0->unk_2C->unk_20[v3]);

        if (v1->unk_0A == 0) {
            break;
        }

        if ((v1->unk_00 == param0->unk_20) && (v1->unk_04 == param0->unk_24)) {
            continue;
        }

        v4 = ov80_021D2570(&(v0->unk_A4), v1->unk_00, v1->unk_04);

        if (v4 < 0) {
            v2 = &(v0->unk_A4.unk_0C[v0->unk_A4.unk_00++]);
        } else {
            v2 = &(v0->unk_A4.unk_0C[v4]);
        }

        v2->unk_00 = v1->unk_00;
        v2->unk_04 = v1->unk_04;

        if (v1->unk_08 > 3) {
            v2->unk_08 = 0;
            v5 = 5;
        } else {
            v2->unk_08 = v6[v1->unk_08];
            v5 = 0;
        }

        v2->unk_0A = v3;
        v2->unk_0B = 1;

        v2->unk_0C = SpriteSystem_NewSpriteFromResourceHeader(param0->unk_D8, param0->unk_DC, &(Unk_ov80_021D30E8));

        Sprite_SetPositionXY(v2->unk_0C, v2->unk_00 * 7 + 25, v2->unk_04 * 7 + -34);
        Sprite_SetPriority(v2->unk_0C, 2);
        Sprite_SetDrawFlag(v2->unk_0C, FALSE);
    }

    if (v0->unk_A4.unk_00 == 0) {
        return;
    }

    v0->unk_A4.unk_0A = v0->unk_A4.unk_00 - 1;
    v0->unk_A4.unk_04 = SysTask_Start(ov80_021D26AC, &v0->unk_A4, 1);
}

static void ov80_021D26AC(SysTask *param0, void *param1)
{
    UnkStruct_ov80_021D2570 *v0 = (UnkStruct_ov80_021D2570 *)param1;

    if (v0->unk_08++ % 26 > 0) {
        return;
    }

    Sprite_SetDrawFlag(v0->unk_0C[v0->unk_0B].unk_0C, FALSE);
    Sprite_SetDrawFlag(v0->unk_0C[v0->unk_0A].unk_0C, TRUE);

    v0->unk_0B = v0->unk_0A;
    v0->unk_0A = (v0->unk_0A + (v0->unk_00 - 1)) % v0->unk_00;

    if (v0->unk_08 > 26 * 10) {
        v0->unk_08 = 1;
    }
}

static void ov80_021D2700(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    UnkStruct_ov80_021D1744 *v1;
    int v2 = 0, v3;

    if (v0->unk_A4.unk_04 != NULL) {
        SysTask_Done(v0->unk_A4.unk_04);
    }

    for (v2 = 0; v2 < v0->unk_A4.unk_00; v2++) {
        v1 = &(v0->unk_A4.unk_0C[v2]);
        Sprite_Delete2(v1->unk_0C);
    }
}

static void ov80_021D273C(UnkStruct_ov80_021D2A08 *param0, int param1)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;

    v0->unk_04 = 0;
    v0->unk_08 = 0;

    if (param1 == 0) {
        v0->unk_10C = SysTask_Start(ov80_021D2774, param0, 0);
    } else {
        v0->unk_10C = SysTask_Start(ov80_021D28EC, param0, 0);
    }
}

static void ov80_021D2774(SysTask *param0, void *param1)
{
    UnkStruct_ov80_021D2A08 *v0 = (UnkStruct_ov80_021D2A08 *)param1;
    UnkStruct_ov80_021D1478 *v1 = v0->unk_34;
    static const u8 v2[] = { 1, 2, 1, 0 };

    switch (v1->unk_04) {
    case 0:
        Sprite_SetDrawFlag(v1->unk_100, TRUE);
        Sprite_SetAnimateFlag(v1->unk_100, 1);
        Sprite_SetAnimFrame(v1->unk_100, 1);
        Sound_PlayEffect(SEQ_SE_DP_BUTTON9);
        v1->unk_04++;
        break;
    case 1:
        if (v1->unk_08 % 2) {
            ov80_021D1F30(v0, v2[v1->unk_08 / 2], 0);
            Bg_ScheduleTilemapTransfer(v0->unk_28, 5);
        }

        if (v1->unk_08++ > 7) {
            v1->unk_04++;
        }

        break;
    case 2:
        Sprite_SetDrawFlag(v1->unk_100, FALSE);
        Sprite_SetAnimateFlag(v1->unk_100, 0);

        v0->unk_14 = 0;
        StartScreenFade(FADE_SUB_ONLY, FADE_TYPE_UNK_13, FADE_TYPE_UNK_2, COLOR_BLACK, 8, 1, v0->heapID);
        v1->unk_04++;
        break;
    case 3:
        if (!IsScreenFadeDone()) {
            return;
        }

        v1->unk_10 = 1;

        Bg_FillTilemapRect(v0->unk_28, 4, 0x0, 0, 0, 32, 32, 17);
        Bg_FillTilemapRect(v0->unk_28, 5, 0x0, 0, 0, 32, 32, 17);

        ov80_021D1D6C(v0, &(v1->unk_28[4]));
        ov80_021D1A30(v0);
        ov80_021D19E4(v0);

        v0->unk_14 = 0;
        StartScreenFade(FADE_SUB_ONLY, FADE_TYPE_UNK_13, FADE_TYPE_UNK_5, COLOR_BLACK, 8, 1, v0->heapID);
        v1->unk_04++;
        break;
    case 4:
        if (!IsScreenFadeDone()) {
            return;
        }

        v1->unk_08 = 0;
        v1->unk_04 = 0;
        v1->unk_14 -= 2;

        SysTask_Done(param0);

        v1->unk_10C = NULL;
        break;
    }
}

static void ov80_021D28EC(SysTask *param0, void *param1)
{
    UnkStruct_ov80_021D2A08 *v0 = (UnkStruct_ov80_021D2A08 *)param1;
    UnkStruct_ov80_021D1478 *v1 = v0->unk_34;

    switch (v1->unk_04) {
    case 0:
        v0->unk_14 = 0;
        StartScreenFade(FADE_SUB_ONLY, FADE_TYPE_UNK_13, FADE_TYPE_UNK_2, COLOR_BLACK, 8, 1, v0->heapID);
        Sound_PlayEffect(SEQ_SE_DP_MEKURU3);
        v1->unk_04++;
        break;
    case 1:
        if (!IsScreenFadeDone()) {
            return;
        }

        Bg_FillTilemapRect(v0->unk_28, 4, 0x0, 0, 0, 32, 32, 17);
        ov80_021D1F30(v0, 0, 1);
        Bg_ScheduleTilemapTransfer(v0->unk_28, 4);
        Bg_ScheduleTilemapTransfer(v0->unk_28, 5);
        v0->unk_14 = 0;
        StartScreenFade(FADE_SUB_ONLY, FADE_TYPE_UNK_13, FADE_TYPE_UNK_5, COLOR_BLACK, 8, 1, v0->heapID);
        v1->unk_04++;
        break;
    case 2:
        if (!IsScreenFadeDone()) {
            return;
        }

        v1->unk_10 = 0;
        v1->unk_04 = 0;
        v1->unk_08 = 0;
        v1->unk_14 -= 2;
        SysTask_Done(param0);
        v1->unk_10C = NULL;
        return;
    }

    return;
}

static int ov80_021D29BC(UnkStruct_ov80_021D2A08 *param0)
{
    UnkStruct_ov80_021D1478 *v0 = param0->unk_34;
    UnkStruct_ov80_021D2C5C *v1 = NULL;
    u8 v2 = 1;

    if (v0->unk_A0 == NULL) {
        return 0;
    }

    v1 = ov80_021D2C5C(v0->unk_9C, v0->unk_20, v0->unk_18, v0->unk_1C);

    if ((v1 == NULL) || (v1->unk_14 == 0)) {
        return 0;
    }

    param0->unk_2C->unk_10 = 1;
    param0->unk_2C->unk_14 = v0->unk_18;
    param0->unk_2C->unk_18 = v0->unk_1C;
    param0->unk_2C->unk_1C = v0->unk_20;

    return 1;
}

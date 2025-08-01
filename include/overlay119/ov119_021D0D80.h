#ifndef POKEPLATINUM_OV119_021D0D80_H
#define POKEPLATINUM_OV119_021D0D80_H

#include "overlay119/struct_ov119_021D0FD0.h"
#include "overlay119/struct_ov119_021D14DC.h"
#include "overlay119/struct_ov119_021D17B8.h"
#include "overlay119/struct_ov119_021D1930.h"

#include "bg_window.h"
#include "g3d_pipeline.h"
#include "palette.h"
#include "particle_system.h"
#include "pokemon.h"

void ov119_021D0D80(void);
void ov119_021D0DA8(void);
G3DPipelineBuffers *ov119_021D0DD4(void);
void ov119_021D0DF4(void);
void ov119_021D0E78(void);
void ov119_021D0EB8(BgConfig *param0);
void ov119_021D0FD0(void *param0);
void ov119_021D1004(void);
void ov119_021D1028(void);
void ov119_021D1048(void);
void ov119_021D1068(BgConfig *param0, PaletteData *param1, int param2);
void ov119_021D10F0(BgConfig *param0, Window *param1, int param2, int param3, int param4, int param5, int param6, int param7, int param8);
int ov119_021D1158(Window *param0, int param1, Pokemon *param2, int param3);
void ov119_021D11E4(UnkStruct_ov119_021D0FD0 *param0, BgConfig *param1, Window *param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9);
void ov119_021D12CC(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D12F8(Window *param0);
void ov119_021D1308(BgConfig *param0, PaletteData *param1);
void ov119_021D135C(BgConfig *param0, PaletteData *param1);
void ov119_021D145C(ParticleSystem *param0);
UnkStruct_ov119_021D14DC *ov119_021D14AC(UnkStruct_ov119_021D1930 *param0);
void ov119_021D14DC(UnkStruct_ov119_021D14DC *param0, int param1);
BOOL ov119_021D14F8(UnkStruct_ov119_021D14DC *param0);
void ov119_021D150C(UnkStruct_ov119_021D14DC *param0);
void ov119_021D1514(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D161C(UnkStruct_ov119_021D0FD0 *param0);
BOOL ov119_021D16C0(UnkStruct_ov119_021D0FD0 *param0, int param1);
int ov119_021D176C(UnkStruct_ov119_021D0FD0 *param0, int param1);
void ov119_021D17A0(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D17B8(UnkStruct_ov119_021D17B8 *param0);
void ov119_021D1844(UnkStruct_ov119_021D17B8 *param0);
void ov119_021D1858(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D18C0(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D1900(UnkStruct_ov119_021D0FD0 *param0);
void ov119_021D190C(UnkStruct_ov119_021D0FD0 *param0, int param1);

#endif // POKEPLATINUM_OV119_021D0D80_H

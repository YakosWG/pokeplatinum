#include "macros/btlcmd.inc"


_000:
    // {0} flinched!
    PrintMessage pl_msg_00000368_00181, TAG_NICKNAME, BTLSCR_ATTACKER
    Wait 
    WaitButtonABTime 30
    UnlockMoveChoice BTLSCR_ATTACKER
    CheckAbility CHECK_NOT_HAVE, BTLSCR_ATTACKER, ABILITY_STEADFAST, _027
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_TYPE, SIDE_EFFECT_TYPE_ABILITY
    UpdateVar OPCODE_SET, BTLVAR_SIDE_EFFECT_PARAM, MOVE_SUBSCRIPT_PTR_SPEED_UP_1_STAGE
    UpdateVarFromVar OPCODE_SET, BTLVAR_SIDE_EFFECT_MON, BTLVAR_ATTACKER
    Call BATTLE_SUBSCRIPT_UPDATE_STAT_STAGE

_027:
    End 

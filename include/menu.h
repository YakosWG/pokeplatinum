#ifndef POKEPLATINUM_MENU_H
#define POKEPLATINUM_MENU_H

#include "bg_window.h"
#include "colored_arrow.h"
#include "string_list.h"

#define MENU_NOTHING_CHOSEN -1
#define MENU_CANCELED       -2
#define MENU_DUMMY          -3

enum MenuAction {
    MENU_ACTION_NONE = 0,
    MENU_ACTION_MOVE_UP,
    MENU_ACTION_MOVE_DOWN,
    MENU_ACTION_MOVE_LEFT,
    MENU_ACTION_MOVE_RIGHT,
};

enum MenuExternalInput {
    MENU_INPUT_CONFIRM = 0,
    MENU_INPUT_CANCEL,
    MENU_INPUT_MOVE_UP,
    MENU_INPUT_MOVE_DOWN,
    MENU_INPUT_MOVE_LEFT,
    MENU_INPUT_MOVE_RIGHT,
};

// Results for party menu actions
enum PartyMenuSelectionResult {
    MENU_SELECTION_NONE = 0,
    MENU_SELECTION_STATUS, // Check Summary
    MENU_SELECTION_SWITCH, // Switch
    MENU_SELECTION_ITEMSET, // Give Item

    MENU_SELECTION_LEARN_MOVE_TM, // Learn Move (TM)
    MENU_SELECTION_LEARN_MOVE_LVLUP, // Learn Move (Level Up/Rare Candy)
    MENU_SELECTION_SET_MAIL, // Set Mail
    MENU_SELECTION_READ_MAIL, // Read Mail

    MENU_SELECTION_EVO_ITEM, // Evolve (Item) <- Not 100% sure if this is correct
    MENU_SELECTION_EVOLUTION, // Evolve (Level)

    MENU_SELECTION_BAG, // Return to Bag

    // Field Moves
    MENU_SELECTION_CUT, // Cut
    MENU_SELECTION_FLY, // Fly
    MENU_SELECTION_SURF, // Surf
    MENU_SELECTION_STRENGTH, // Strength
    MENU_SELECTION_DEFOG, // Defog
    MENU_SELECTION_ROCK_SMASH, // Rock Smash
    MENU_SELECTION_WATERFALL, // Waterfall
    MENU_SELECTION_ROCK_CLIMB, // Rock Climb
    MENU_SELECTION_FLASH, // Flash
    MENU_SELECTION_TELEPORT, // Teleport
    MENU_SELECTION_DIG, // Dig
    MENU_SELECTION_SWEET_SCENT, // Sweet Scent
    MENU_SELECTION_CHATTER, // Chatter
    MENU_SELECTION_MILK_DRINK, // Milk Drink
    MENU_SELECTION_SOFTBOILED, // Softboiled
};

typedef struct MenuTemplate {
    StringList *choices;
    Window *window;
    u8 fontID;
    u8 xSize;
    u8 ySize;
    u8 lineSpacing : 4;
    u8 suppressCursor : 2;
    u8 loopAround : 2;
} MenuTemplate;

typedef struct Menu {
    MenuTemplate template;
    ColoredArrow *cursor;
    u32 cancelKeys;
    u8 dummy14;
    u8 cursorPos;
    u8 width;
    u8 xOffset;
    u8 yOffset;
    u8 letterWidth;
    u8 lineHeight;
    u8 lastAction;
    u8 heapID;
} Menu;

Menu *Menu_New(const MenuTemplate *template, u8 xOffset, u8 yOffset, u8 cursorStart, u8 heapID, u32 cancelKeys);
Menu *Menu_NewAndCopyToVRAM(const MenuTemplate *template, u8 xOffset, u8 yOffset, u8 cursorStart, u8 heapID, u32 cancelKeys);
Menu *Menu_NewSimple(const MenuTemplate *template, u8 cursorStart, u8 heapID);
void Menu_Free(Menu *menu, u8 *outCursorPos);
u32 Menu_ProcessInput(Menu *menu);
u32 Menu_ProcessInputWithSound(Menu *menu, u16 sdatID);
u32 Menu_ProcessExternalInput(Menu *menu, u8 input);
u8 Menu_GetCursorPos(Menu *menu);
u8 Menu_GetLastAction(Menu *menu);
Menu *Menu_MakeYesNoChoiceWithCursorAt(BgConfig *bgConfig, const WindowTemplate *winTemplate, u16 borderTileStart, u8 borderPalette, u8 cursorStart, u32 heapID);
Menu *Menu_MakeYesNoChoice(BgConfig *bgConfig, const WindowTemplate *winTemplate, u16 borderTileStart, u8 borderPalette, u32 heapID);
u32 Menu_ProcessInputAndHandleExit(Menu *menu, u32 heapID);
u32 Menu_ProcessExternalInputAndHandleExit(Menu *menu, u8 input, u32 heapID);
void Menu_DestroyForExit(Menu *menu, u32 heapID);
void Window_DrawMenuCursor(Window *window, u32 x, u32 y);

#endif // POKEPLATINUM_MENU_H

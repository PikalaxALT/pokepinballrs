#include "constants/bg_music.h"
#include "constants/fields.h"
#include "main.h"
#include "global.h"

void sub_11C14(s16);
void sub_12524(void);
void sub_12BF8(void);

void sub_11B9C(void)
{
    s16 i;
    if (gMain.unk6 == 0)
    {
        gCurrentPinballGame->unk132c = &gCurrentPinballGame->unk1334[0];
        sub_11C14(0);
        sub_12524();
    }
    else
    {
        for (i = 0; i < 2; i++)
        {
            gCurrentPinballGame->unk132c = &gCurrentPinballGame->unk1334[i];
            sub_11C14(i);
        }
        sub_12BF8();
    }
}

void sub_11C14(s16 a0)
{
    struct UnkPinballGame1334 *r0 = &gCurrentPinballGame->unk1334[a0];
    r0->unk10 = gUnknown_02031520.unk26;
    r0->unk12 = gUnknown_02031520.unk28;
    r0->unk34 = r0->unk10 << 8;
    r0->unk38 = r0->unk12 << 8;
    r0->unk28 = gUnknown_02031520.unk26 * 2;
    r0->unk2A = gUnknown_02031520.unk28 * 2;
    r0->unkE = 0x100;
    r0->unk30 = 0;
    r0->unk32 = 0;
    if (gMain.selectedField == FIELD_RUBY) {
        r0->unk1 = 3;
    } else {
        r0->unk1 = 1;
    }
    r0->unk6 = 0;
    gCurrentPinballGame->unk5B2 = 1;
}

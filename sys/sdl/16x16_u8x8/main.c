#include "u8x8.h"

u8x8_t u8x8;




const uint8_t u8x8_font_px437wyse700a_bl[771] U8X8_FONT_SECTION("u8x8_font_px437wyse700a_bl") = 
  " \177\0\0\0\0\0\0\0\0\0\0\0\0\0\1\67\67\0\0\0\0\0\0\0\0\0\10\10\77\77\77"
  "\10\10\0\0\10\30\30\71\361\341\0\0 \60\70<\36\17\0\14\36\36\77\63##\0\0\0\0\0\0"
  "\0\0\0\0\0\0\7\17\37\77\0\0\0\0\0\0\0 \0\1\5\5\7\7\3\3\0\1\1\1\1\1"
  "\17\17\0\0\0\0\0@xx\0\1\1\1\1\1\1\1\0\0\0\0\0\0\60\60\0\0\20\30\34\36"
  "\17\7\0\0\17\37\37\77\66#\0\0    \77\77\0\0\60\70<<.&\0\0\20\20\60\60"
  "!!\0\0\3\3\3\3\42\42\0\0\20\20\60\60  \0\0\17\37\37\77\61!\0\0\0\0\0\0"
  ">\77\0\0\14\36\36\77\63!\0\0\0\0 !!!\0\0\0\0\0\0\30\30\0\0\0\0\0 "
  "\70\70\0\0\1\3\7\17\36<\0\0\4\4\4\4\4\4\0\0\0\0\0 \60\70\0\0\0\0\0\0"
  "\66\67\0\17\37\37\77\60#'\0\0\77\77\77\77\2\2\0  \77\77\77\77!\0\0\17\37\37\77"
  "\60 \0  \77\77\77\77 \0  \77\77\77\77!\0  \77\77\77\77!\0\0\17\37\37\77"
  "\60 \0\0\77\77\77\77\1\1\0\0\0\0  \77\77\0\0\10\30\30\70\60\60\0  \77\77\77"
  "\77\3\0  \77\77\77\77 \0\77\77\77\77\0\0\1\0\0\77\77\77\77\0\1\0\0\17\37\37\77"
  "\60 \0  \77\77\77\77!\0\0\17\37\37\77\60$\0  \77\77\77\77\3\0\10\30\30\70\60"
  "!!\0\0\0\0  \77\77\0\0\17\37\37\77\60 \0\0\3\7\17\37<\70\0\17\37\77\77\70"
  "\34\16\0\0\60\70<>\17\7\0\0\0\0!#\77\77\0\0\60\70<>/'\0\0\0\0\77\77"
  "\77\77\0\0\0\0\0\0\1\3\0\0\0\0    \0\0\0\0\0\0\0\0\0\200\200\200\200\200"
  "\200\200\0\0\0\0\0\0\0\0\0\0\34\34>>\42\42\0\0  \77\77\37\37\0\0\37\37\77\77"
  "  \0\0\36\37\77\77! \0\0\37\37\77\77$$\0\0!!\77\77\77\77\0\0OO\337\337"
  "\220\220\0\0  \77\77\77\77\0\0\0\0\0\0  \0\0 ``\340\300\200\0\0  \77\77"
  "\77\77\0\0\0\0\0\0  \0\77\77\77\77\1\77\77\0\0\0\0\77\77\77\77\0\0\16\37\37\77"
  "\61 \0\0\200\200\377\377\377\377\0\0\6\17\17\37\31\20\0\0  \77\77\77\77\0\0\23\23\67\67"
  "$$\0\0\0\0\0\37\37\77\0\0\37\37\77\77  \0\7\7\17\17\30\30\60\0\17\37\77\77\60"
  "\70\34\0\0  \61;\37\16\0\0\7\17\217\237\230\220\0\0\61\61\71\71,,\0\0\1\1\1\1"
  "\17\37\0\0\0\0\0\0>>\0\0   \60>\77\0\0\0\0\0\0\0\0\0\0\7\7\7\7"
  "\4\4";

const uint8_t u8x8_font_px437wyse700a_br[771] U8X8_FONT_SECTION("u8x8_font_px437wyse700a_br") = 
  " \177\0\0\0\0\0\0\0\0\67\67\1\0\0\0\0\0\0\0\0\0\0\0\0\0\10\10\77\77\77\10"
  "\10\0\341\363\77\36\36\14\0\0\7\3\61\60\60\60\0\0\67\36\36\77\77\63!\0\0\0\0\0\0\0"
  "\0\0\70\60 \0\0\0\0\0\60\70\77\37\17\7\0\0\3\3\7\7\5\5\1\0\17\17\1\1\1\1"
  "\1\0\70\30\0\0\0\0\0\0\1\1\1\1\1\1\1\0\60\60\0\0\0\0\0\0\3\1\0\0\0\0"
  "\0\0!\60\77\37\37\17\0\0\77\77    \0\0##\61\61\60\60\0\0!!\63\77\36\36"
  "\14\0\77\77\77\77\42\42\0\0  \61\77\37\37\16\0!!\63\77\36\36\14\0\77\77\1\0\0\0"
  "\0\0!!\63\77\36\36\14\0!!\61\77\37\37\17\0\30\30\0\0\0\0\0\0\70\30\0\0\0\0"
  "\0\0\70\60 \0\0\0\0\0\4\4\4\4\4\4\0\0<\36\17\7\3\1\0\0\67\67\1\0\0\0"
  "\0\0'$$$''\3\0\2\2\77\77\77\77\0\0!!\63\77\36\36\14\0  \60\70\30\30"
  "\10\0  \60\77\37\37\17\0!## \60\70\70\0!\3\3\0\0\0\0\0 \42\62>\36>"
  ">\0\1\1\1\77\77\77\77\0\77\77  \0\0\0\0\60\77\37\37\17\0\0\0\7\17\36<\70\60"
  " \0    \60\70\70\0\1\0\0\77\77\77\77\0\3\7\16\77\77\77\77\0  \60\77\37\37"
  "\17\0!\1\1\1\0\0\0\0,<\70\177\177_\17\0\7\17\37=\70\60 \0##\66>\34\34"
  "\10\0\77\77  \0\0\0\0  \60\77\37\37\17\0\70<\37\17\7\3\0\0\16\34\70\77\77\37"
  "\17\0\7\17><\70\60\0\0\77\77#!\0\0\0\0#! \60\70\70\0\0    \0\0"
  "\0\0\7\17\36\34\30\20\0\0\77\77\77\77\0\0\0\0\0\0\0\0\0\0\0\0\200\200\200\200\200\200"
  "\200\200\0\0\0\0\0\0\0\0\42\37\37\77\77  \0  !\77\77\37\36\0   \61\61\21"
  "\21\0 \37\37\77\77  \0$$$\67\67\27\27\0!!\1\1\0\0\0\0\220\377\377\177\177\0"
  "\0\0\1\0\0\77\77\77\77\0\77\77\77\77  \0\0\200\300\377\177\177\77\0\0\4\16\37\77;\61"
  " \0\77\77\77\77  \0\0\77\77\1\77\77\77\77\0\0\0\1\77\77\77>\0  \61\77\37\37"
  "\16\0\220\220\31\37\17\17\6\0\220\377\377\377\377\200\200\0! \0\1\1\1\1\0$$$==\31"
  "\31\0\77  \60\60\20\20\0 \37\37\77\77  \0\60\30\30\17\17\7\7\0\34\70\60\77\77\37"
  "\17\0\16\37;\61  \0\0\220\220\320\377\177\177\77\0&&\63\63\61\61\0\0\77>\60   "
  "\0\0>>\0\0\0\0\0\0\37\17\1\1\1\1\0\0\0\0\0\0\0\0\0\0\4\4\4\4\7\7"
  "\7\7";

const uint8_t u8x8_font_px437wyse700a_ul[771] U8X8_FONT_SECTION("u8x8_font_px437wyse700a_ul") = 
  " \177\0\0\0\0\0\0\0\0\0\0\0\0\340\360\370\370\0\0\14\34<<\0\0\0@@\360\360\360"
  "@@\0\0`\360\360\370\236\16\0\0````\0\0\0\0 pp\370\330\210\0\0\0 <<"
  "<\34\0\0\0\0\300\340\360\370\0\0\0\0\0\0\0\10\0\0@@\300\300\200\200\0\0\0\0\0\0"
  "\340\340\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\200\0\0\340\360\360\370\30\10\0\0  \60\60\370\370\0\0\20\20\30\30\10\10\0\0\20\20\30\30"
  "\10\10\0\0\0\200\300\340\360x\0\0\370\370\370\370\210\210\0\0\340\360\360\370\30\10\0\0\30\30\30\30"
  "\10\10\0\0`\360\360\370\230\10\0\0`\360\360\370\230\10\0\0\0\0\0\0``\0\0\0\0\0\0"
  "``\0\0\0\200\300\340\360x\0\0\200\200\200\200\200\200\0\0\0\0\0\10\30\70\0\0 \60\60\70"
  "\30\10\0\340\360\360\370\30\210\310\0\0\200\300\340\360x\70\0\10\10\370\370\370\370\10\0\0\340\360\360\370"
  "\30\10\0\10\10\370\370\370\370\10\0\10\10\370\370\370\370\10\0\10\10\370\370\370\370\10\0\0\340\360\360\370"
  "\30\10\0\0\370\370\370\370\0\0\0\0\0\0\10\10\370\370\0\0\0\0\0\0\10\10\0\10\10\370\370\370"
  "\370\300\0\10\10\370\370\370\370\10\0\370\370\370\370p\340\300\0\0\370\370\370\370\340\300\0\0\340\360\360\370"
  "\30\10\0\10\10\370\370\370\370\10\0\0\340\360\360\370\30\10\0\10\10\370\370\370\370\10\0 pp\370\330"
  "\210\210\0\70\70\30\10\10\370\370\0\0\370\370\370\370\0\0\0\0\370\370\370\370\0\0\0\370\370\370\370\0"
  "\0\0\0\0\30\70x\370\340\300\0\0x\370\370\370\200\0\0\0\70\70\30\10\10\210\0\0\0\0\370\370"
  "\370\370\0\0\20\60p\360\340\300\0\0\0\0\10\10\10\10\0\0 \60\70<\36\16\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\6\16\0\0\0\0\200\200\200\200\0\0\10\10\370\370\370\370\0\0\0\0\200\200"
  "\200\200\0\0\0\0\0\200\200\210\0\0\0\0\200\200\200\200\0\0\0\0\360\360\370\370\0\0\0\0\200\200"
  "\200\200\0\0\10\10\370\370\370\370\0\0\0\0\0\0\200\200\0\0\0\0\0\0\0\0\0\0\10\10\370\370"
  "\370\370\0\0\0\0\0\0\10\10\0\200\200\200\200\200\200\0\0\0\200\200\200\200\0\0\0\0\0\0\0\200"
  "\200\200\0\0\200\200\200\200\0\0\0\0\0\0\0\200\200\200\0\0\200\200\200\200\0\0\0\0\0\0\200\200"
  "\200\200\0\200\200\200\200\340\360\370\0\0\200\200\200\200\0\0\0\200\200\200\200\0\0\0\0\200\200\200\200\0"
  "\0\0\0\0\200\200\200\200\0\0\0\0\200\200\200\200\0\0\0\0\200\200\200\200\200\200\0\0\0\0\0\0"
  "\340\360\0\0\0\0\0\0\370\370\0\0\10\10\10\30\370\370\0\0\20\20\30\30\10\10\0\0\0\0\200\200"
  "\300\300";

const uint8_t u8x8_font_px437wyse700a_ur[770] U8X8_FONT_SECTION("u8x8_font_px437wyse700a_ur") = 
  " \177\0\0\0\0\0\0\0\0\370\370\360\340\0\0\0\0\0\0<<\34\14\0\0@@\360\360\360@"
  "@\0\16\36\70\60\60 \0\0\200\300\340\340` \0\0\330\370pp \0\0\0\0\0\0\0\0\0"
  "\0\0\70\30\10\0\0\0\0\0\30\70\370\360\340\300\0\0\200\200\300\300@@\0\0\340\340\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\300\340\360p\60\20"
  "\0\0\210\330\370\360\360\340\0\0\370\370\0\0\0\0\0\0\10\230\370\360\360`\0\0\10\10\230\370\360\360"
  "`\0\370\370\370\370\0\0\0\0\210\210\210\210\10\10\10\0\10\10\10\10\0\0\0\0\210\310\370\370x\70"
  "\0\0\10\10\230\370\360\360`\0\10\10\30\370\360\360\340\0``\0\0\0\0\0\0``\0\0\0\0"
  "\0\0\70\30\10\0\0\0\0\0\200\200\200\200\200\200\0\0x\360\340\300\200\0\0\0\210\330\370\360p "
  "\0\0\310HHx\370\370\360\0\70x\360\340\300\200\0\0\10\10\230\370\360\360`\0\10\10\30\70\60\60"
  " \0\10\10\30\370\360\360\340\0\10\210\210\10\30\70\70\0\10\210\210\10\30\70\70\0\10\10\30\70\60\60"
  " \0\0\0\0\370\370\370\370\0\370\370\10\10\0\0\0\0\10\370\370\370\370\10\10\0\340\360x\70\30\10"
  "\0\0\10\0\0\0\0\0\0\0\300\340p\370\370\370\370\0\200\0\0\370\370\370\370\0\10\10\30\370\360\360"
  "\340\0\10\10\230\370\360\360`\0\10\10\30\370\360\360\340\0\10\10\230\370\360\360`\0\10\10\30\70\60\60"
  " \0\370\370\10\10\30\70\70\0\0\0\0\370\370\370\370\0\0\0\370\370\370\370\0\0\0\0\0\370\370\370"
  "\370\0\300\340\370x\70\30\0\0\0\200\370\370\370x\0\0\310\350\370x\70\30\0\0\10\10\10\10\0\0"
  "\0\0\200\0\0\0\0\0\0\0\370\370\370\370\0\0\0\0\16\36<\70\60 \0\0\0\0\0\0\0\0"
  "\0\0\16\16\10\0\0\0\0\0\200\200\200\0\0\0\0\0\200\200\200\200\0\0\0\0\200\200\200\200\200\0"
  "\0\0\210\370\370\370\370\0\0\0\200\200\200\200\200\0\0\0\10\10\30\30\60\60\0\0\200\0\0\200\200\200"
  "\200\0\0\200\200\200\200\0\0\0\260\260\260\260\0\0\0\0\200\200\260\260\260\260\0\0\0\0\0\200\200\200"
  "\200\0\370\370\370\370\0\0\0\0\0\200\200\200\200\200\0\0\200\200\200\200\200\0\0\0\200\200\200\200\0\0"
  "\0\0\200\200\200\200\0\0\0\0\200\0\0\200\200\200\200\0\200\200\200\200\200\0\0\0\200\200\200\200\200\0"
  "\0\0\370\200\200\200\200\0\0\0\0\200\200\200\200\0\0\0\0\0\0\200\200\200\200\0\0\0\0\200\200\200"
  "\200\0\0\0\200\200\200\200\0\0\0\0\0\200\200\200\200\0\200\200\200\200\200\200\0\0\370\370\30\10\10\10"
  "\0\0\370\370\0\0\0\0\0\0\360\340\0\0\0\0\0\0\30\20\20\30\30\10\10\0``\300\300\200\200"
  "\0";


char *s = "ABC defg";

void u8x8_Draw16x16QuarterString(u8x8_t *u8x8, uint8_t x, uint8_t y, const char *s)
{
  while( *s != '\0' )
  {
    u8x8_DrawGlyph(u8x8, x, y, *s);
    x+=2;
    s++;
  }    
}

void u8x8_Draw16x16QuarterString1x2(u8x8_t *u8x8, uint8_t x, uint8_t y, const char *s)
{
  while( *s != '\0' )
  {
    u8x8_Draw1x2Glyph(u8x8, x, y, *s);
    x+=2;
    s++;
  }    
}

int main(void)
{
  u8x8_Setup_SDL_128x64(&u8x8);
  u8x8_InitDisplay(&u8x8);  

  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_ul);
  u8x8_Draw16x16QuarterString(&u8x8, 0, 0, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_ur);
  u8x8_Draw16x16QuarterString(&u8x8, 1, 0, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_bl);
  u8x8_Draw16x16QuarterString(&u8x8, 0, 1, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_br);
  u8x8_Draw16x16QuarterString(&u8x8, 1, 1, s);

  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_ul);
  u8x8_Draw16x16QuarterString1x2(&u8x8, 0, 2, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_ur);
  u8x8_Draw16x16QuarterString1x2(&u8x8, 1, 2, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_bl);
  u8x8_Draw16x16QuarterString1x2(&u8x8, 0, 4, s);
  u8x8_SetFont(&u8x8, u8x8_font_px437wyse700a_br);
  u8x8_Draw16x16QuarterString1x2(&u8x8, 1, 4, s);

  while( u8g_sdl_get_key() < 0 )
    ;
  
  return 0;
}


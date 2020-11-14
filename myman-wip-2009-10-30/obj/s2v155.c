int maze_n = 4;
int maze_w = 19;
int maze_h = 21;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\" GONE  \" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=9.5 ROGHOST=1 COGHOST=1 RFRUIT=11.5 RTOP=8 RHERO=15.5 RMSG=11 CMSG=6 RMSG2=7 CMSG2=6 WALL_COLORS=\"\\x00\\x07\\x03\\x0E\" MORTAR_COLORS=\"\\x09\\x0C\\x0F\\x04\" DOT_COLORS=\"\\x07\\x0F\\x0E\\x0C\" ABOUT=\"Inspired by the \'PacMan\' game for SymbOS by Prodatron\"";
static const char builtin_mazefile_str[] = "lvl/sympac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\376\306\265\371\306\315\265\371\320\371\306\315\265\371\306\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\322\371\306\315\313\315\265\371\322\371\306\265\371\272\272"
  "\272\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\272\272"
  "\310\315\315\273\371\314\315\265 \320 \306\315\271\371\311\315\315\274\274"
  "\0\0\0\272\371\272       \272\371\272\0\0\0\0"
  "\315\315\315\274\371\320 \311\315\360\315\273 \320\371\310\315\315\315\315"
  "    \371  \272   \272  \371     "
  "\315\315\315\273\371\322 \310\315\315\315\274 \322\371\311\315\315\315\315"
  "\0\0\0\272\371\272       \272\371\272\0\0\0\0"
  "\311\315\315\274\371\320 \306\315\313\315\265 \320\371\310\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\273\371\306\315\265\371\320\371\306\315\265\371\311\265\371\272\272"
  "\272\376\371\272\371\371\371\371\371 \371\371\371\371\371\272\371\376\272\272"
  "\314\265\371\320\371\322\371\306\315\313\315\265\371\322\371\320\371\306\271\271"
  "\272\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\272\272"
  "\272\371\306\315\315\312\315\265\371\320\371\306\315\312\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x1 */
  "\311\315\315\315\315\313\315\315\315\315\315\315\315\313\315\315\315\315\273\273"
  "\272\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\320\371\306\315\315\315\265\371\320\371\306\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\312\265\371\322\371\306\315\265\371\322\371\306\315\265\371\322\371\306\312\312"
  "  \371\272\371\371\371\371\371\272\371\371\371\371\371\272\371   "
  "\315\273\371\310\315\265 \306\315\312\315\265 \306\315\274\371\311\315\315"
  "\0\272\371             \371\272\0\0"
  "\0\272\371\311\315\265 \311\315\360\315\273 \306\315\273\371\272\0\0"
  "\0\272\371\272   \272   \272   \272\371\272\0\0"
  "\315\274\371\320 \322 \310\315\315\315\274 \322 \320\371\310\315\315"
  "  \371  \272       \272  \371   "
  "\315\273\371\306\315\312\315\265 \322 \306\315\312\315\265\371\311\315\315"
  "\0\272\371\371\371\371\371  \272  \371\371\371\371\371\272\0\0"
  "\311\274\371\306\315\265\371\306\315\312\315\265\371\306\315\265\371\310\273\273"
  "\272\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\277\371\311\315\265\371\322\371\306\315\273\371\332\277\371\272\272"
  "\272\371\263\263\371\272\371\371\371\272\371\371\371\272\371\263\263\371\272\272"
  "\272\376\300\331\371\320\371\306\315\312\315\265\371\320\371\300\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x2 */
  "\315\315\315\315\315\313\315\315\315\315\315\315\315\313\315\315\315\315\315\315"
  "     \272\371\371\371\371\371\371\371\272      "
  "\313\315\315\265 \320\371\306\315\313\315\265\371\320 \306\315\315\313\313"
  "\272\376\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\265\371\322\371\320\371\322\371\306\315\315\273\371\272\272"
  "\272\371\272\371\371\371\371\272\371\371\371\272\371\371\371\371\272\371\272\272"
  "\272\371\320\371\306\273 \310\315\315\315\274 \311\265\371\320\371\272\272"
  "\272\371\371\371\371\272       \272\371\371\371\371\272\272"
  "\314\315\315\265\371\272 \311\315\360\315\273 \272\371\306\315\315\271\271"
  "\272\371\371\371\371\320 \272   \272 \320\371\371\371\371\272\272"
  "\272\371\306\273\371  \310\315\315\315\274  \371\311\265\371\272\272"
  "\272\371\371\272\371\322       \322\371\272\371\371\272\272"
  "\310\273\371\320\371\310\265\371\332\304\277\371\306\274\371\320\371\311\274\274"
  "\0\272\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\272\0\0"
  "\315\274\371\306\315\313\265\371\300\304\331\371\306\313\315\265\371\310\315\315"
  "  \371\371\371\272\371\371   \371\371\272\371\371\371   "
  "\313\265\371\322\371\320\371\306\315\313\315\265\371\320\371\322\371\306\313\313"
  "\272\376\371\272\371\371\371\371\371\272\371\371\371\371\371\272\371\376\272\272"
  "\272\371\306\274\371\306\315\265\371\320\371\306\315\265\371\310\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x3 */
  "\311\315\315\315\315\315\315\315\274 \310\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\322\376\306\315\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\274\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\310\310"
  " \371\314\315\315\315\315\315\315\315\315\315\315\315\265\371\272\371  "
  "\273\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\311\311"
  "\272\371\320\376\306\315\315\315\315\315\315\315\315\315\315\315\274\371\272\272"
  "\272\371\371\371\371\371       \371\371\371\371\371\272\272"
  "\272\371\322\371\306\273 \311\315\360\315\273 \311\265\371\322\371\272\272"
  "\272\371\272\371\371\272 \272   \272 \272\371\371\272\371\272\272"
  "\274\371\320\371\306\274 \310\315\315\315\274 \310\265\371\320\371\310\310"
  " \371\371\371\371\371       \371\371\371\371\371  "
  "\273\371\322\376\311\315\315\315\273\371\311\315\315\315\273\376\322\371\311\311"
  "\272\371\272\371\272\371\371\371\272\371\272\371\371\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\322\371\272\371\272\371\322\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\272\371\272 \272\371\272\371\272\371\272\371\272\272"
  "\272\371\272\371\320\371\272\371\272\371\272\371\272\371\320\371\272\371\272\272"
  "\272\371\272\371\371\371\272\371\272\371\272\371\272\371\371\371\272\371\272\272"
  "\274\371\310\315\315\315\274\376\320\371\320\376\310\315\315\315\274\371\310\310"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\315\315\315\315\315\315\315\315\273 \311\315\315\315\315\315\315\315\315\315"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
int maze_n = 1;
int maze_w = 25;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "RTOP=8.5 RGHOST=11.5 ROGHOST=2.5 COGHOST=1 RHERO=13.5 RFRUIT=13.5 RMSG=12 CMSG=10 RMSG2=8 CMSG2=10 READY=\"READY\" PLAYER1=\"P ONE\" PLAYER2=\"P TWO\" GAMEOVER=\" BYE \" WALL_COLORS=\"\\x02\" MORTAR_COLORS=\"\\x0C\" ABOUT=\"Inspired by Spectral Associates\' \'Ghost Gobbler\'\"";
static const char builtin_mazefile_str[] = "lvl/gobbler4.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\270\304\325\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371\272\272"
  "\272 \306\315\270\304\277 \306\315\265 \300\304\331 \306\315\265 \332\304\277 \272\272"
  "\272\376 \371\263 \263\371 \371 \371 \371 \371 \371 \371\263 \263\376\272\272"
  "\314\315\265 \300\304\324\315\265 \306\315\270\304\325\315\265 \306\315\276\304\331 \272\272"
  "\272\371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371\272\272"
  "\272 \306\315\265 \332\304\325\315\265 \300\304\331 \332\304\325\315\315\315\265 \272\272"
  "\272\371 \371 \371\263 \263\371 \371 \371 \371\263 \263\371 \371 \371\272\272"
  "\310\315\315\315\273 \263 \263 \311\360\360\315\273 \263 \263 \311\315\315\315\274\274"
  "    \272\371\263 \263\371\272   \272\371\263 \263\371\272     "
  "\315\315\315\315\274 \300\304\331 \272   \272 \300\304\331 \310\315\315\315\315\315"
  " \371 \371 \371 \371 \371\272   \272\371 \371 \371 \371 \371  "
  "\315\315\315\315\273 \332\304\277 \310\315\315\315\274 \332\304\277 \311\315\315\315\315\315"
  "    \272\371\263 \263\371 \371 \371 \371\263 \263\371\272     "
  "\311\315\315\315\274 \300\304\331 \332\304\325\315\265 \300\304\331 \310\315\315\315\273\273"
  "\272\371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371 \371\272\272"
  "\272 \306\315\270\304\277 \306\315\276\304\331 \306\315\265 \332\304\325\315\265 \272\272"
  "\272\371 \371\263 \263\371 \371 \371 \371 \371 \371\263 \263\371 \371\272\272"
  "\314\315\265 \300\304\331 \332\304\277 \306\315\270\304\277 \300\304\331 \306\315\271\271"
  "\272\376 \371 \371 \371\263 \263\371 \371\263 \263\371 \371 \371 \376\272\272"
  "\272 \306\315\315\315\265 \300\304\324\315\265 \263 \263 \306\315\315\315\265 \272\272"
  "\272\371 \371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\276\304\324\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
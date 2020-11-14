int maze_n = 1;
int maze_w = 11;
int maze_h = 11;
int maze_flags = 0;
const char *maze_args = "READY=\"   READY!  \" GAMEOVER=\" GAME OVER \" PLAYER1=\"PLAYER ONE \" PLAYER2=\"PLAYER TWO \" RGHOST=6.5 ROGHOST=-1.5 COGHOST=1.5 RFRUIT=2.5 RTOP=6 RHERO=2.5 RMSG=10 CMSG=0 RMSG2=0 CMSG2=0 ABOUT=\"Inspired by Wim van Eck\'s \'Bugman\' cricket vs. human game\"";
static const char builtin_mazefile_str[] = "lvl/bugman.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\270\304\325\315\315\315\273\273"
  "\272\371\371\371\300\304\331\371\371\371\272\272"
  "\272\376\322\371\371 \371\371\322\376\272\272"
  "\272\371\310\265\371\007\371\306\274\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\272\272"
  "\323\304\277\371\306\315\265\371\332\304\275\275"
  "\326\304\331\371\371\371\371\371\300\304\267\267"
  "\272\371\371\371\322\371\322\371\371\371\272\272"
  "\272\371\306\315\274\371\310\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
;
int maze_n = 1;
int maze_w = 21;
int maze_h = 31;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\"GOODBYE\" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=17 ROGHOST=1.5 COGHOST=1 RFRUIT=19.5 RTOP=14 RHERO=29.5 RMSG=20 CMSG=7 RMSG2=12 CMSG2=7 ABOUT=\"Inspired by \'Pac-Tac\' by Computerware\"";
static const char builtin_mazefile_str[] = "lvl/pactac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376 \371 \371 \371 \376 \371 \371 \371 \371 \376\272\272"
  "\272 \311\315\273 \322 \306\315\313\315\265 \322 \311\315\273 \272\272"
  "\272\371\272 \272\371\272\371 \371\272\371 \371\272\371\272 \272\371\272\272"
  "\272 \310\315\274 \310\315\265 \320 \306\315\274 \310\315\274 \272\272"
  "\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\272"
  "\272 \311\315\273 \311\315\265 \322 \306\315\273 \311\315\273 \272\272"
  "\272\371\272 \272\371\272\371 \371\272\371 \371\272\371\272 \272\371\272\272"
  "\272 \310\315\274 \320 \306\315\312\315\265 \320 \310\315\274 \272\272"
  "\272\376 \371 \371 \371 \371 \371 \371 \371 \371 \376\272\272"
  "\310\315\273 \306\315\273 \322 \306\315\273 \311\315\265 \311\315\274\274"
  "  \272\371 \371\272\371\272\371 \371\272\371\272\371 \371\272   "
  "\315\315\312\315\265 \272 \310\315\265 \320 \272 \306\315\312\315\315\315"
  " \371 \371 \371\272\371 \371 \371 \371\272\371 \371 \371  "
  "\315\315\313\315\265 \272 \311\360\360\360\273 \272 \306\315\313\315\315\315"
  "  \272\371 \371\272\371\272   \272\371\272\371 \371\272   "
  "\311\315\274 \322 \272 \272   \272 \272 \322 \310\315\273\273"
  "\272\371 \371\272\371\272\371\272   \272\371\272\371\272\371 \371\272\272"
  "\272 \306\315\274 \272 \310\315\315\315\274 \272 \310\315\265 \272\272"
  "\272\371 \371 \371\272\371 \371 \371 \371\272\371 \371 \371\272\272"
  "\272 \311\315\273 \272 \306\315\315\315\265 \272 \311\315\273 \272\272"
  "\272\376\272 \272\371\272\371 \371 \371 \371\272\371\272 \272\376\272\272"
  "\272 \310\315\274 \320 \306\315\313\315\265 \320 \310\315\274 \272\272"
  "\272\371 \371 \371 \371 \371\272\371 \371 \371 \371 \371\272\272"
  "\272 \306\315\315\315\273 \322 \320 \322 \311\315\315\315\265 \272\272"
  "\272\371 \371 \371\272\371\272\371 \371\272\371\272\371 \371 \371\272\272"
  "\272 \311\315\273 \272 \320 \322 \320 \272 \311\315\273 \272\272"
  "\272\371\272 \272\371\272\371 \371\272\371 \371\272\371\272 \272\371\272\272"
  "\272 \310\315\274 \320 \306\315\312\315\265 \320 \310\315\274 \272\272"
  "\272\376 \371 \371 \371 \371 \376 \371 \371 \371 \376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
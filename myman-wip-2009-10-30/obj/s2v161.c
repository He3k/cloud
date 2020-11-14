int maze_n = 1;
int maze_w = 11;
int maze_h = 11;
int maze_flags = 0;
const char *maze_args = "RGHOST=1.5 RTOP=1.5 GHOSTS=1 ROGHOST=-2 COGHOST=2 RMSG=10 CMSG=1 RMSG2=0 CMSG2=1 READY=\"  READY! \" PLAYER1=\" PLAYER 1\" PLAYER2=\" PLAYER 2\" GAMEOVER=\"GAME OVER\" RHERO=9.5 RFRUIT=5.5 ABOUT=\"Inspired by \'guimp pacman\'\"";
static const char builtin_mazefile_str[] = "lvl/guimp.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371 \371 \371 \371 \371\272\272"
  "\272 \322 \306\315\265 \322 \272\272"
  "\272\371\272\371 \371 \371\272\371\272\272"
  "\272 \320 \306\315\265 \320 \272\272"
  "\272\371 \371 \371 \371 \371\272\272"
  "\272 \322 \306\315\265 \322 \272\272"
  "\272\371\272\371 \371 \371\272\371\272\272"
  "\272 \320 \306\315\265 \320 \272\272"
  "\272\371 \371 \371 \371 \371\272\272"
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
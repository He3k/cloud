int maze_n = 1;
int maze_w = 33;
int maze_h = 24;
int maze_flags = 0;
const char *maze_args = "READY=\"  READY!!  \" GAMEOVER=\" GAME OVER \" PLAYER1=\"PLAYER ONE \" PLAYER2=\"PLAYER TWO \" RGHOST=6.5 ROGHOST=0 COGHOST=1.5 RFRUIT=6.5 RTOP=3 RHERO=21.5 RMSG=23 CMSG=11 RMSG2=0 CMSG2=11 ABOUT=\"Inspired by \'Scarfman\' for the TRS-80\"";
static const char builtin_mazefile_str[] = "lvl/scarfman.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\322\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\304\304\277\272\332\304\304\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\263\272\263\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\277\371\332\304\304\304\277\371\332\277 \263\272\263 \332\277\371\332\304\304\304\277\371\332\277\371\263\263\263"
  "\263\263\371\263\263\371\300\304\304\304\331\371\263\263 \263\272\263 \263\263\371\300\304\304\304\331\371\263\263\371\263\263\263"
  "\263\263\376\263\263\371\371\371\371\371\371\371\263\263 \300\320\331 \263\263\371\371\371\371\371\371\371\263\263\376\263\263\263"
  "\263\263 \263\300\304\304\277\371\332\277\371\263\263     \263\263\371\332\277\371\332\304\304\331\263 \263\263\263"
  "\263\263\371\263\306\315\265\263\371\263\263\371\263\300\304\304\304\304\304\331\263\371\263\263\371\263\306\315\265\263\371\263\263\263"
  "\263\263\371\300\304\304\304\331\371\263\263\371\300\304\304\304\304\304\304\304\331\371\263\263\371\300\304\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\263\263\263"
  "\331\300\304\304\304\304\304\277\371\263\263\371\332\304\304\277\376\332\304\304\277\371\263\263\371\332\304\304\304\304\304\331\300\300"
  "\304\304\304\304\304\304\304\331\371\300\331\371\263\332\304\331 \300\304\277\263\371\300\331\371\300\304\304\304\304\304\304\304\304"
  " \371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371  "
  "\304\277\371\332\304\304\304\277\371\332\277\371\263\263\371\332\304\277\371\263\263\371\332\277\371\332\304\304\304\277\371\332\304\304"
  "\277\263\371\300\304\304\277\263\371\263\263\371\300\331\371\263\322\263\371\300\331\371\263\263\371\263\332\304\304\331\371\263\332\332"
  "\263\263\371\371\371\371\263\263\371\263\263\371\371\371\371\263\272\263\371\371\371\371\263\263\371\263\263\371\371\371\371\263\263\263"
  "\263\300\304\304\277\371\263\263\371\263\263\371\332\304\304\331\272\300\304\304\277\371\263\263\371\263\263\371\332\304\304\331\263\263"
  "\263\332\304\304\331\371\300\331\371\263\263\371\300\304\304\277\272\332\304\304\331\371\263\263\371\300\331\371\300\304\304\277\263\263"
  "\263\263\371\371\371\371\371\371\371\263\263\371\371\371\371\263\272\263\371\371\371\371\263\263\371\371\371\371\371\371\371\263\263\263"
  "\263\263\376\332\304\304\304\277\371\263\300\304\304\277\371\263\320\263\371\332\304\304\331\263\371\332\304\304\304\277\376\263\263\263"
  "\263\263 \300\304\304\304\331\371\300\304\304\304\331\371\300\304\331\371\300\304\304\304\331\371\300\304\304\304\331 \263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
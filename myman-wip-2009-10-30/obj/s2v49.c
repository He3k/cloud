int maze_n = 1;
int maze_w = 24;
int maze_h = 27;
int maze_flags = 0;
const char *maze_args = "READY=\" READY! \" GAMEOVER=\"ALL GONE\" PLAYER1=\"PLAYER 1\" PLAYER2=\"PLAYER 2\" RGHOST=13.5 ROGHOST=2 COGHOST=1 RFRUIT=15.5 RTOP=11.5 RHERO=21.5 RMSG=15 CMSG=8 CMSG2=8 ABOUT=\"Inspired by Commodore\'s \'Jelly Monsters\' game for the VIC-20\"";
static const char builtin_mazefile_str[] = "lvl/jellymon.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\277\371\332\304\304\277\371\263\263\371\332\304\304\277\371\332\304\277\371\272\272"
  "\272\376\263 \263\371\263  \263\371\263\263\371\263  \263\371\263 \263\376\272\272"
  "\272\371\300\304\331\371\300\304\304\331\371\300\331\371\300\304\304\331\371\300\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\277\371\332\277\371\332\304\304\304\304\277\371\332\277\371\332\304\277\371\272\272"
  "\272\371\300\304\331\371\263\263\371\300\304\277\332\304\331\371\263\263\371\300\304\331\371\272\272"
  "\272\371\371\371\371\371\263\263\371\371\371\263\263\371\371\371\263\263\371\371\371\371\371\272\272"
  "\310\315\315\315\273\371\263\300\304\277 \263\263 \332\304\331\263\371\311\315\315\315\274\274"
  "    \272\371\263\332\304\331 \300\331 \300\304\277\263\371\272     "
  "    \272\371\263\263        \263\263\371\272     "
  "\315\315\315\315\274\371\300\331 \311\315\360\360\315\273 \300\331\371\310\315\315\315\315\315"
  "     \371   \272    \272   \371      "
  "\315\315\315\315\273\371\332\277 \310\315\315\315\315\274 \332\277\371\311\315\315\315\315\315"
  "    \272\371\263\263        \263\263\371\272     "
  "    \272\371\263\263 \332\304\304\304\304\277 \263\263\371\272     "
  "\311\315\315\315\274\371\300\331 \300\304\277\332\304\331 \300\331\371\310\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\277\371\332\304\304\277\371\263\263\371\332\304\304\277\371\332\304\277\371\272\272"
  "\272\371\300\277\263\371\300\304\304\331\371\300\331\371\300\304\304\331\371\263\332\331\371\272\272"
  "\272\376\371\263\263\371\371\371\371\371\371  \371\371\371\371\371\371\263\263\371\376\272\272"
  "\310\273\371\263\263\371\332\277\371\332\304\304\304\304\277\371\332\277\371\263\263\371\311\274\274"
  " \272\371\263\263\371\263\263\371\263    \263\371\263\263\371\263\263\371\272  "
  " \272\371\300\331\371\300\331\371\300\304\304\304\304\331\371\300\331\371\300\331\371\272  "
  " \272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272  "
  " \310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274  "
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
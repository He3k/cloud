int maze_n = 6;
int maze_w = 33;
int maze_h = 23;
int maze_flags = 4;
const char *maze_args = "RHERO=17.5,17.5,12.5,17.5,17.5,17.5 RFRUIT=17.5,17.5,12.5,17.5,17.5,17.5 RMSG=22 RMSG2=0 CMSG=13 CMSG2=13 READY=\" READY!\" GAMEOVER=\" GONE  \" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=15.5 ROGHOST=1 RTOP=13.5 WALL_COLORS=\"\\x0C\\x09\" MORTAR_COLORS=\"\\x09\\x0C\" DOT_COLORS=\"\\x0F\\x0F\" ABOUT=\"Inspired by Nick Jones/Bubble Bus\'s \'Classic Muncher\'\"";
static const char builtin_mazefile_str[] = "lvl/classmun.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\304\304\277 \332\304\304\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\376 \371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371 \371 \376\263\263\263"
  "\263\263 \332\304\304\304\277 \332\304\304\304\277 \263 \263 \332\304\304\304\277 \332\304\304\304\277 \263\263\263"
  "\263\263\371\263   \263\371\263   \263\371\263 \263\371\263   \263\371\263   \263\371\263\263\263"
  "\263\263 \300\304\304\304\331 \300\304\304\304\331 \300\304\331 \300\304\304\304\331 \300\304\304\304\331 \263\263\263"
  "\263\263\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\263\263\263"
  "\263\263 \332\304\304\304\277 \332\277 \332\304\304\304\304\304\304\304\277 \332\277 \332\304\304\304\277 \263\263\263"
  "\263\263\371\263   \263\371\263\263 \300\304\304\277 \332\304\304\331 \263\263\371\263   \263\371\263\263\263"
  "\263\263 \300\304\304\304\331 \263\263 \371 \371\263 \263\371 \371 \263\263 \300\304\304\304\331 \263\263\263"
  "\263\263\371 \371 \371 \371\263\300\304\304\277 \263 \263 \332\304\304\331\263\371 \371 \371 \371\263\263\263"
  "\331\300\304\304\304\304\304\277 \300\304\304\304\331 \300\304\331 \300\304\304\304\331 \332\304\304\304\304\304\331\300\300"
  "\304\304\304\304\304\304\304\331\371 \371 \371 \371 \371 \371 \371 \371 \371\300\304\304\304\304\304\304\304\304"
  "         \332\304\277 \311\315\315\360\315\315\273 \332\304\277          "
  "\304\304\304\304\304\304\304\277\371\263 \263\371\272     \272\371\263 \263\371\332\304\304\304\304\304\304\304\304"
  "\277\332\304\304\304\304\304\331 \300\304\331 \272     \272 \300\304\331 \300\304\304\304\304\304\277\332\332"
  "\263\263\371 \371 \371 \371 \371 \371\310\315\315\315\315\315\274\371 \371 \371 \371 \371 \371\263\263\263"
  "\263\263 \332\304\304\304\277 \332\304\277         \332\304\277 \332\304\304\304\277 \263\263\263"
  "\263\263\371\263   \263\371\263 \263\371\332\304\304\304\304\304\277\371\263 \263\371\263   \263\371\263\263\263"
  "\263\263 \300\304\304\304\331 \263 \263 \300\304\304\304\304\304\331 \263 \263 \300\304\304\304\331 \263\263\263"
  "\263\263\376 \371 \371 \371\263 \263\371 \371 \371 \371 \371\263 \263\371 \371 \371 \376\263\263\263"
  "\263\300\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
/* 0x1 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277 \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\277 \263 \263 \332\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\376 \371 \371 \371 \371 \371\263 \263 \263 \263\371 \371 \371 \371 \371 \376\263\263\263"
  "\263\263 \332\304\304\277 \332\304\304\277 \263 \263 \263 \263 \332\304\304\277 \332\304\304\277 \263\263\263"
  "\263\263\371\263  \263\371\263  \263\371\263 \263 \263 \263\371\263  \263\371\263  \263\371\263\263\263"
  "\263\263 \300\304\304\331 \300\304\304\331 \300\304\331 \300\304\331 \300\304\304\331 \300\304\304\331 \263\263\263"
  "\263\263\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\263\263\263"
  "\263\300\304\304\304\304\277 \332\304\304\304\304\277 \332\304\277 \332\304\304\304\304\277 \332\304\304\304\304\331\263\263"
  "\263\332\304\304\304\304\331 \300\304\304\304\304\331 \263 \263 \300\304\304\304\304\331 \300\304\304\304\304\277\263\263"
  "\263\263\371 \371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371 \371 \371\263\263\263"
  "\263\263 \332\304\277 \332\304\304\304\277 \332\304\331 \300\304\277 \332\304\304\304\277 \332\304\277 \263\263\263"
  "\263\263\371\263 \263\371\300\304\304\277\263\371\300\304\304\304\304\304\331\371\263\332\304\304\331\371\263 \263\371\263\263\263"
  "\263\263 \263 \263   \371\263\263  \371 \371 \371  \263\263\371   \263 \263 \263\263\263"
  "\263\263\371\263 \263\371\332\277 \300\331\371\311\315\315\360\315\315\273\371\300\331 \332\277\371\263 \263\371\263\263\263"
  "\263\263 \300\304\331 \263\263\371   \272     \272   \371\263\263 \300\304\331 \263\263\263"
  "\263\263\371 \371 \371\263\300\304\304\277\371\272     \272\371\332\304\304\331\263\371 \371 \371\263\263\263"
  "\263\263 \332\304\277 \300\304\304\304\331 \310\315\315\315\315\315\274 \300\304\304\304\331 \332\304\277 \263\263\263"
  "\263\263\371\263 \263\371 \371 \371 \371       \371 \371 \371 \371\263 \263\371\263\263\263"
  "\263\263 \263 \300\304\304\277 \332\277 \332\304\304\304\304\304\277 \332\277 \332\304\304\331 \263 \263\263\263"
  "\263\263\371\300\304\304\304\304\331 \263\263\371\300\304\304\304\304\304\331\371\263\263 \300\304\304\304\304\331\371\263\263\263"
  "\263\263  \376 \371 \371 \263\263  \371 \371 \371  \263\263 \371 \371 \376  \263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\331\300\304\304\304\277 \332\304\304\304\331\300\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
/* 0x2 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\277 \332\304\304\304\304\304\277 \332\304\304\304\304\304\277 \332\304\304\304\304\304\277\263\263"
  "\263\263\376 \371 \371\263 \263\371 \371 \371\263 \263\371 \371 \371\263 \263\371 \371 \376\263\263\263"
  "\263\263 \332\304\277 \263 \263 \332\304\277 \263 \263 \332\304\277 \263 \263 \332\304\277 \263\263\263"
  "\263\263\371\263 \263\371\300\304\331\371\263 \263\371\263 \263\371\263 \263\371\300\304\331\371\263 \263\371\263\263\263"
  "\263\263 \263 \263 \371 \371 \263 \263 \263 \263 \263 \263 \371 \371 \263 \263 \263\263\263"
  "\263\263\371\263 \300\304\277 \332\304\331 \263\371\263 \263\371\263 \300\304\277 \332\304\331 \263\371\263\263\263"
  "\263\263 \263   \263\371\263   \263 \263 \263 \263   \263\371\263   \263 \263\263\263"
  "\263\263\371\300\304\304\304\331 \300\304\304\304\331\371\263 \263\371\300\304\304\304\331 \300\304\304\304\331\371\263\263\263"
  "\263\263 \371 \371 \371 \371 \371 \371 \263 \263 \371 \371 \371 \371 \371 \371 \263\263\263"
  "\263\300\304\304\304\277 \332\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\277 \332\304\304\304\331\263\263"
  "\263\332\304\304\304\331 \263  \332\304\304\304\304\304\304\304\304\304\304\304\277  \263 \300\304\304\304\277\263\263"
  "\263\263\371 \371 \371\263  \263           \263  \263\371 \371 \371\263\263\263"
  "\263\263 \332\304\277 \263  \263\371\311\315\315\315\360\315\315\315\273\371\263  \263 \332\304\277 \263\263\263"
  "\263\263\371\263 \263\371\300\304\304\331 \272       \272 \300\304\304\331\371\263 \263\371\263\263\263"
  "\263\263 \263 \263 \371 \371 \371\272       \272\371 \371 \371 \263 \263 \263\263\263"
  "\263\263\371\300\304\331\371\332\304\304\277 \310\315\315\315\315\315\315\315\274 \332\304\304\277\371\300\304\331\371\263\263\263"
  "\263\263 \371 \371 \263  \263\371 \371 \332\304\277 \371 \371\263  \263 \371 \371 \263\263\263"
  "\263\263\371\332\304\304\304\331  \300\304\304\277\371\263 \263\371\332\304\304\331  \300\304\304\304\277\371\263\263\263"
  "\263\263 \300\304\304\304\304\304\304\304\304\304\331 \263 \263 \300\304\304\304\304\304\304\304\304\304\331 \263\263\263"
  "\263\263\376 \371 \371 \371 \371 \371 \371\263 \263\371 \371 \371 \371 \371 \371 \376\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
/* 0x3 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\277 \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277 \332\304\304\304\304\277\263\263"
  "\263\263 \376 \371\263 \263\371 \371 \371 \371 \371 \371 \371 \371\263 \263\371 \376 \263\263\263"
  "\263\263\371\332\277 \263 \263 \332\304\304\304\304\277 \332\304\304\304\304\277 \263 \263 \332\277\371\263\263\263"
  "\263\263 \263\263\371\263 \263\371\300\304\304\304\304\331 \300\304\304\304\304\331\371\263 \263\371\263\263 \263\263\263"
  "\263\263\371\263\263 \263 \263 \371 \371 \371 \371 \371 \371 \371 \263 \263 \263\263\371\263\263\263"
  "\263\263 \263\263\371\263 \263\371\332\304\304\304\304\277 \332\304\304\304\304\277\371\263 \263\371\263\263 \263\263\263"
  "\263\263\371\300\331 \300\304\331 \263\332\304\304\304\331 \300\304\304\304\277\263 \300\304\331 \300\331\371\263\263\263"
  "\263\263 \371 \371 \371 \371\263\263 \371 \371 \371 \371 \263\263\371 \371 \371 \371 \263\263\263"
  "\263\300\304\304\277 \332\304\277 \300\331\371\332\304\304\304\304\304\277\371\300\331 \332\304\277 \332\304\304\331\263\263"
  "\300\304\304\304\331\371\263 \263\371 \371 \263     \263 \371 \371\263 \263\371\300\304\304\304\331\331"
  "      \263 \263 \332\277\371\300\304\304\304\304\304\331\371\332\277 \263 \263       "
  "\332\304\304\304\277\371\263 \263\371\263\263 \371 \371 \371 \371 \263\263\371\263 \263\371\332\304\304\304\277\277"
  "\263\332\304\304\331 \300\304\331 \263\263\371\311\315\315\360\315\315\273\371\263\263 \300\304\331 \300\304\304\277\263\263"
  "\263\263 \371 \371 \371 \371\263\263 \272     \272 \263\263\371 \371 \371 \371 \263\263\263"
  "\263\263\371\332\304\304\304\304\277 \263\263\371\272     \272\371\263\263 \332\304\304\304\304\277\371\263\263\263"
  "\263\263 \263    \263\371\263\263 \310\315\315\315\315\315\274 \263\263\371\263    \263 \263\263\263"
  "\263\263\371\263    \263 \300\331\371       \371\300\331 \263    \263\371\263\263\263"
  "\263\263 \263    \263\371 \371 \332\304\304\304\304\304\277 \371 \371\263    \263 \263\263\263"
  "\263\263\371\300\304\304\304\304\331 \332\277\371\300\304\304\304\304\304\331\371\332\277 \300\304\304\304\304\331\371\263\263\263"
  "\263\263 \376 \371 \371 \371\263\263 \371 \371 \371 \371 \263\263\371 \371 \371 \376 \263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\331\300\304\304\304\304\304\304\304\304\304\331\300\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
/* 0x4 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263    \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277    \263\263"
  "\263   \332\331 \371 \371 \371 \371 \371 \371 \371 \371 \371 \376 \300\277   \263\263"
  "\263   \263 \371\332\304\277 \332\304\304\304\277 \332\304\304\304\277 \332\304\277\371 \263   \263\263"
  "\263 \332\304\331\371\332\331\332\331 \300\304\304\304\331 \300\304\304\304\331 \300\277\300\277\371\300\304\277 \263\263"
  "\263 \263 \371 \263 \263 \371 \371 \371 \371 \371 \371 \371 \263 \263 \371 \263 \263\263"
  "\263\332\331\371\332\304\331 \263\371\332\277 \332\304\304\304\304\304\277 \332\277\371\263 \300\304\277\371\300\277\263\263"
  "\263\263\371 \263\332\304\304\331 \263\263\371\263     \263\371\263\263 \300\304\304\277\263 \371\263\263\263"
  "\263\263 \332\331\263 \371 \371\263\263 \300\304\304\304\304\304\331 \263\263\371 \371 \263\300\277 \263\263\263"
  "\263\263\371\263 \263\371\332\277 \263\263\371 \371 \371 \371 \371\263\263 \332\277\371\263 \263\371\263\263\263"
  "\263\263 \300\304\331 \263\263\371\263\300\304\304\304\304\304\304\304\304\304\331\263\371\263\263 \300\304\331 \263\263\263"
  "\263\263\371 \371 \371\263\263 \263\332\304\304\304\304\304\304\304\304\304\277\263 \263\263\371 \371 \371\263\263\263"
  "\263\263 \332\304\277 \263\263\371\263\263 \371 \371 \371 \371 \263\263\371\263\263 \332\304\277 \263\263\263"
  "\263\263\371\263 \263\371\300\331 \263\263\371\311\315\315\360\315\315\273\371\263\263 \300\331\371\263 \263\371\263\263\263"
  "\263\263 \300\277\263 \371 \371\263\263 \272     \272 \263\263\371 \371 \263\332\331 \263\263\263"
  "\263\263\371 \263\300\304\304\277 \263\263\371\272     \272\371\263\263 \332\304\304\331\263 \371\263\263\263"
  "\263\300\277\371\300\304\277 \263\371\300\331 \310\315\315\315\315\315\274 \300\331\371\263 \332\304\331\371\332\331\263\263"
  "\263 \263 \371 \263 \263 \371 \371       \371 \371 \263 \263 \371 \263 \263\263"
  "\263 \300\304\277\371\300\277\300\304\277 \332\304\304\277 \332\304\304\277 \332\304\331\332\331\371\332\304\331 \263\263"
  "\263   \263 \376\300\304\304\331 \300\304\304\331 \300\304\304\331 \300\304\304\331\371 \263   \263\263"
  "\263   \300\277 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \332\331   \263\263"
  "\263    \300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331    \263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
/* 0x5 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277 \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\304\277\263 \263\332\304\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\371 \371 \371 \371 \371 \371 \263\263 \263\263 \371 \371 \371 \371 \371 \371\263\263\263"
  "\263\263 \332\304\304\304\277 \311\315\315\273\371\300\331 \300\331\371\311\315\315\273 \332\304\304\304\277 \263\263\263"
  "\263\263\371\263   \263\371\272  \272 \371 \371 \371 \272  \272\371\263   \263\371\263\263\263"
  "\263\263 \263   \263 \272  \310\315\315\315\315\315\315\315\274  \272 \263   \263 \263\263\263"
  "\263\263\371\300\304\304\304\331\371\272             \272\371\300\304\304\304\331\371\263\263\263"
  "\263\263 \371 \371 \371 \310\315\315\315\315\315\315\315\315\315\315\315\315\315\274 \371 \371 \371 \263\263\263"
  "\263\300\304\277 \311\315\273\371 \371 \371 \371 \376 \371 \371 \371 \371\311\315\273 \332\304\331\263\263"
  "\263  \263 \272 \272 \332\304\304\304\304\304\277 \332\304\304\304\304\304\277 \272 \272 \263  \263\263"
  "\300\304\304\331\371\272 \272\371\263     \263\371\263     \263\371\272 \272\371\300\304\304\331\331"
  "     \272 \272 \263 \332\304\304\304\331 \300\304\304\304\277 \263 \272 \272      "
  "\332\304\304\277\371\272 \272\371\263 \263\371 \371 \371 \371 \371\263 \263\371\272 \272\371\332\304\304\277\277"
  "\263  \263 \272 \272 \300\304\331 \311\315\315\360\315\315\273 \300\304\331 \272 \272 \263  \263\263"
  "\263\332\304\331\371\310\315\274\371   \371\272     \272\371   \371\310\315\274\371\300\304\277\263\263"
  "\263\263 \371 \371 \371 \332\304\277 \272     \272 \332\304\277 \371 \371 \371 \263\263\263"
  "\263\263\371\311\315\315\315\273\371\263 \263\371\310\315\315\315\315\315\274\371\263 \263\371\311\315\315\315\273\371\263\263\263"
  "\263\263 \272   \272 \263 \263         \263 \263 \272   \272 \263\263\263"
  "\263\263\371\272   \272\371\263 \263\371\332\304\277 \332\304\277\371\263 \263\371\272   \272\371\263\263\263"
  "\263\263 \310\315\315\315\274 \300\304\331 \300\277\263 \263\332\331 \300\304\331 \310\315\315\315\274 \263\263\263"
  "\263\263\376 \371 \371 \371 \371 \371 \263\263 \263\263 \371 \371 \371 \371 \371 \376\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\304\304\304\304\331\263 \263\300\304\304\304\304\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331 \300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
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
/* 0x1 */
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
/* 0x2 */
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
/* 0x3 */
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
/* 0x4 */
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
/* 0x5 */
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
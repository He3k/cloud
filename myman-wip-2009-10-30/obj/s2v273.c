int maze_n = 1;
int maze_w = 30;
int maze_h = 27;
int maze_flags = 0;
const char *maze_args = "  RTOP=11.5 RGHOST=14.5 CGHOST=15 ROGHOST=2 COGHOST=1.5 RFRUIT=16.5 CFRUIT=15  RHERO=22.5  CHERO=15   RMSG=16     CMSG=10  RMSG2=10    CMSG2=10 ABOUT=\"Based on Pawel Labojko/P.A.W.\'s \'Pakus\' for the GameBoy Color\"";
static const char builtin_mazefile_str[] = "lvl/pakus.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\273\272 \272\272 \272\311\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\272\272 \272\272 \272\272\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\332\277\371\332\304\304\304\277\371\272\272 \272\272 \272\272\371\332\304\304\304\277\371\332\277\371\272\272"
  "\272\371\300\331\371\300\304\304\277\263\371\310\274 \310\274 \310\274\371\263\332\304\304\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\272\272"
  "\272\371\332\277\371\332\277\371\263\263\371\332\304\304\304\304\304\304\277\371\263\263\371\332\277\371\332\277\371\272\272"
  "\272\371\263\263\371\300\331\371\300\331\371\300\304\304\277\332\304\304\331\371\300\331\371\300\331\371\263\263\371\272\272"
  "\272\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\272\272"
  "\272\371\263\300\304\304\277\371\332\304\304\304\277 \263\263 \332\304\304\304\277\371\332\304\304\331\263\371\272\272"
  "\272\371\300\304\304\304\331\371\263\332\304\304\331 \300\331 \300\304\304\277\263\371\300\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\263\263          \263\263\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\273\371\263\263 \311\315\315\360\360\315\315\273 \263\263\371\311\315\315\315\315\315\274\274"
  "\315\315\315\315\315\315\274\371\300\331 \272      \272 \300\331\371\310\315\315\315\315\315\315\315"
  "       \371   \272      \272   \371        "
  "\315\315\315\315\315\315\273\371\332\277 \272      \272 \332\277\371\311\315\315\315\315\315\315\315"
  "\311\315\315\315\315\315\274\371\263\263 \310\315\315\315\315\315\315\274 \263\263\371\310\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\263\263          \263\263\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\263\300\304\304\277 \332\277 \332\304\304\331\263\371\332\304\304\304\277\371\272\272"
  "\272\371\263\332\304\304\331\371\300\304\304\304\331 \263\263 \300\304\304\304\331\371\300\304\304\277\263\371\272\272"
  "\272\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\272\272"
  "\272\371\263\263\371\332\277\371\332\277\371\332\304\304\331\300\304\304\277\371\332\277\371\332\277\371\263\263\371\272\272"
  "\272\371\300\331\371\300\331\371\263\263\371\300\304\304\304\304\304\304\331\371\263\263\371\300\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\263\263\371\371\371\371  \371\371\371\371\263\263\371\371\371\371\371\371\371\272\272"
  "\272\371\332\277\371\332\304\304\331\263\371\311\273 \311\273 \311\273\371\263\300\304\304\277\371\332\277\371\272\272"
  "\272\371\300\331\371\300\304\304\304\331\371\272\272 \272\272 \272\272\371\300\304\304\304\331\371\300\331\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\272\272 \272\272 \272\272\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\274\272 \272\272 \272\310\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
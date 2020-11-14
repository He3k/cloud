int maze_n = 1;
int maze_w = 40;
int maze_h = 24;
int maze_flags = 0;
const char *maze_args = "    RTOP=10.5   RGHOST=12    CGHOST=20  ROGHOST=2    COGHOST=3.5   RFRUIT=14.5  CFRUIT=20    RHERO=18.5   CHERO=20     RMSG=14      CMSG=15    RMSG2=9      CMSG2=15    ABOUT=\"Inspired by an example from cgkit\"";
static const char builtin_mazefile_str[] = "lvl/cgkit.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\304\277\371\332\304\304\304\304\304\304\277\371\263\263\371\332\304\304\304\304\304\304\277\371\332\304\304\304\304\304\277\371\272\272"
  "\272\376\300\304\304\304\304\304\331\371\300\304\304\304\304\304\304\331\371\300\331\371\300\304\304\304\304\304\304\331\371\300\304\304\304\304\304\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\315\265\371\332\304\277\371\306\315\315\315\315\270\325\315\315\315\315\265\371\332\304\277\371\306\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\273\371\263 \300\304\304\304\304\277 \263\263 \332\304\304\304\304\331 \263\371\311\315\315\315\315\315\315\315\274\274"
  "\0\0\0\0\0\0\0\0\272\371\263 \332\304\304\304\304\331 \300\331 \300\304\304\304\304\277 \263\371\272\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\272\371\263 \263              \263 \263\371\272\0\0\0\0\0\0\0\0\0"
  "\315\315\315\315\315\315\315\315\274\371\300\304\331 \311\315\315\315\360\360\360\360\315\315\315\273 \300\304\331\371\310\315\315\315\315\315\315\315\315\315"
  "         \371    \272          \272    \371          "
  "\315\315\315\315\315\315\315\315\273\371\332\304\277 \272          \272 \332\304\277\371\311\315\315\315\315\315\315\315\315\315"
  "\0\0\0\0\0\0\0\0\272\371\263 \263 \310\315\315\315\315\315\315\315\315\315\315\274 \263 \263\371\272\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\272\371\263 \263              \263 \263\371\272\0\0\0\0\0\0\0\0\0"
  "\311\315\315\315\315\315\315\315\274\371\300\304\331 \306\315\315\315\315\270\325\315\315\315\315\265 \300\304\331\371\310\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\270\277\371\306\315\315\315\315\315\315\265\371\300\331\371\306\315\315\315\315\315\315\265\371\332\325\315\315\315\315\265\371\272\272"
  "\272\376\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371  \371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\376\272\272"
  "\314\315\315\315\315\265\371\300\331\371\332\304\277\371\306\315\315\315\315\270\325\315\315\315\315\265\371\332\304\277\371\300\331\371\306\315\315\315\315\271\271"
  "\272\371\371\371\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263 \263\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\315\315\315\276\304\324\315\315\315\315\265\371\300\331\371\306\315\315\315\315\276\304\324\315\315\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
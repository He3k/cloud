int maze_n = 1;
int maze_w = 20;
int maze_h = 19;
int maze_flags = 0;
const char *maze_args = "READY=\"READY!\" GAMEOVER=\" GONE \" PLAYER1=\"PL ONE\" PLAYER2=\"PL TWO\" RGHOST=10.5 ROGHOST=1 COGHOST=0.5 RFRUIT=12.5 RTOP=8 RHERO=14.5 RMSG=12 CMSG=7 RMSG2=7 CMSG2=7 ABOUT=\"Inspired by a Pac-Man clone for the XGameStation\"";
static const char builtin_mazefile_str[] = "lvl/pacxgs.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\313\315\315\315\315\315\315\315\315\313\315\315\315\315\273\273"
  "\272\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\320\371\311\315\315\315\315\273\371\320\371\306\265\376\272\272"
  "\272\371\371\371\371\371\371\310\315\315\315\315\274\371\371\371\371\371\371\272\272"
  "\312\315\265\371\311\273\371\371\371\371\371\371\371\371\311\273\371\306\315\312\312"
  "   \371\272\310\273\371\311\315\315\273\371\311\274\272\371    "
  "\315\315\273\371\310\315\274\371\310\315\315\274\371\310\315\274\371\311\315\315\315"
  "\0\0\272\371\371\371\371      \371\371\371\371\272\0\0\0"
  "\0\0\272\371\311\315\265 \311\360\360\273 \306\315\273\371\272\0\0\0"
  "\315\315\274\371\320\371\371 \272  \272 \371\371\320\371\310\315\315\315"
  "   \371\371\371\322 \272  \272 \322\371\371\371    "
  "\315\315\273\371\306\315\274 \310\315\315\274 \310\315\265\371\311\315\315\315"
  "\0\0\272\371\371\371\371      \371\371\371\371\272\0\0\0"
  "\311\315\274\371\306\313\315\265\371\306\265\371\306\315\313\265\371\310\315\273\273"
  "\272\371\371\371\371\272\371\371\371  \371\371\371\272\371\371\371\371\272\272"
  "\272\371\311\273\371\272\371\311\315\315\315\315\273\371\272\371\311\273\371\272\272"
  "\272\376\310\274\371\320\371\310\315\315\315\315\274\371\320\371\310\274\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
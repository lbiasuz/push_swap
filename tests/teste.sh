#MEMORY LEAK
valgrind ./push_swap 0 1
valgrind ./push_swap 0 1 2 3
valgrind ./push_swap 0 1 2 3 4
valgrind ./push_swap 0 1 2 3 4 5
valgrind ./push_swap $ARG100 > /dev/null
valgrind ./push_swap 5 3 4 6 9 > /dev/null
valgrind ./push_swap 3 2 4 > /dev/null
valgrind ./push_swap 4 9 8 0 > /dev/null
valgrind ./push_swap 0 1 2 3 4 5 6 7 8 9 10 11
#NO RETURN
./push_swap 2147483648 4 3
./push_swap 2147483647 4 4 3
./push_swap a 2147483647 4 4 3
./push_swap -2147483649 4 3
./push_swap 0
./push_swap 0 1 2 3 4 5 6
./push_swap 0 1 2 3 4 5 6 7
./push_swap 0 1 2 3 4 5 6 7 8
./push_swap 0 1 2 3 4 5 6 7 8 9
./push_swap 0 1 2 3 4 5 6 7 8 9 10
#CHECKER
./push_swap 0 3 1 | ./checker_linux 0 3 1
./push_swap 0 3 5 2 1 | ./checker_linux 0 3 5 2 1
./push_swap 3 5 2 1 | ./checker_linux 3 5 2 1
./push_swap 0 3 7 5 2 8 | ./checker_linux 0 3 7 5 2 8
ARG100="67 37 6 96 72 33 12 75 5 69 9 48 24 66 64 93 3 39 7 11 74 95 54 94 79 84 22 28 10 56 47 30 83 19 98 80 77 49 88 2 57 92 13 36 90 26 14 55 89 71 15 32 53 20 68 63 43 31 25 78 60 46 1 29 16 42 41 59 45 17 73 99 8 91 34 18 23 61 27 76 38 58 62 70 123 456 756 767 333 222 132 985 458 888 935 764";
./push_swap $ARG100 | ./checker_linux $ARG100
ARG500="49 -4 -361 -215 424 312 295 -450 -334 -85 65 60 -443 31 -78 -383 428 171 452 -429 5 177 -472 161 222 19 -44 155 -203 -228 227 234 -283 -124 -430 338 125 -476 -244 -336 344 258 -212 -480 -280 247 486 241 -485 264 367 -159 326 82 179 -378 -23 -396 370 -439 -11 -89 -278 183 217 -92 381 443 -98 406 -139 -375 -411 -227 226 3 -323 465 -328 -116 -493 -339 440 -436 81 246 -26 -399 -127 -318 378 -290 -148 242 42 -123 -348 373 491 -492 445 -341 400 71 185 402 329 -310 -209 252 -42 -418 140 153 334 -371 -329 -312 376 -18 133 66 -118 433 361 404 468 -366 331 369 -343 360 480 -205 -362 145 54 164 286 -284 385 330 -313 101 -414 -105 -15 405 77 -77 408 -291 311 374 -330 -108 -60 -177 -17 209 124 -75 -462 -202 459 -45 -104 196 -140 -254 274 -351 -358 -500 -470 -2 -91 283 -213 -55 -69 -149 240 221 -337 -122 202 410 212 -252 -309 -342 110 416 -146 -397 388 56 86 -262 -275 -497 -419 -320 305 -210 -178 420 -474 -452 -316 -422 -297 -129 120 -427 -392 -126 -196 397 -37 282 -296 26 128 28 429 -224 -363 96 215 52 -250 394 -125 -276 336 493 -401 -197 142 126 -27 75 43 68 95 279 387 -484 47 386 -369 500 -426 -360 -24 203 -30 123 308 -311 390 48 -352 363 184 -498 348 -7 -391 -434 270 248 -119 457 -302 -101 446 -216 41 383 -9 294 167 275 -73 223 458 104 92 -189 57 392 4 -258 67 200 -479 -305 213 450 -28 -243 232 -76 487 178 464 -43 -20 -463 -138 366 -208 324 -95 189 119 475 291 259 154 -5 -454 130 -249 -251 29 165 -147 -63 59 166 182 111 339 -136 418 -304 -194 -420 -47 332 -6 -372 337 85 192 -288 156 -471 -374 122 -169 -79 -273 74 129 210 281 102 310 -322 17 -179 -404 354 417 382 12 -154 -150 -448 -231 -40 393 7 139 20 2 -67 -338 -182 144 328 288 -295 -442 -300 151 -293 -217 455 -222 -413 -260 -487 419 349 79 -166 112 -56 118 -315 -453 -218 268 401 -232 30 -364 254 267 -109 -137 18 235 -355 -265 -21 160 -468 107 449 -461 220 -368 150 482 186 138 -120 340 -96 292 199 -236 -483 181 -444 421 -175 478 -405 -447 333 -408 -165 -268 97 -478 300 62 219 -81 194 -467 38 413 481 -151 -193 -247 372 277 176 131 461 -239 273 -270 114 44 255 -13 -59 243 173 -325 -389 293 -83 23 -88 168 320 115 -274 -164 -113 -412 -385 -188 -376 250 276 316 -223";
./push_swap $ARG500 | ./checker_linux $ARG500
./push_swap $ARG500 | valgrind ./checker $ARG500
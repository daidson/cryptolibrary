# 💻 CryptoLibrary

>An encryption and decryption library with the most used algorithms.

- [GNU Compiler Collection - GCC](https://gcc.gnu.org/install/download.html)

## 👩‍🏫 Getting started

- Configure your environment downloading GCC.
- Run `gcc cryptosystem.c -o cryptosystem.x` to compile the program.
- Start having fun running: `./cryptosystem.x`

## 🧪 Tests and Error mapping

- To run tests and error mapping. use:
`gcc -Wall -Wextra -std=gnu18 -fdiagnostics-color=always -Ofast -DVERSION=""2.1.170611.090824"" -DBUILD=""170611.090824"" -DDEBUG=0 -DD_ -D_FORTIFY_SOURCE=1 -Wl,--defsym,BUILD_170611_090824=0 -lm cryptosystem.c -o cryptosystem.x 2>&1 | tee errors.err`
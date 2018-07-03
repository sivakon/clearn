## C and embedding (Wren, Luajit etc.)

TODO: Compile all C learning and links for understanding language

1. `__attribute__((pure))` is a function attribute for specifying pure functions. Repeated calls turn it into cached. (Compiler optimization)

2. Using Wren within C
- `sudo ln -s /--/wren/lib/libwren.a /usr/local/lib/libwren.a`
- `sudo ln -s /--/wren/src/include/wren.h /usr/local/include/wren.h`

3. TODO:
- Rust + gluon is also promising

Embedding tutorial
[wren embedding](http://nelari.us/post/wren-embedding-1/)

Using OpenMPI
`gcc-8 -fopenmp hello_openmp.c`

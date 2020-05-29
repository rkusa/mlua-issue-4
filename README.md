Run

```
make
```

(you might have to replace the included lua5.1 lib with another one, if you are not on macOS)

You should see the following error:

```
./test
test(22665,0x108199dc0) malloc: *** error for object 0x107dc75a8: pointer being freed was not allocated
test(22665,0x108199dc0) malloc: *** set a breakpoint in malloc_error_break to debug
make: *** [all] Abort trap: 6
```

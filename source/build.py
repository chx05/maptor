from os import system, path, mkdir, remove

out_dir = 'out'

if not path.exists(out_dir):
    mkdir(out_dir)
else:
    assert path.isdir(out_dir)

system(rf'gcc main.c -o {out_dir}\maptor.exe libs\raylib\lib\libraylib.a -lopengl32 -lgdi32 -lwinmm -lkernel32 -luser32')

import os
import shutil

def get_terminal_width():
    return os.get_terminal_size().columns

def repeation():
    width = get_terminal_width() - 1
    print('=' * width)

repeation()
print("Tranforming AurorOS")

if os.path.exists('original/apps'):
    shutil.rmtree('original/apps')

src = 'original/kernel/kernel.c'
dst = 'src/main.c'
shutil.move(src, dst)
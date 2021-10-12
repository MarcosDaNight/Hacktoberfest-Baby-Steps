import winsound
from random import randrange
freq=randrange(4000)
dur=randrange(200000)
winsound.Beep(freq,dur)

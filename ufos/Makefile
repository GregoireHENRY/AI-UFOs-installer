GNU = g++
CFLAGS = -g -Ofast -Wall -Wextra
LIBS = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lopengl32 -L ../SFML/lib -I ../SFML/include

ovni: lazy user.o
	$(GNU) $(CFLAGS) -o Ufos ufos.o tools.o sfmltools.o Graphics.o Ufo.o Flag.o user.o bot.o icon64.o $(LIBS)

lazy:
	lzz -sx cc -hx hh *.lzz

user.o: user.cc user.hh
	$(GNU) $(CFLAGS) -c user.cc $(LIBS)

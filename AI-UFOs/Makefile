# ==== COMPILER FLAGS ==========================================================
GNU := g++
LFLAGS := -g -Ofast -Wall
INCLUDES := ../SFML/include
LIBRARIES := ../SFML/lib
LINKS := sfml-graphics \
         sfml-audio \
		 sfml-window \
		 sfml-system \
		 opengl32

# ==== PROJECT FILES ===========================================================
NAME := AI-UFOs
PATH_SRC := ./src/
PATH_OBJ := ./obj/
OBJS := user
ADD := icon64 \
       main \
	   tools \
	   sfmltools \
	   Graphics \
	   Ufo \
	   Flag \
	   bot

# ==== APPLY SETUP =============================================================
OBJSO := $(addsuffix .o, $(OBJS))
OBJSF := $(addprefix $(PATH_OBJ), $(OBJSO))
ADDO := $(addsuffix .o, $(ADD))
ADDF := $(addprefix $(PATH_OBJ), $(ADDO))
INCLUDES := $(addprefix -I , $(INCLUDES))
LIBRARIES := $(addprefix -L , $(LIBRARIES))
LINKS := $(addprefix -l, $(LINKS))
RFLAGS := $(LINKS) $(LIBRARIES) $(INCLUDES)

# ==== PROCESS =================================================================
process: lazy \
	     builder

# ==== SUB-PROCESS =============================================================
lazy:
	lzz *.AI -sx cc -hx hh -o src

builder: $(OBJSF)
	$(GNU) $(LFLAGS) -o $(NAME) $^ $(ADDF) $(RFLAGS)

$(PATH_OBJ)%.o: $(PATH_SRC)%.cc
	$(GNU) $(LFLAGS) -o $@ -c $< $(RFLAGS)

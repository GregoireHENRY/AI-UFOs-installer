# ==== COMPILER FLAGS ==========================================================
GNU := g++
LFLAGS := -g -Ofast -Wall
RFLAGS :=
INCLUDES := 
LIBRARIES := 
LINKS := sfml-graphics \
         sfml-audio \
	     sfml-window \
	     sfml-system \
	     GL

# ==== PROJECT FILES ===========================================================
NAME := AI-UFOs
PATH_SRC := ./src/
PATH_OBJ := ./obj/
OBJS :=	user
ADD := main \
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
LIBFLAGS := $(LINKS) $(LIBRARIES) $(INCLUDES)

# ==== PROCESS =================================================================
process: lazy \
         builder

# ==== SUB-PROCESS =============================================================
lazy:
	lzz *.AI -sx cc -hx hh -o src

builder: $(OBJSF)
	$(GNU) $(LFLAGS) -o $(NAME) $^ $(ADDF) $(LIBFLAGS) $(RFLAGS)

$(PATH_OBJ)%.o: $(PATH_SRC)%.cc
	$(GNU) $(LFLAGS) -o $@ -c $< $(LIBFLAGS) $(RFLAGS)

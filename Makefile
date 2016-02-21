#CROSS = arm-linux-
SRC:=$(shell ls *.S)
SRC+=$(shell ls *.c)
OBJS:=$(patsubst %.S, %.o, $(SRC))
OBJS+=$(patsubst %.c, %.o, $(SRC))
OBJS:=$(filter %.o, $(OBJS))

TARGET:=my_menu.bin

$(TARGET) : $(OBJS)
	$(CROSS)g++  -g -o  $(TARGET)  $^ -pthread

%.o : %.S
	$(CROSS)g++  -g -c -o $@  $^
	
%.o : %.c
	$(CROSS)g++  -g -c -o $@  $^
	
clean:
	rm -f  *.bin  *.dis  *.elf  *.o
	

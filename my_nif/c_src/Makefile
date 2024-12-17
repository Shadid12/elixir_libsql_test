CFLAGS = -fPIC -shared
TARGET = my_nif.so

# Dynamically find the Erlang include directory
ERL_INCLUDE := $(shell erl -eval 'io:format("~s/erts-~s/include", [code:root_dir(), erlang:system_info(version)]).' -noshell -s init stop)

all:
	@gcc $(CFLAGS) -o $(TARGET) native.c -I$(ERL_INCLUDE)
	@echo "Successfully built $(TARGET)"

clean:
	@rm -f $(TARGET)
	@echo "Cleaned up!"

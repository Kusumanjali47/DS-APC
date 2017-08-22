TARGET := ../Library/libapcm.so
SRCS := $(wildcard *.c)
CFLAG := -I ../Include

${TARGET} : ${SRCS}
	gcc ${CFLAG} -fPIC -shared $^ -o $@

clean:
	rm ${TARGET}

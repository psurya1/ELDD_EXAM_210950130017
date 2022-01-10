obj-m:=ioctl.o
KD=/lib/modules/$(shell uname -r)/build/
PWD:=$(shell pwd)

default:
	$(MAKE) -C $(KD) M=$(PWD) modules
	gcc -o writer writer.c
	gcc -o reader reader.c
	gcc -o ioctl_app ioctl_app.c

clean:
	$(MAKE) -C $(KD) M=$(PWD) clean
	rm writer reader ioctl_app

mknodes:
	mknod /dev/question_1 c 255 10
CONFIG_MODULE_SIG=n

obj-m = basic_usb.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules_install
	
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

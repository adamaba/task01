#include  <linux/kernel.h>
#include  <linux/module.h>

int init_module(void)

{
	printk(KERN_INFO "hello world" );
	return 0;
}

void cleanup_module(void)

{
	printk(KERN_INFO "good bye" );

}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mamadou Adama Ba");
MODULE_DESCRIPTION("Eudyptula Challenge");

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include<linux/slab.h>                 //kmalloc()
#include<linux/uaccess.h>              //copy_to/from_user()
#include <linux/kthread.h>             //kernel threads
#include <linux/sched.h>               //task_struct 
#include <linux/delay.h>
 
static struct task_struct *my_thread;
 
int thread_function(void *pv)
{
    int i=0;
    while(!kthread_should_stop()) {
        printk(KERN_INFO "In Thread Function %d\n", i++);
        msleep(1000);
    }
    return 0;
}
 
 
static int __init my_driver_init(void)
{

	my_thread = kthread_create(thread_function,NULL,"myThread");
	if(my_thread) {
		wake_up_process(my_thread);
		return 0;
	} else {
		printk(KERN_ERR "Cannot create kthread\n");
		return -1;
	}
}
 
void __exit my_driver_exit(void)
{
        kthread_stop(my_thread);
        printk(KERN_INFO "Device Driver Remove...Done!!\n");
}
 
module_init(my_driver_init);
module_exit(my_driver_exit);
 
MODULE_LICENSE("GPL");

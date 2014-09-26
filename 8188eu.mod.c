#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd4733cff, "module_layout" },
	{ 0x400c0bd6, "register_netdevice" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5dce6b75, "complete_and_exit" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xd0d8621b, "strlen" },
	{ 0xb2ba53eb, "dev_set_drvdata" },
	{ 0xa0ce6caa, "find_vpid" },
	{ 0x62c1ade7, "malloc_sizes" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x1f3ffe26, "netif_carrier_on" },
	{ 0xa4eb4eff, "_raw_spin_lock_bh" },
	{ 0xe95e301a, "skb_clone" },
	{ 0xc97b783b, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5f8bffe2, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x2addc0be, "down_interruptible" },
	{ 0x1be40845, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x96de5def, "usb_kill_urb" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xcc99e735, "mutex_unlock" },
	{ 0xa8749777, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x671c95aa, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x46b3ad3a, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb444bbeb, "__netdev_alloc_skb" },
	{ 0xcc87729d, "netif_rx" },
	{ 0x303297f4, "__pskb_pull_tail" },
	{ 0x48eb0c0d, "__init_waitqueue_head" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xf98e9cb0, "skb_queue_purge" },
	{ 0x2bc95bd4, "memset" },
	{ 0xd126d593, "dev_alloc_skb" },
	{ 0xf97456ea, "_raw_spin_unlock_irqrestore" },
	{ 0x95435001, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xff389b63, "usb_deregister" },
	{ 0xdd3afd66, "mutex_lock_interruptible" },
	{ 0xce65a0a8, "__mutex_init" },
	{ 0x50eedeb8, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x5152e605, "memcmp" },
	{ 0x90c768f7, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0x84ac939, "register_netdev" },
	{ 0xf23c3bfa, "wireless_send_event" },
	{ 0x194405b9, "usb_control_msg" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9e492980, "skb_push" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xf271ee3f, "kill_pid" },
	{ 0x8e9ec173, "skb_pull" },
	{ 0x85fb5e2a, "device_init_wakeup" },
	{ 0xd7fb568a, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x9b6ddd30, "flush_signals" },
	{ 0xbaabb4b7, "skb_queue_tail" },
	{ 0xe4d6e43a, "netif_device_attach" },
	{ 0xa3bbd047, "usb_submit_urb" },
	{ 0xb3945d82, "usb_get_dev" },
	{ 0x8bf826c, "_raw_spin_unlock_bh" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x25ba340b, "usb_reset_device" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x4f42db44, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd8fd1969, "eth_type_trans" },
	{ 0xb762e2e5, "wake_up_process" },
	{ 0x6fe340df, "kmem_cache_alloc_trace" },
	{ 0x67f7403e, "_raw_spin_lock" },
	{ 0x21fb443e, "_raw_spin_lock_irqsave" },
	{ 0x50a9969b, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8f65bbc8, "dev_alloc_name" },
	{ 0xc4554217, "up" },
	{ 0xeb3d960c, "usb_register_driver" },
	{ 0x7071bb4f, "request_firmware" },
	{ 0x82dea0a9, "skb_dequeue" },
	{ 0xa12f8b16, "unregister_netdev" },
	{ 0x19a9e62b, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1b77b03, "__netif_schedule" },
	{ 0x8235805b, "memmove" },
	{ 0x7d50a24, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xae309282, "skb_put" },
	{ 0xb1d9523e, "wait_for_completion_timeout" },
	{ 0x33d169c9, "_copy_from_user" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x91f4d1e9, "skb_copy_bits" },
	{ 0x74f13e03, "dev_get_drvdata" },
	{ 0x2672ca7a, "usb_free_urb" },
	{ 0xf8b5d734, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
	{ 0xb6bcdacf, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5748fb87, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A64F36E917C62797F04AD4E");

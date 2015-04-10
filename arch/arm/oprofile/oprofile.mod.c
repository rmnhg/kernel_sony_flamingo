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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15085dd8, "module_layout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd20bf6ba, "dcookie_unregister" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2ccac4c9, "up_read" },
	{ 0xea065e01, "task_handoff_unregister" },
	{ 0x3c942368, "profile_event_unregister" },
	{ 0xc385cb58, "perf_num_counters" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x1adb62a4, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2f4113a2, "dcookie_register" },
	{ 0x59d696b6, "register_module_notifier" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x92344f50, "perf_event_release_kernel" },
	{ 0xef374a04, "hrtimer_forward" },
	{ 0x7c904ded, "unregister_module_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9062c322, "ring_buffer_consume" },
	{ 0xf19e9355, "cpu_online_mask" },
	{ 0x34184afe, "current_kernel_time" },
	{ 0xf64478a, "hrtimer_cancel" },
	{ 0xc65d3eed, "ring_buffer_entries_cpu" },
	{ 0x4fbea35c, "no_llseek" },
	{ 0x225e909e, "schedule_delayed_work_on" },
	{ 0x52c8f617, "free_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xce219a47, "generic_delete_inode" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x77222798, "dput" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x9621849f, "ring_buffer_event_data" },
	{ 0x2c6ba30b, "mutex_unlock" },
	{ 0xb14580ce, "mount_single" },
	{ 0x7e02e988, "mmput" },
	{ 0x999e8297, "vfree" },
	{ 0x9ab39e7c, "platform_device_register_full" },
	{ 0x77e67ce5, "nonseekable_open" },
	{ 0x343a1a8, "__list_add" },
	{ 0x6389d4c5, "down_read" },
	{ 0xf4fc2d6c, "__ring_buffer_alloc" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d6edb94, "kill_litter_super" },
	{ 0x2661c00b, "default_llseek" },
	{ 0x9cd9dce, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x68dce1c9, "d_rehash" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x97bbb7c2, "get_task_mm" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x71f2037c, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0xda94550f, "noop_llseek" },
	{ 0x838b13e7, "ring_buffer_free" },
	{ 0xc9ac7b9, "platform_device_unregister" },
	{ 0x795d6ef0, "platform_driver_register" },
	{ 0x2820e2a5, "simple_open" },
	{ 0x6b29a1fa, "ring_buffer_event_length" },
	{ 0x74cc1cbe, "unregister_cpu_notifier" },
	{ 0x586b8576, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5d74d6a3, "simple_dir_operations" },
	{ 0x74abdafa, "task_handoff_register" },
	{ 0xfd305341, "walk_stackframe" },
	{ 0x4550ba8a, "register_cpu_notifier" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd3e6f60d, "cpu_possible_mask" },
	{ 0x77edf722, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0xd7d79132, "put_online_cpus" },
	{ 0xe49775f9, "flush_delayed_work" },
	{ 0x168fa128, "hrtimer_start" },
	{ 0xc0a98385, "profile_pc" },
	{ 0x2c81ec75, "__irq_regs" },
	{ 0x3efb35c9, "get_online_cpus" },
	{ 0x84741c31, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x56f31e92, "_raw_spin_lock_irqsave" },
	{ 0x786ed8a, "register_filesystem" },
	{ 0x44b4693d, "__wake_up" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x767e528a, "armpmu_get_pmu_id" },
	{ 0x37a0cba, "kfree" },
	{ 0x76bff920, "prepare_to_wait" },
	{ 0xe9186739, "hrtimer_init" },
	{ 0xaf825066, "get_dcookie" },
	{ 0xa024dc9e, "d_make_root" },
	{ 0x38df85de, "simple_statfs" },
	{ 0xda4c2ab0, "d_alloc_name" },
	{ 0x2824f314, "finish_wait" },
	{ 0x9159b9d6, "profile_event_register" },
	{ 0xda2bcf06, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3820a2ee, "perf_event_create_kernel_counter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x17259767, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x86e0edeb, "platform_driver_unregister" },
	{ 0x5541ea93, "on_each_cpu" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x666eb0b6, "simple_dir_inode_operations" },
	{ 0x66f3c4a3, "d_instantiate" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x918ad429, "ring_buffer_lock_reserve" },
	{ 0xd87601cc, "ring_buffer_unlock_commit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


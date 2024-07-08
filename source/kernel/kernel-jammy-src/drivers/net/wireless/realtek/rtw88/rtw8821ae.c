// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause
/* Copyright(c) 2018-2019  Realtek Corporation
 */

#include <linux/module.h>
#include <linux/pci.h>
#include "pci.h"
#include "rtw8821a.h"

static const struct pci_device_id rtw_8821ae_id_table[] = {
	{
		PCI_DEVICE(PCI_VENDOR_ID_REALTEK, 0x8821),
		.driver_data = (kernel_ulong_t)&rtw8821a_hw_spec
	},
	{}
};
MODULE_DEVICE_TABLE(pci, rtw_8821ae_id_table);

static struct pci_driver rtw_8821ae_driver = {
	.name = "rtw_8821ae",
	.id_table = rtw_8821ae_id_table,
	.probe = rtw_pci_probe,
	.remove = rtw_pci_remove,
	.driver.pm = &rtw_pm_ops,
	.shutdown = rtw_pci_shutdown,
};
module_pci_driver(rtw_8821ae_driver);

MODULE_AUTHOR("Realtek Corporation");
MODULE_DESCRIPTION("Realtek 802.11ac wireless 8821ae driver");
MODULE_LICENSE("Dual BSD/GPL");

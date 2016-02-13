/*
 * Copyright (c) 2013-2016 The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */

/* ================================================================ */
/* BMI declarations and prototypes */
/* */
/* ================================================================= */

#ifndef _BMI_H_
#define _BMI_H_
#include "bmi_msg.h"
#include "qdf_trace.h"
#include "ol_if_athvar.h"
#include "hif.h"

struct ol_context;
QDF_STATUS ol_cds_init(qdf_device_t qdf_dev, void *hif_ctx);
void ol_cds_free(void);

/**
 * struct hif_config_info - Place Holder for hif confiruation
 * @enable_uart_print: UART Print
 * @enable_self_recovery: Self Recovery
 * @enable_fw_log:      To Enable FW LOG
 * @enable_lpass_support: LPASS support
 * @enable_ramdump_collection: Ramdump Collection
 *
 * Structure for holding ini parameters.
 */

struct ol_config_info {
	bool enable_uart_print;
	bool enable_self_recovery;
	bool enable_fw_log;
	bool enable_lpass_support;
	bool enable_ramdump_collection;
};

void ol_init_ini_config(struct ol_context *ol_ctx,
			struct ol_config_info *cfg);
void bmi_cleanup(struct ol_context *scn);
QDF_STATUS bmi_done(struct ol_context *ol_ctx);
QDF_STATUS bmi_download_firmware(struct ol_context *ol_ctx);
#endif /* _BMI_H_ */

/*
 * Copyright (c) 2004-2008 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2006-2020 Cisco Systems, Inc.  All rights reserved
 * Copyright (c) 2019      Intel, Inc.  All rights reserved.
 * Copyright (c) 2019      Research Organization for Information Science
 *                         and Technology (RIST).  All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

/**
 * @file
 *
 * Processor stats for Posix systems.
 *
 */


#ifndef prte_pstat_LINUX_EXPORT_H
#define prte_pstat_LINUX_EXPORT_H

#include "prte_config.h"

#include "src/mca/mca.h"
#include "src/mca/pstat/pstat.h"


BEGIN_C_DECLS

/**
 * Globally exported variable
 */
PRTE_EXPORT extern const prte_pstat_base_component_t prte_pstat_linux_component;

PRTE_EXPORT extern const prte_pstat_base_module_t prte_pstat_linux_module;

END_C_DECLS
#endif /* prte_pstat_LINUX_EXPORT_H */
